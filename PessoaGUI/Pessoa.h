#ifndef PESSOA_H
#define PESSOA_H
#include <QString>

class Pessoa
{
    private:
        QString nome;
        float peso;
        float altura;
    public:
        Pessoa();

        float getIMC() const;

        const QString &getNome() const;
        void setNome(const QString &newNome);

        float getPeso() const;
        void setPeso(float newPeso);

        float getAltura() const;
        void setAltura(float newAltura);
};

#endif // PESSOA_H
