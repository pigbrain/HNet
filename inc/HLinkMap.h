

#ifndef __HLINKMAP_H__
#define __HLINKMAP_H__

#include "HNetLib.h"


class HLink;
class HLinkPtr;

class HNET_API HLinkMap 
{
private :
	unordered_map<int, HLinkPtr>	m_mapLink;

	
public :
	HLinkMap();
	virtual ~HLinkMap();

	void AddLink(int nFD, const HLinkPtr& cLink);
	void DeleteLink(int nFD);
	HLinkPtr GetLink(int nFD);
	
};

#endif

