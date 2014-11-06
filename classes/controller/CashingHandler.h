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
    virtual void right1clicked ();
private:
    Controller& _master;
};

#endif // CASHINGHANDLER_H
