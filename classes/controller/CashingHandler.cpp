#include "CashingHandler.h"


CashingHandler::CashingHandler(Controller& master):
    _master(master)
{
}

CashingHandler::~CashingHandler ()
{

}

void CashingHandler::backspaceClicked ()
{
    _master.openWindow(Windows::ChooseAction);
}
void CashingHandler::right1clicked ()
{
    _master.openWindow(Windows::AnotherCash);
}
