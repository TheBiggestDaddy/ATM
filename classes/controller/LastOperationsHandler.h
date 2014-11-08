#ifndef LASTOPERATIONSHANDLER_H
#define LASTOPERATIONSHANDLER_H

#include "ScreenHandler.h"

#include "../Controller.h"

class LastOperationsHandler: public ScreenHandler
{
public:
    LastOperationsHandler(class Controller& master);
    virtual ~LastOperationsHandler ();
    virtual void backspaceClicked ();
private:
    Controller& _master;
};

#endif // LASTOPERATIONSHANDLER_H
