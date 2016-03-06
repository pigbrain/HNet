


#ifndef __HATOMICCOUNTER_H__
#define __HATOMICCOUNTER_H__

#include "HNetLib.h"



class HNET_API HAtomicCounter
{
public:

    explicit HAtomicCounter(int nValue);

    int operator++()
    {
        return atomic_exchange_and_add( &m_nValue, +1 ) + 1;
    }

    int operator--()
    {
        return atomic_exchange_and_add( &m_nValue, -1 ) - 1;
    }

	int GetCount() 
	{
		return m_nValue;
	}

	
    void Increase() 
	{ 
		atomic_exchange_and_add( &m_nValue, +1 ) + 1;
	}
    void Decrease() 
	{ 
		atomic_exchange_and_add( &m_nValue, -1 ) - 1;
	}


private:
/*
    HAtomicCounter(HAtomicCounter const &) {};
    HAtomicCounter & operator=(HAtomicCounter const &) {};
*/
    mutable int m_nValue;

private:

    inline int atomic_exchange_and_add( int * pw, int dv )
    {
        // int r = *pw;
        // *pw += dv;
        // return r;

        int r;

        __asm__ __volatile__
        (
            "lock\n\t"
            "xadd %1, %0":
            "+m"( *pw ), "=r"( r ): // outputs (%0, %1)
            "1"( dv ): // inputs (%2 == %1)
            "memory", "cc" // clobbers
        );

        return r;
    }
};





#endif

