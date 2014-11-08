#include "InformationHandler.h"

InformationHandler::InformationHandler(Controller &master):
    _master(master)
{

}

InformationHandler::~InformationHandler ()
{

}
void InformationHandler::backspaceClicked ()
{
    _master.openWindow(Windows::ChooseAction);
}
