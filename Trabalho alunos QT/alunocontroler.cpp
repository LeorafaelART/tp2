#include "alunocontroler.h"

AlunoControler::AlunoControler()
{

}
void AlunoControler::buscar(QString &mat, QString &nome)
{
   a= daoAluno.buscar(mat);
   mat=a->getMatricula();
   nome= a->getNome();
   delete a;
}

void AlunoControler::deletar(QString const &id)
{
    daoAluno.deletar(id);
}

void AlunoControler::incluir(QString const &mat, QString const &nome)
{
    a= new Aluno;
    a->setMatricula(mat);
    a->setNome(nome);
    daoAluno.inserir(a);
    delete a;
}

void AlunoControler::alterar(QString const &mat, QString const &nome)
{
    a= new Aluno;
    a->setMatricula(mat);
    a->setNome(nome);
   //chama a função do aluno dao pra inserir o aluno atualizado
   daoAluno.alterar(a);
   delete a;
}
