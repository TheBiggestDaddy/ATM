#ifndef LASTOPERATIONS_H
#define LASTOPERATIONS_H
/**********************
 * Dobrianskiy Andriy *
 * ****08.11.2014**** *
 * ********************/
#include <QFrame>

namespace Ui {
class LastOperations;
}

class LastOperations : public QFrame
{
    Q_OBJECT

public:
    explicit LastOperations(QWidget *parent = 0,std::vector<std::string> operations = std::vector<std::string>());
    ~LastOperations();

private:
    Ui::LastOperations *ui;
};

#endif // LASTOPERATIONS_H
