#include <iostream>
#include "Timer.h"

using namespace std;

CTimer::CTimer( const int & nInterval ) :
m_nTime( 0 )
{
    cout << "CTimer " << this << " : constructor, nInterval is " << nInterval << endl;
    m_nInterval = nInterval;
}

CTimer::~CTimer( void )
{
    cout << "CTimer " << this << " : destructor, nInterval is " << m_nInterval << endl;
}

void CTimer::TickTock( void )
{
    m_nTime += m_nInterval;
    cout << "CTimer " << this << " : time = " << m_nTime << endl;
}