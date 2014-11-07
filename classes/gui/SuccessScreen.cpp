#include "SuccessScreen.h"
#include "ui_SuccessScreen.h"

SuccessScreen::SuccessScreen(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::SuccessScreen)
{
    ui->setupUi(this);
}

SuccessScreen::~SuccessScreen()
{
    delete ui;
}
