#include "Information.h"
#include "ui_Information.h"

Information::Information(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Information)
{
    ui->setupUi(this);
}

Information::~Information()
{
    delete ui;
}
