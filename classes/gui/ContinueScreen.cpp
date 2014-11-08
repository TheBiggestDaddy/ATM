#include "ContinueScreen.h"
#include "ui_ContinueScreen.h"

#include <QTimer>

ContinueScreen::ContinueScreen(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::ContinueScreen)
{
    ui->setupUi(this);
    QTimer::singleShot(0, ui->pin, SLOT(setFocus()));
}

ContinueScreen::~ContinueScreen()
{
    delete ui;
}

QLineEdit* ContinueScreen::getPinLine()
{
    return ui->pin;
}
