#ifndef TIMER_H_
#define TIMER_H_

class CTimer
{
public:
    explicit CTimer( const int & nInterval );
    virtual ~CTimer();
    virtual void TickTock();

protected:
    int m_nTime;

private:    
    int m_nInterval;
    
};

#endif