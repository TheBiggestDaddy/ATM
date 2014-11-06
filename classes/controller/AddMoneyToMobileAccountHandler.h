#ifndef ADDMONEYTOMOBILEACCOUNTHANDLER_H
#define ADDMONEYTOMOBILEACCOUNTHANDLER_H

#include "ScreenHandler.h"

#include "../Controller.h"

class AddMoneyToMobileAccountHandler:public ScreenHandler
{
public:
    AddMoneyToMobileAccountHandler(class Controller& master);

private:
    Controller& _master;
};

#endif // ADDMONEYTOMOBILEACCOUNTHANDLER_H
