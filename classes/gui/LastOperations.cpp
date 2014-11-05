#include "LastOperations.h"
#include "ui_LastOperations.h"

LastOperations::LastOperations(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::LastOperations)
{
    ui->setupUi(this);
}

LastOperations::~LastOperations()
{
    delete ui;
}
