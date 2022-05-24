#include "Timer.h"
#include <iostream>
#include "InheritWidget.h"

using namespace std;

CInheritWidget::CInheritWidget( const int & nInterval ):CTimer( nInterval )
{
    cout << "CInheritWidget " << this << " : constructor" << endl;
}

CInheritWidget::~CInheritWidget()
{
    cout << "CInheritWidget " << this << " : destructor" << endl;
}

void CInheritWidget::op()
{
    cout << "CInheritWidget " << this << " op" << endl;
    TickTock();
}

void CInheritWidget::TickTock()
{
    // this function is implemented by CTimer::TickTock()
    cout << "CInheritWidget " << this << " : TickTock" << endl;
    CTimer::TickTock();
}