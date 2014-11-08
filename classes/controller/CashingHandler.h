#ifndef CASHINGHANDLER_H
#define CASHINGHANDLER_H

#include "ScreenHandler.h"

#include "../Controller.h"

class CashingHandler:public ScreenHandler
{
public:
    CashingHandler(class Controller& master);
    virtual ~CashingHandler ();
    virtual void backspaceClicked ();

    virtual void left4clicked ();
    virtual void left3clicked ();
    virtual void left2clicked ();
    virtual void left1clicked ();

    virtual void right4clicked ();
    virtual void right3clicked ();
    virtual void right2clicked ();
    virtual void right1clicked ();
private:
    Controller& _master;
};

#endif // CASHINGHANDLER_H
