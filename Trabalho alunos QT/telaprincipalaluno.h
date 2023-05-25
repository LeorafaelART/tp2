#ifndef TELAPRINCIPALALUNO_H
#define TELAPRINCIPALALUNO_H

#include <QMainWindow>
#include "alunocontroler.h"
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class TelaPrincipalAluno; }
QT_END_NAMESPACE

class TelaPrincipalAluno : public QMainWindow
{
    Q_OBJECT

public:
    TelaPrincipalAluno(QWidget *parent = nullptr);
    ~TelaPrincipalAluno();
    AlunoControler controlador;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::TelaPrincipalAluno *ui;
};
#endif // TELAPRINCIPALALUNO_H
