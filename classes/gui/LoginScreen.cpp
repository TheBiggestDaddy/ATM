#include "LoginScreen.h"
#include "ui_LoginScreen.h"

LoginScreen::LoginScreen(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::LoginScreen)
{
    ui->setupUi(this);
}

LoginScreen::~LoginScreen()
{
    delete ui;
}
