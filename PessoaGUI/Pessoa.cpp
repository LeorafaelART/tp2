#include "Pessoa.h"

const QString &Pessoa::getNome() const
{
    return nome;
}

void Pessoa::setNome(const QString &newNome)
{
    nome = newNome;
}

float Pessoa::getPeso() const
{
    return peso;
}

void Pessoa::setPeso(float newPeso)
{
    peso = newPeso;
}

float Pessoa::getAltura() const
{
    return altura;
}

void Pessoa::setAltura(float newAltura)
{
    altura = newAltura;
}

Pessoa::Pessoa()
{

}
float Pessoa::getIMC()const{
    if(peso>=0) return peso/(altura*altura);
    return 0;
}
