#ifndef DADOS_H
#define DADOS_H
#include <QString>

class Dados
{
    private:
        QString matricula;
        QString nome;
        QString codiDisci;
        QString nomeDisci;
        QString turma;
    public:
        Dados();
        const QString &getMatricula() const;
        void setMatricula(const QString &newMatricula);

        const QString &getNome() const;
        void setNome(const QString &newNome);

        const QString &getCodiDisci() const;
        void setCodiDisci(const QString &newCodiDisci);

        const QString &getNomeDisci() const;
        void setNomeDisci(const QString &newNomeDisci);

        const QString &getTurma() const;
        void setTurma(const QString &newTurma);
};

#endif // DADOS_H
