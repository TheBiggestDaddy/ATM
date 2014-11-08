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


void CashingHandler::left4clicked ()
{
    if(_master._current_account->withdrawFunds(5000))
    {
        _master.openWindow(Windows::Success);
    }
    else
    {
        _master.openWindow(Windows::Failed);
    }
}
void CashingHandler::left3clicked ()
{
    if(_master._current_account->withdrawFunds(1000))
    {
        _master.openWindow(Windows::Success);
    }
    else
    {
        _master.openWindow(Windows::Failed);
    }
}
void CashingHandler::left2clicked ()
{
    if(_master._current_account->withdrawFunds(500))
    {
        _master.openWindow(Windows::Success);
    }
    else
    {
        _master.openWindow(Windows::Failed);
    }
}

void CashingHandler::left1clicked ()
{
    if(_master._current_account->withdrawFunds(200))
    {
        _master.openWindow(Windows::Success);
    }
    else
    {
        _master.openWindow(Windows::Failed);
    }
}

void CashingHandler::right4clicked ()
{
    if(_master._current_account->withdrawFunds(100))
    {
        _master.openWindow(Windows::Success);
    }
    else
    {
        _master.openWindow(Windows::Failed);
    }
}
void CashingHandler::right3clicked ()
{
    if(_master._current_account->withdrawFunds(50))
    {
        _master.openWindow(Windows::Success);
    }
    else
    {
        _master.openWindow(Windows::Failed);
    }
}
void CashingHandler::right2clicked ()
{
    if(_master._current_account->withdrawFunds(10))
    {
        _master.openWindow(Windows::Success);
    }
    else
    {
        _master.openWindow(Windows::Failed);
    }
}
