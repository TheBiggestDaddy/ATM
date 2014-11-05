#ifndef LASTOPERATIONS_H
#define LASTOPERATIONS_H

#include <QFrame>

namespace Ui {
class LastOperations;
}

class LastOperations : public QFrame
{
    Q_OBJECT

public:
    explicit LastOperations(QWidget *parent = 0);
    ~LastOperations();

private:
    Ui::LastOperations *ui;
};

#endif // LASTOPERATIONS_H
