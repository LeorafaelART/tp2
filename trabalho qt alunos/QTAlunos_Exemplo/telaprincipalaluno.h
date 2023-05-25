#ifndef TELAPRINCIPALALUNO_H
#define TELAPRINCIPALALUNO_H

#include <QMainWindow>
#include <QMessageBox>
#include "alunocontroler.h"

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
    void on_pushButtonIncluir_clicked();

    void on_pushButtonConsultar_clicked();

    void on_pushButtonAtualizar_clicked();

    void on_pushButtonRemover_clicked();

private:
    Ui::TelaPrincipalAluno *ui;
};
#endif // TELAPRINCIPALALUNO_H
