#include "Cashing.h"
#include "ui_Cashing.h"

Cashing::Cashing(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Cashing)
{
    ui->setupUi(this);
}

Cashing::~Cashing()
{
    delete ui;
}
