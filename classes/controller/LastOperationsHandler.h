#ifndef LASTOPERATIONSHANDLER_H
#define LASTOPERATIONSHANDLER_H
/**********************
 * Dobrianskiy Andriy *
 * ****08.11.2014**** *
 * ********************/
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
