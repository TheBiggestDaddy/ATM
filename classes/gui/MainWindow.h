#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void signal_left_button_1_clicked (void);
    void signal_left_button_2_clicked (void);
    void signal_left_button_3_clicked (void);
    void signal_left_button_4_clicked (void);
    void signal_right_button_1_clicked (void);
    void signal_right_button_2_clicked (void);
    void signal_right_button_3_clicked (void);
    void signal_right_button_4_clicked (void);

    void signal_0_clicked (void);
    void signal_1_clicked (void);
    void signal_2_clicked (void);
    void signal_3_clicked (void);
    void signal_4_clicked (void);
    void signal_5_clicked (void);
    void signal_6_clicked (void);
    void signal_7_clicked (void);
    void signal_8_clicked (void);
    void signal_9_clicked (void);

    void signal_backspace_clicked (void);
    void signal_c_clicked (void);
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

    void on_number_1_clicked();

    void on_number_2_clicked();

    void on_number_3_clicked();

    void on_number_6_clicked();

    void on_number_4_clicked();

    void on_number_5_clicked();

    void on_number_7_clicked();

    void on_number_8_clicked();

    void on_number_9_clicked();

    void on_number_10_clicked();

    void on_clear_clicked();

    void on_backspace_clicked();

    void on_OK_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
