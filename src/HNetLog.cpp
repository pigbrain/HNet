
#include "HNetLog.h"
#include "HMutex.h"

HNetLogger::HNetLogger()
{
	m_pLock = new HMutex();
	m_nLogLevel = HNET_LOG_DEBUG;
	m_bHexDump = false;
}

HNetLogger::~HNetLogger()
{
	SAFE_DELETE(m_pLock);
}
	
void HNetLogger::SetLogFile(const char* szFile)
{
	if (NULL == szFile)
		return;
	
	m_strLogFile = szFile;
}

void HNetLogger::SetLogLevel(int nLevel)
{
	if (nLevel < HNET_LOG_DEBUG)
		return;
	if (nLevel > HNET_LOG_FATAL)
		return;

	m_nLogLevel = nLevel;
}

void HNetLogger::SetHexDump(bool bEnable)
{
	m_bHexDump = bEnable;
}

int HNetLogger::GetLogLevel()
{
	return m_nLogLevel;
}

const char*	HNetLogger::GetLogFile()
{	
	if (true == m_strLogFile.empty())
		return NULL;

	return m_strLogFile.c_str();
}

bool HNetLogger::IsHexDumpEnable()
{
	return m_bHexDump;
}	

void HNetLogger::Log(int nLevel, const char *szLog)
{
	if (nLevel < GetLogLevel()) return;
	
	FILE *fp = (NULL == GetLogFile()) ? stdout : fopen(GetLogFile(),"a");
	if (!fp) return;

	const char *c = "DIWF";
    char szTime[100] = {0, };

	CS_GUARD(m_pLock)
	
    time_t now = time(NULL);
	strftime(szTime, sizeof(szTime), "%d %b %H:%M:%S", localtime(&now));
	fprintf(fp,"[%d] %s %c %s\n",(int)getpid(),szTime, c[nLevel], szLog);
	fflush(fp);
	
	if (NULL != GetLogFile()) fclose(fp);
}


void HNetLogger::HexLog(int nLevel, const char *szBuffer, int nLength)
{
	if (nLevel < GetLogLevel()) return;
	
	if (false == IsHexDumpEnable()) return;

	FILE *fp = (NULL == GetLogFile()) ? stdout : fopen(GetLogFile(),"a");
	if (!fp) return;
	
	CS_GUARD(m_pLock)
	
	char szOutput[17] = {0, };
	const unsigned char* pBuffer = (const unsigned char*)szBuffer;
	int i = 0;
	
	for (i = 0; i < nLength; i++)
	{
		if ((i % 16) == 0) 
		{
			if (i != 0)
                fprintf(fp, "  %s\n", szOutput);

			fprintf(fp, "  %04x ", i);
		}

		fprintf(fp, " %02x", pBuffer[i]);

		if ((pBuffer[i] < 0x20) || (pBuffer[i] > 0x7e))
            szOutput[i % 16] = '.';
        else
            szOutput[i % 16] = pBuffer[i];
        szOutput[(i % 16) + 1] = '\0';
	}

	 while ((i % 16) != 0) {
        fprintf(fp, "   ");
        i++;
    }

    fprintf(fp, "  %s\n", szOutput);
	fflush(fp);
	
	if (NULL != GetLogFile()) fclose(fp);
}

void HNET_LOG(int nLevel, const char *szFormat, ...)
{
	if (nLevel < HNetLogger()->GetLogLevel()) return;
		
	char szLog[HNET_LOG_MAX_LEN] = {0, };

    va_list ap;
	va_start(ap, szFormat);
    vsnprintf(szLog, sizeof(szLog), szFormat, ap);
    va_end(ap);

	HNetLogger()->Log(nLevel, szLog);
}


void HNET_HEX_DUMP(int nLevel, const char* szBuffer, int nLength)
{
	if (nLevel < HNetLogger()->GetLogLevel()) return;

	HNetLogger()->HexLog(nLevel, szBuffer, nLength);
}


