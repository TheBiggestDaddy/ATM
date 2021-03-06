#include "Information.h"
#include "ui_Information.h"

Information::Information(QWidget *parent, const std::string &balance, const std::string& end_date, const std::string& issue_date) :
    QFrame(parent),
    ui(new Ui::Information)
{
    ui->setupUi(this);
    ui->balance->setText(QString::fromUtf8(balance.c_str()));
    ui->end_date->setText(QString::fromUtf8(end_date.c_str()));
    ui->issue_date->setText(QString::fromUtf8(issue_date.c_str()));
}

Information::Information(const std::string& balance,const std::string& end_date,
                         const std::string& issue_date): QFrame(nullptr),
    ui(new Ui::Information)
{
    ui->setupUi(this);
    ui->balance->setText(QString::fromUtf8(balance.c_str()));
    ui->end_date->setText(QString::fromUtf8(end_date.c_str()));
    ui->issue_date->setText(QString::fromUtf8(issue_date.c_str()));
}

Information::~Information()
{
    delete ui;
}
