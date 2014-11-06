#include "LastOperationsHandler.h"

LastOperationsHandler::LastOperationsHandler(Controller& master):
    _master(master)
{

}

LastOperationsHandler::~LastOperationsHandler ()
{

}

void LastOperationsHandler::backspaceClicked ()
{
    _master.openWindow(Windows::ChooseAction);
}
