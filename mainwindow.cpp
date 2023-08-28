#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


void MainWindow::on_txtId_textChanged(const QString &arg1)
{

}


void MainWindow::on_txtPosX_textChanged(const QString &arg1)
{

}


void MainWindow::on_txtRed_textChanged(const QString &arg1)
{

}


void MainWindow::on_txtGreen_textChanged(const QString &arg1)
{

}


void MainWindow::on_txtBlue_textChanged(const QString &arg1)
{

}


void MainWindow::on_txtPosY_textChanged(const QString &arg1)
{

}


void MainWindow::on_btnGuardar_clicked()
{

}

