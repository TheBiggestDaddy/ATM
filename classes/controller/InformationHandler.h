#ifndef INFORMATIONHANDLER_H
#define INFORMATIONHANDLER_H
/**********************
 * Dobrianskiy Andriy *
 * ****08.11.2014**** *
 * ********************/
#include "ScreenHandler.h"

#include "../Controller.h"

class InformationHandler:public ScreenHandler
{
public:
    InformationHandler(class Controller& master);
    virtual ~InformationHandler ();
    virtual void backspaceClicked ();
    virtual void okClicked ();
    virtual void right1clicked();
private:
    Controller& _master;
};

#endif // INFORMATIONHANDLER_H
