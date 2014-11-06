#ifndef LOGINSCREENHANDLER_H
#define LOGINSCREENHANDLER_H

#include "ScreenHandler.h"

#include "../Controller.h"

class LoginScreenHandler: public ScreenHandler
{
public:
    LoginScreenHandler(class Controller& master);
    virtual ~LoginScreenHandler ();
    virtual void okClicked ();
private:
    Controller& _master;
};

#endif // LOGINSCREENHANDLER_H
