#ifndef CONTINUESCREENHANDLER_H
#define CONTINUESCREENHANDLER_H

#include "ScreenHandler.h"

#include "../Controller.h"

class ContinueScreenHandler:public ScreenHandler
{
public:
    ContinueScreenHandler (class Controller& master);
    virtual ~ContinueScreenHandler ();
    virtual void backspaceClicked ();
    virtual void okClicked ();
private:
    Controller& _master;
};

#endif // CONTINUESCREENHANDLER_H
