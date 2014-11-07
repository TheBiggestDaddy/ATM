#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <iostream>
#include "LoginScreen.h"

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
void MainWindow::addFrameChild(QFrame* frame)
{
    frame->setParent(ui->frame);
    frame->show();
}

QFrame* MainWindow::getFrame ()
{
    return ui->frame;
}

