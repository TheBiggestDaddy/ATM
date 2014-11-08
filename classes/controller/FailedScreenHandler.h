#ifndef FAILEDSCREENHANDLER_H
#define FAILEDSCREENHANDLER_H

#include "ScreenHandler.h"

#include "../Controller.h"

class FailedScreenHandler:public ScreenHandler
{
public:
    FailedScreenHandler(class Controller& master);
    virtual ~FailedScreenHandler ();
    virtual void backspaceClicked ();
    virtual void right2clicked ();
    virtual void right1clicked ();
private:
    Controller& _master;
};

#endif // FAILEDSCREENHANDLER_H
