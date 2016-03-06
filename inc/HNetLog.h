
#ifndef __HNETLOG_H__
#define __HNETLOG_H__

#include "HNetLib.h"



#define HNET_LOG_DEBUG				0
#define HNET_LOG_INFO				1
#define HNET_LOG_WARN				2
#define HNET_LOG_FATAL				3
#define HNET_LOG_MAX_LEN			8192


class HMutex;


class HNetLogger
{
private :
	HNetLogger();

public :
	~HNetLogger();
	static HNetLogger* GetInstance() 
	{
		static HNetLogger  INSTANCE;
		return &INSTANCE;
	}
	
	void	SetLogFile(const char* szFile);
	void	SetLogLevel(int nLevel);
	
	void	SetHexDump(bool bEnable);

	int			GetLogLevel();
	const char*	GetLogFile();
	bool		IsHexDumpEnable();

	void		Log(int nLevel, const char *szLog);
	void		HexLog(int nLevel, const char *szBuffer, int nLength);

private :
	HMutex*		m_pLock;

	string		m_strLogFile;
	int			m_nLogLevel;
	bool		m_bHexDump;
};

inline HNetLogger* HNetLogger()
{
    return HNetLogger::GetInstance();
}

void HNET_LOG(int nLevel, const char *szFormat, ...);

void HNET_HEX_DUMP(int nLevel, const char* szBuffer, int nLength);

#endif

