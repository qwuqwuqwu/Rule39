#ifndef ADVINHERITWIDGET_H_
#define ADVINHERITWIDGET_H_

class CInheritWidget;

class CAdvInheritWidget : private CInheritWidget
{
public:
    explicit CAdvInheritWidget( const int & nInterval );
    virtual ~CAdvInheritWidget();
// widget function
    virtual void op();

// timer function
private:
    void TickTock();
};

#endif