#include "AnotherCashHandler.h"

AnotherCashHandler::AnotherCashHandler(Controller &master):
    _master(master)
{

}

AnotherCashHandler::~AnotherCashHandler ()
{

}

void AnotherCashHandler::backspaceClicked ()
{
    _master.openWindow(Windows::ChooseAction);
}
