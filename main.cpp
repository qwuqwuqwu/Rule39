#include "Timer.h"
#include "MyTimer.h"
#include "Widget.h"
#include "AdvWidget.h"
#include "InheritWidget.h"
#include "AdvInheritWidget.h"
#include <iostream>

using namespace std;

int main( void )
{
    cout << "InheritWidget example=========================" << endl;
    CInheritWidget InheritWidget( 1 );
    InheritWidget.op();
    InheritWidget.op();

    cout << "CompositeWidget example=========================" << endl;
    CWidget CompositeWidget( 2 );
    CompositeWidget.op();
    CompositeWidget.op();

    // =============================
    cout << "AdvInheritWidget example=========================" << endl;
    CAdvInheritWidget AdvInheritWidget( 3 );
    AdvInheritWidget.op();
    AdvInheritWidget.op();

    cout << "AdvCompositeWidget example=========================" << endl;
    CAdvWidget AdvCompositeWidget( 4 );
    AdvCompositeWidget.op();
    AdvCompositeWidget.op();

    cout << "Destructorsssssssssssssssssssssssssssssssssssssssss" << endl;

    return 0;
}