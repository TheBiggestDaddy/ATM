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
    _master.openWindow(Windows::ChooseAction);
}

void FailedScreenHandler::right2clicked ()
{
    _master.openWindow(Windows::ChooseAction);
}

void FailedScreenHandler::right1clicked ()
{
    _master.openWindow(Windows::LoginScreen);
}
