#include "telaprincipalaluno.h"
#include "ui_telaprincipalaluno.h"

TelaPrincipalAluno::TelaPrincipalAluno(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TelaPrincipalAluno)
{
    ui->setupUi(this);
}

TelaPrincipalAluno::~TelaPrincipalAluno()
{
    delete ui;
}

//botão INCLUIR
void TelaPrincipalAluno::on_pushButton_clicked()
{
    try
    {
        QString mat,nome;
        mat= ui->lineEditMatricula->text();
        nome= ui->lineEditNome->text();
        controlador.incluir(mat,nome);
    }
    catch (QString &erro)
    {
        QMessageBox::information(this,"erro",erro);
    }
}

//botão CONSULTAR
void TelaPrincipalAluno::on_pushButton_2_clicked()
{
    try
    {
        QString mat,nome;
        mat= ui->lineEditMatricula->text();
        nome= ui->lineEditNome->text();
        controlador.buscar(mat,nome);
    }
    catch (QString &erro)
    {
        QMessageBox::information(this,"erro",erro);
    }
}

//botão ATUALIZAR
void TelaPrincipalAluno::on_pushButton_3_clicked()
{
    try
    {
        QString mat,nome;
        mat= ui->lineEditMatricula->text();
        nome= ui->lineEditNome->text();
        controlador.alterar(mat,nome);
    }
    catch (QString &erro)
    {
        QMessageBox::information(this,"erro",erro);
    }
}

//botão DELETAR
void TelaPrincipalAluno::on_pushButton_4_clicked()
{
    try
    {
        QString mat;
        mat= ui->lineEditMatricula->text();
        controlador.deletar(mat);
    }
    catch (QString &erro)
    {
        QMessageBox::information(this,"erro",erro);
    }
}

