#include "dados.h"

const QString &Dados::getMatricula() const
{
    return matricula;
}

void Dados::setMatricula(const QString &newMatricula)
{
    matricula = newMatricula;
}

const QString &Dados::getNome() const
{
    return nome;
}

void Dados::setNome(const QString &newNome)
{
    nome = newNome;
}

const QString &Dados::getCodiDisci() const
{
    return codiDisci;
}

void Dados::setCodiDisci(const QString &newCodiDisci)
{
    codiDisci = newCodiDisci;
}

const QString &Dados::getNomeDisci() const
{
    return nomeDisci;
}

void Dados::setNomeDisci(const QString &newNomeDisci)
{
    nomeDisci = newNomeDisci;
}

const QString &Dados::getTurma() const
{
    return turma;
}

void Dados::setTurma(const QString &newTurma)
{
    turma = newTurma;
}

Dados::Dados()
{

}
