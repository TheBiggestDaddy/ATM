#ifndef SENDMONEYTOANOTHERCARDHANDLER_H
#define SENDMONEYTOANOTHERCARDHANDLER_H

#include "ScreenHandler.h"

#include "../Controller.h"

class SendMoneyToAnotherCardHandler:public ScreenHandler
{
public:
    SendMoneyToAnotherCardHandler(class Controller& master);
    virtual ~SendMoneyToAnotherCardHandler ();
    virtual void backspaceClicked ();
private:
    Controller& _master;
};

#endif // SENDMONEYTOANOTHERCARDHANDLER_H
