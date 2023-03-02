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


void MainWindow::on_pushButton_clicked()
{
    p.setNome(ui->lineEdit->text());
    p.setPeso(ui->lineEdit_2->text().toFloat());
    p.setAltura(ui->lineEdit_3->text().toFloat());
    ui->textBrowser->setText(QString::number(p.getIMC()));
    ui->lineEdit->setFocus();
    ui->lineEdit->selectAll();
}


void MainWindow::on_lineEdit_returnPressed()
{
    ui->lineEdit_2->setFocus();
    ui->lineEdit_2->selectAll();
}


void MainWindow::on_lineEdit_2_returnPressed()
{
    ui->lineEdit_3->setFocus();
    ui->lineEdit_3->selectAll();
}


void MainWindow::on_lineEdit_3_returnPressed()
{
    ui->pushButton->click();
}

