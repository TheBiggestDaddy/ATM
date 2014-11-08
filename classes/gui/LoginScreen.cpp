#include "LoginScreen.h"
#include "ui_LoginScreen.h"
#include <QTimer>
LoginScreen::LoginScreen(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::LoginScreen)
{
    ui->setupUi(this);
    ui->error->setVisible(false);
    QTimer::singleShot(0, ui->card_number, SLOT(setFocus()));
}

QLineEdit* LoginScreen::getPinLine()
{
    return ui->pin;
}
QLineEdit* LoginScreen::getCardNumberLine()
{
    return ui->card_number;
}
LoginScreen::~LoginScreen()
{
    delete ui;
}
void LoginScreen::setErrorStatus(const bool status)
{
    ui->error->setVisible(status);
}
