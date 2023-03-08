#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "pessoa.h"
#include <QMainWindow>
//Biblioteca de manipulação dos diretorios do disco
#include <QFileDialog>
#include <QString>
#include <QMessageBox>
//Biblioteca para tratamento de arquivos
#include<fstream>
#include<vector>

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
    void on_pushButtonBuscar_clicked();

    void on_pushButtonSplit_clicked();

    void on_pushButtonSplitMostrarDadosDoArquivo_clicked();

private:
    Ui::MainWindow *ui;
    QString nomeDoArquivo = "";
};
#endif // MAINWINDOW_H
