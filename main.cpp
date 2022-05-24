#include "Timer.h"
#include "MyTimer.h"
#include "Widget.h"
#include "AdvWidget.h"
#include "InheritWidget.h"
#include "AdvInheritWidget.h"
#include <iostream>

int main( void )
{
    CInheritWidget MyWidget( 1 );
    MyWidget.op();
    MyWidget.op();

    CAdvInheritWidget MyAdvInheritWidget( 2 );
    MyAdvInheritWidget.op();
    MyAdvInheritWidget.op();

    return 0;
}