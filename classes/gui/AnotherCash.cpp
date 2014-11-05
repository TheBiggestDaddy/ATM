#include "AnotherCash.h"
#include "ui_AnotherCash.h"

AnotherCash::AnotherCash(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::AnotherCash)
{
    ui->setupUi(this);
}

AnotherCash::~AnotherCash()
{
    delete ui;
}
