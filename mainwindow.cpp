#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    uiKandang = new kandang(this);
    uiKandang->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    uiPakan = new pakan(this);
    uiPakan->show();
}


void MainWindow::on_pushButton_clicked()
{
    uiUser = new user(this);
    uiUser->show();
}

