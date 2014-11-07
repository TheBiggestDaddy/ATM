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
    virtual void okClicked ();

    virtual void right2clicked ();
    virtual void right3clicked ();

    virtual void left2clicked ();
    virtual void left3clicked ();
private:
    Controller& _master;
};

#endif // SENDMONEYTOANOTHERCARDHANDLER_H
