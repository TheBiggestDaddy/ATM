#include "ChooseAction.h"
#include "ui_ChooseAction.h"

ChooseAction::ChooseAction(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::ChooseAction)
{
    ui->setupUi(this);
}

ChooseAction::~ChooseAction()
{
    delete ui;
}
