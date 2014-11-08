#include "FailedScreen.h"
#include "ui_FailedScreen.h"

FailedScreen::FailedScreen(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::FailedScreen)
{
    ui->setupUi(this);
}

FailedScreen::~FailedScreen()
{
    delete ui;
}
