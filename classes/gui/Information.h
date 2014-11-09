#ifndef INFORMATION_H
#define INFORMATION_H
/**********************
 * Dobrianskiy Andriy *
 * ****08.11.2014**** *
 * ********************/
#include <QFrame>

namespace Ui {
class Information;
}

class Information : public QFrame
{
    Q_OBJECT

public:
    explicit Information(QWidget *parent = 0,const std::string& balance = std::string());
    explicit Information(const std::string& balance);
    ~Information();

private:
    Ui::Information *ui;
};

#endif // INFORMATION_H
