/**********************
 * Dobrianskiy Andriy *
 * ****08.11.2014**** *
 * ********************/
#include "SuccessScreenHandler.h"

SuccessScreenHandler::SuccessScreenHandler(Controller& master):
    _master(master)
{
}


SuccessScreenHandler::~SuccessScreenHandler ()
{

}

void SuccessScreenHandler::backspaceClicked ()
{
    _master.openWindow(Windows::LoginScreen);
}

void SuccessScreenHandler::right2clicked ()
{
    _master.clearPassword();
    _master.openWindow(Windows::Continue);
}

void SuccessScreenHandler::right1clicked ()
{
    _master.openWindow(Windows::LoginScreen);
}
