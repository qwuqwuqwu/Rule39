#ifndef MYTIMER_H_
#define MYTIMER_H_

#include "Timer.h"

class CMyTimer : public CTimer
{
public:
    explicit CMyTimer( const int & nInterval );
    virtual void TickTock();
};

#endif