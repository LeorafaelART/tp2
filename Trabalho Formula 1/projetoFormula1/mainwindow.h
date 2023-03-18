#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include"piloto.h"
#include <QMainWindow>
#include <QFileDialog>
#include <QString>
#include <QMessageBox>
#include <fstream>
#include <vector>
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

    void on_pushButtonLer_clicked();

    void on_pushButtonSplit_clicked();

    void on_pushButtonResultado_clicked();

private:
    Ui::MainWindow *ui;
    QString nomeDoArquivo = "";
};
#endif // MAINWINDOW_H
