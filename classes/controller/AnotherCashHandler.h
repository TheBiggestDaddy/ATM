#ifndef ANOTHERCASHHANDLER_H
#define ANOTHERCASHHANDLER_H

#include "ScreenHandler.h"


#include "../Controller.h"

class AnotherCashHandler: public ScreenHandler
{
public:
    AnotherCashHandler(class Controller& master);
    virtual ~AnotherCashHandler ();
    virtual void backspaceClicked ();
    virtual void okClicked ();
private:
    Controller& _master;
};

#endif // ANOTHERCASHHANDLER_H
