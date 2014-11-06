#ifndef INFORMATIONHANDLER_H
#define INFORMATIONHANDLER_H

#include "ScreenHandler.h"

#include "../Controller.h"

class InformationHandler:public ScreenHandler
{
public:
    InformationHandler(class Controller& master);

private:
    Controller& _master;
};

#endif // INFORMATIONHANDLER_H
