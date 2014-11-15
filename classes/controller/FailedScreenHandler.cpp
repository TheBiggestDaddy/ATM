/**********************
 * Dobrianskiy Andriy *
 * ****08.11.2014**** *
 * ********************/
#include "FailedScreenHandler.h"

FailedScreenHandler::FailedScreenHandler(Controller& master):
    _master(master)
{
}


FailedScreenHandler::~FailedScreenHandler ()
{

}

void FailedScreenHandler::backspaceClicked ()
{
    _master.openWindow(Windows::LoginScreen);
}

void FailedScreenHandler::right2clicked ()
{
    _master.clearPassword();
    _master.openWindow(Windows::Continue);
}

void FailedScreenHandler::right1clicked ()
{
    _master.openWindow(Windows::LoginScreen);
}
