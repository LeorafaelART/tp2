#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <dados.h>
#include <QMainWindow>
#include <QFileDialog>
#include <QString>
#include <QMessageBox>
#include <fstream>

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
    void on_pushButtonBuscArq_clicked();

    void on_pushButtonLerArq_clicked();

    void on_pushButtonSplit_clicked();

private:
    Ui::MainWindow *ui;
    QString nomeDoArquivo = "";
};
#endif // MAINWINDOW_H
