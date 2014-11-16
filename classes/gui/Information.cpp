/**********************
 * Dobrianskiy Andriy *
 * ****08.11.2014**** *
 * ********************/
#include "Information.h"
#include "ui_Information.h"

Information::Information(QWidget *parent, const std::string &balance) :
    QFrame(parent),
    ui(new Ui::Information)
{
    ui->setupUi(this);
    ui->balance->setText(QString::fromUtf8(balance.c_str()));
}

Information::Information(const std::string& balance):
    QFrame(nullptr),
    ui(new Ui::Information)
{
    ui->setupUi(this);
    ui->balance->setText(QString::fromUtf8(balance.c_str()));
}

Information::~Information()
{
    delete ui;
}
