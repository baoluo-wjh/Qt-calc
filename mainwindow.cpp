#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <cstdio>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::calc);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::calc() {
    double a = ui->lineEdit->text().toDouble();
    double b = ui->lineEdit_2->text().toDouble();
    double c = ui->lineEdit_3->text().toDouble();
    double delta = b*b - 4*a*c;
    double x1 = (-b+sqrt(delta)) / (2*a);
    double x2 = (-b-sqrt(delta)) / (2*a);
    char temp[100];
    sprintf(temp, "%.4lf", x1);
    ui->lineEdit_4->setText(temp);
    sprintf(temp, "%.4lf", x2);
    ui->lineEdit_5->setText(temp);
}
