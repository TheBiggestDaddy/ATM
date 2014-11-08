#include "AnotherCash.h"
#include "ui_AnotherCash.h"
#include <QTimer>

AnotherCash::AnotherCash(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::AnotherCash)
{
    ui->setupUi(this);
    ui->error->setVisible(false);
    QTimer::singleShot(0, ui->summ, SLOT(setFocus()));
}

AnotherCash::~AnotherCash()
{
    delete ui;
}

void AnotherCash::setErrorStatus(const bool status)
{
    ui->error->setVisible(status);
}

QLineEdit* AnotherCash::getSummLine()
{
    return ui->summ;
}
