#ifndef LOGINSCREENHANDLER_H
#define LOGINSCREENHANDLER_H
/**********************
 * Dobrianskiy Andriy *
 * ****08.11.2014**** *
 * ********************/
#include "ScreenHandler.h"

#include "../Controller.h"

class LoginScreenHandler: public ScreenHandler
{
public:
    LoginScreenHandler(class Controller& master);
    virtual ~LoginScreenHandler ();

    virtual void left3clicked ();
    virtual void left2clicked ();

    virtual void right3clicked ();
    virtual void right2clicked ();

    virtual void okClicked ();
    virtual void backspaceClicked ();
private:
    Controller& _master;
};

#endif // LOGINSCREENHANDLER_H
