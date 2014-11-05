#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Right_button_4_clicked()
{
    cout << "Clicked button r4" << endl;
    emit signal_right_button_4_clicked();
}

void MainWindow::on_Right_button_3_clicked()
{
    cout << "Clicked button r3" << endl;
    emit signal_right_button_3_clicked();
}

void MainWindow::on_Right_button_2_clicked()
{
    cout << "Clicked button r2" << endl;
    emit signal_right_button_2_clicked();
}

void MainWindow::on_Right_button_1_clicked()
{
    cout << "Clicked button r1" << endl;
    emit signal_right_button_1_clicked();
}

void MainWindow::on_Left_button_4_clicked()
{
    cout << "Clicked button l4" << endl;
    emit signal_left_button_4_clicked();
}

void MainWindow::on_Left_button_3_clicked()
{
    cout << "Clicked button l3" << endl;
    emit signal_left_button_3_clicked();
}

void MainWindow::on_Left_button_2_clicked()
{
    cout << "Clicked button l2" << endl;
    emit signal_left_button_2_clicked();
}

void MainWindow::on_Left_button_1_clicked()
{
    cout << "Clicked button l1" << endl;
    emit signal_left_button_1_clicked();
}

void MainWindow::on_number_1_clicked()
{
    cout << "Clicked button 1" << endl;
    emit signal_1_clicked();
}

void MainWindow::on_number_2_clicked()
{
    cout << "Clicked button 2" << endl;
    emit signal_2_clicked();
}

void MainWindow::on_number_3_clicked()
{
    cout << "Clicked button 3" << endl;
    emit signal_3_clicked();
}

void MainWindow::on_number_6_clicked()
{
    cout << "Clicked button 6" << endl;
    emit signal_6_clicked();
}

void MainWindow::on_number_4_clicked()
{
    cout << "Clicked button 4" << endl;
    emit signal_4_clicked();
}

void MainWindow::on_number_5_clicked()
{
    cout << "Clicked button 5" << endl;
    emit signal_5_clicked();
}

void MainWindow::on_number_7_clicked()
{
    cout << "Clicked button 7" << endl;
    emit signal_7_clicked();
}

void MainWindow::on_number_8_clicked()
{
    cout << "Clicked button 8" << endl;
    emit signal_8_clicked();
}

void MainWindow::on_number_9_clicked()
{
    cout << "Clicked button 9" << endl;
    emit signal_9_clicked();
}

void MainWindow::on_number_10_clicked()
{
    cout << "Clicked button 0" << endl;
    emit signal_0_clicked();
}

void MainWindow::on_clear_clicked()
{
    cout << "Clicked clear" << endl;
    emit signal_c_clicked();
}

void MainWindow::on_backspace_clicked()
{
    cout << "Clicked backspace" << endl;
    emit signal_backspace_clicked();
}

void MainWindow::on_OK_clicked()
{
    cout << "Clicked OK" << endl;
    emit signal_OK_clicked();
}
