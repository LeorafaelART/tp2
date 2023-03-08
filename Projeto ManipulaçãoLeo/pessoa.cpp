#include "pessoa.h"

int Pessoa::getMatricula() const
{
    return matricula;
}

void Pessoa::setMatricula(int newMatricula)
{
    matricula = newMatricula;
}

QString Pessoa::getNome() const
{
    return nome;
}

void Pessoa::setNome(const QString &newNome)
{
    nome = newNome;
}

Pessoa::Pessoa()
{

}
