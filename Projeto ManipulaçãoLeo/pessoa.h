#ifndef PESSOA_H
#define PESSOA_H
#include <QString>

class Pessoa
{
    private:
        int matricula;
        QString nome;
    public:
        Pessoa();

        int getMatricula() const;
        void setMatricula(int newMatricula);

        QString getNome() const;
        void setNome(const QString &newNome);
};

#endif // PESSOA_H
