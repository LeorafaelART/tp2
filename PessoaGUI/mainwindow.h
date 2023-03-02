#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Pessoa.h"
#include <QMainWindow>
#include "Pessoa.h"
#include<QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_lineEdit_returnPressed();

    void on_lineEdit_2_returnPressed();

    void on_lineEdit_3_returnPressed();

private:
    Ui::MainWindow *ui;
    Pessoa p;
};
#endif // MAINWINDOW_H
