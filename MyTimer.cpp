#include <iostream>
#include "MyTimer.h"

using namespace std;

CMyTimer::CMyTimer( const int & nInterval ):CTimer( nInterval )
{
    cout << "HELLO" << endl;
}

void CMyTimer::TickTock()
{
    cout << "HELLO" << endl;
    CTimer::TickTock();
}