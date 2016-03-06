
#include "HLink.h"
#include "HLinkMap.h"


HLinkMap::HLinkMap()
{

}

HLinkMap::~HLinkMap()
{
	m_mapLink.clear();
}

void HLinkMap::AddLink(int nFD, const HLinkPtr& cLink)
{
	m_mapLink.insert(make_pair<int, HLinkPtr>(nFD, cLink));
}

void HLinkMap::DeleteLink(int nFD)
{
	m_mapLink.erase(nFD);
}

HLinkPtr HLinkMap::GetLink(int nFD)
{
	unordered_map<int, HLinkPtr>::iterator it =  m_mapLink.find(nFD);
	if (it == m_mapLink.end())
		return NULL;

	return (*it).second;
}

