#include "telaprincipalaluno.h"
#include "ui_telaprincipalaluno.h"


//string global

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
void TelaPrincipalAluno::on_pushButtonIncluir_clicked()
{
    try
        {
            QString mat,nome;
            mat= ui->lineEditMat->text();
            nome= ui->lineEditNome->text();
            controlador.incluir(mat,nome);
        }
        catch (QString &erro)
        {
            QMessageBox::information(this,"erro",erro);
        }
}

//botão consultar
void TelaPrincipalAluno::on_pushButtonConsultar_clicked()
{
    try
        {
            QString mat,nome;
            mat= ui->lineEditMat->text();
            controlador.buscar(mat,nome);
            ui->lineEditNome->setText(nome);
        }
        catch (QString &erro)
        {
            QMessageBox::information(this,"erro",erro);
        }
}


void TelaPrincipalAluno::on_pushButtonAtualizar_clicked()
{
    try
       {
           QString mat,nome;
           mat= ui->lineEditMat->text();
           nome= ui->lineEditNome->text();
           controlador.alterar(mat,nome);
       }
       catch (QString &erro)
       {
           QMessageBox::information(this,"erro",erro);
       }
}


void TelaPrincipalAluno::on_pushButtonRemover_clicked()
{
    try
        {
            QString mat;
            mat= ui->lineEditMat->text();
            controlador.deletar(mat);
        }
        catch (QString &erro)
        {
            QMessageBox::information(this,"erro",erro);
        }
}

