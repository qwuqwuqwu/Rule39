#include "Timer.h"
#include "Widget.h"
#include <iostream>

using namespace std;

CWidget::CWidgetTimer::CWidgetTimer( const int& nInterval ):
CTimer( nInterval )
{
    cout << "CWidgetTimer " << this << " : constructor, nInterval is " << nInterval << endl;
}

void CWidget::CWidgetTimer::TickTock()
{
    CTimer::TickTock();
    CTimer::TickTock();
    cout << "CWidgetTimer " << this << " : time = " << m_nTime << endl;
}

CWidget::CWidget():
m_Timer( 1 )
{
    cout << "CWidget " << this << " : constructor" << endl;
}

CWidget::~CWidget()
{
    cout << "CWidget " << this << " : destructor" << endl;
}

void CWidget::op()
{
    cout << "CWidget " << this << " op" << endl;
    m_Timer.TickTock();
}
