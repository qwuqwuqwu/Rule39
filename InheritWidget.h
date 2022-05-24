#ifndef INHERITWIDGET_H_
#define INHERITWIDGET_H_

class CTimer;

class CInheritWidget : private CTimer
{
public:
    explicit CInheritWidget( const int & nInterval );
    virtual ~CInheritWidget();
// widget function
    virtual void op();

// timer function
private:
    virtual void TickTock();
};

#endif