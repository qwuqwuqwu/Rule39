#include "Widget.h"
#include "AdvWidget.h"
#include <iostream>

using namespace std;

CAdvWidget::CAdvWidget()
{
    cout << "CAdvWidget " << this << " : constructor" << endl;
}

CAdvWidget::~CAdvWidget()
{
    cout << "CAdvWidget " << this << " : destructor " << endl;
}

void CAdvWidget::op()
{
    cout << "CAdvWidget " << this << " op" << endl;
    m_Timer.TickTock();
}