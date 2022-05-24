#include "Timer.h"
#include <iostream>
#include "InheritWidget.h"
#include "AdvInheritWidget.h"

using namespace std;

CAdvInheritWidget::CAdvInheritWidget( const int & nInterval ):CInheritWidget( nInterval )
{
    cout << "CAdvInheritWidget " << this << " : constructor" << endl;
}

CAdvInheritWidget::~CAdvInheritWidget()
{
    cout << "CAdvInheritWidget " << this << " : destructor" << endl;
}

void CAdvInheritWidget::op()
{
    cout << "CAdvInheritWidget " << this << " op" << endl;
    TickTock();
}

void CAdvInheritWidget::TickTock()
{
    cout << "CAdvInheritWidget " << this << " : TickTock" << endl;
    cout << "I just want to sleep!" << endl;
}