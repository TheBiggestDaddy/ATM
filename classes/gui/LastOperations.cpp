/**********************
 * Dobrianskiy Andriy *
 * ****08.11.2014**** *
 * ********************/
#include "LastOperations.h"
#include "ui_LastOperations.h"
#include <QLabel>

void setTextAndAligment(QLabel* label,std::string text)
{
    label->setText(QString(text.c_str()));
    label->setAlignment(Qt::AlignCenter);
}

LastOperations::LastOperations(QWidget *parent, std::vector<std::string> operations) :
    QFrame(parent),
    ui(new Ui::LastOperations)
{
    ui->setupUi(this);
    if(operations.size() == 0)
    {
        setTextAndAligment(ui->operation_1,std::string("Історія пуста."));
    }
    else
    {
        while(operations.size() < 5)
        {
            operations.push_back(std::string());
        }
        int last = operations.size();
        setTextAndAligment(ui->operation_1,operations[--last]);
        setTextAndAligment(ui->operation_2,operations[--last]);
        setTextAndAligment(ui->operation_3,operations[--last]);
        setTextAndAligment(ui->operation_4,operations[--last]);
        setTextAndAligment(ui->operation_5,operations[--last]);
    }
}

LastOperations::~LastOperations()
{
    delete ui;
}
