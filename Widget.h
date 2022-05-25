#ifndef WIDGET_H_
#define WIDGET_H_

#include "Timer.h"

class CWidget
{
public:
    CWidget( const int & nInterval );
    virtual ~CWidget();

    virtual void op();

protected: // need to be protected because CAdvWidget need to use m_Timer to show ticktock
    class CWidgetTimer: public CTimer {
        public:
            CWidgetTimer( const int& nInterval );
            virtual void TickTock();
    };

    CWidgetTimer m_Timer;
};

#endif