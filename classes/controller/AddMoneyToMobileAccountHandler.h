#ifndef ADDMONEYTOMOBILEACCOUNTHANDLER_H
#define ADDMONEYTOMOBILEACCOUNTHANDLER_H

#include "ScreenHandler.h"

#include "../Controller.h"
#include "../gui/AddMoneyToMobileAccount.h"

class AddMoneyToMobileAccountHandler:public ScreenHandler
{
public:
    AddMoneyToMobileAccountHandler(class Controller& master);
    virtual ~AddMoneyToMobileAccountHandler ();
    virtual void backspaceClicked ();
    virtual void okClicked ();

    virtual void left3clicked ();
    virtual void left2clicked ();

    virtual void right3clicked ();
    virtual void right2clicked ();
private:
    Controller& _master;
};

#endif // ADDMONEYTOMOBILEACCOUNTHANDLER_H
