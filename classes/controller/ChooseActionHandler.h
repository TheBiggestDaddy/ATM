#ifndef CHOOSEACTIONHANDLER_H
#define CHOOSEACTIONHANDLER_H

#include "ScreenHandler.h"

#include "../Controller.h"

class ChooseActionHandler: public ScreenHandler
{
public:
    ChooseActionHandler(class Controller& master);

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

#endif // CHOOSEACTIONHANDLER_H
