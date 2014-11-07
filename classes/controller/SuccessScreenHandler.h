#ifndef SUCCESSSCREENHANDLER_H
#define SUCCESSSCREENHANDLER_H


#include "ScreenHandler.h"

#include "../Controller.h"

class SuccessScreenHandler:public ScreenHandler
{
public:
    SuccessScreenHandler(class Controller& master);
    virtual ~SuccessScreenHandler ();
    virtual void backspaceClicked ();
    virtual void right2clicked ();
    virtual void right1clicked ();
private:
    Controller& _master;
};

#endif // SUCCESSSCREENHANDLER_H
