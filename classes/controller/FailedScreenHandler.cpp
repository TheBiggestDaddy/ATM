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
    _master._password = std::string();
    _master.openWindow(Windows::Continue);
}

void FailedScreenHandler::right1clicked ()
{
    _master.openWindow(Windows::LoginScreen);
}
