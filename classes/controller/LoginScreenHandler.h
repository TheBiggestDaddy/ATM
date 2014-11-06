#ifndef LOGINSCREENHANDLER_H
#define LOGINSCREENHANDLER_H

#include "ScreenHandler.h"

#include "../Controller.h"

class LoginScreenHandler: public ScreenHandler
{
public:
    LoginScreenHandler(class Controller& c);
    virtual ~LoginScreenHandler ();
    virtual void okClicked ();
};

#endif // LOGINSCREENHANDLER_H
