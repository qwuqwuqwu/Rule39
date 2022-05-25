#ifndef ADVWIDGET_H_
#define ADVWIDGET_H_

class CWidget;

class CAdvWidget : public CWidget
{
public:
    CAdvWidget( const int& nInterval );
    ~CAdvWidget();

    void op();
};

#endif