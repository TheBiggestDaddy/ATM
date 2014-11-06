#ifndef CASHINGHANDLER_H
#define CASHINGHANDLER_H

#include "ScreenHandler.h"

#include "../Controller.h"

class CashingHandler:public ScreenHandler
{
public:
    CashingHandler(class Controller& master);

private:
    Controller& _master;
};

#endif // CASHINGHANDLER_H
