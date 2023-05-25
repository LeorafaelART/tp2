#ifndef ALUNOCONTROLER_H
#define ALUNOCONTROLER_H

#include "aluno.h"
#include "alunodao.h"
#include <list>

class AlunoControler
{
public:
    AlunoControler();
    void buscar(QString &mat, QString &nome);
    void deletar(QString const &id);
    void incluir (QString const &mat, QString const &nome);
    void alterar (QString const &mat, QString const &nome);
    std::list<QString>* listar();
private:
    Aluno* a;
    AlunoDAO daoAluno;
};

#endif // ALUNOCONTROLER_H
