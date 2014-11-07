#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QFrame>


namespace Ui {
class MainWindow;
}

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void addFrameChild(QFrame* frame);
    QFrame* getFrame ();

signals:
    void signal_left_button_1_clicked (void);
    void signal_left_button_2_clicked (void);
    void signal_left_button_3_clicked (void);
    void signal_left_button_4_clicked (void);
    void signal_right_button_1_clicked (void);
    void signal_right_button_2_clicked (void);
    void signal_right_button_3_clicked (void);
    void signal_right_button_4_clicked (void);

    void signal_backspace_clicked (void);
    void signal_OK_clicked (void);

private slots:
    void on_Right_button_4_clicked();
    void on_Right_button_3_clicked();
    void on_Right_button_2_clicked();
    void on_Right_button_1_clicked();
    void on_Left_button_4_clicked();
    void on_Left_button_3_clicked();
    void on_Left_button_2_clicked();
    void on_Left_button_1_clicked();

    void on_backspace_clicked();

    void on_OK_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
