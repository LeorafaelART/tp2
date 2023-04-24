#include "aluno.h"

int Aluno::getMatricula() const
{
    return matricula;
}

void Aluno::setMatricula(int newMatricula)
{
    matricula = newMatricula;
}

const QString &Aluno::getNome() const
{
    return nome;
}

void Aluno::setNome(const QString &newNome)
{
    nome = newNome;
}

const QString &Aluno::getNomeDisci() const
{
    return nomeDisci;
}

void Aluno::setNomeDisci(const QString &newNomeDisci)
{
    nomeDisci = newNomeDisci;
}

const QString &Aluno::getTurma() const
{
    return turma;
}

void Aluno::setTurma(const QString &newTurma)
{
    turma = newTurma;
}

const QString &Aluno::getCodDisci() const
{
    return codDisci;
}

void Aluno::setCodDisci(const QString &newCodDisci)
{
    codDisci = newCodDisci;
}

Aluno::Aluno()
{

}
