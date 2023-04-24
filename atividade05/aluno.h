#ifndef ALUNO_H
#define ALUNO_H
#include <QString>

class Aluno
{
    private:
        int matricula;
        QString nome;
        QString codDisci;
        QString nomeDisci;
        QString turma;
    public:
        Aluno();

        int getMatricula() const;
        void setMatricula(int newMatricula);

        const QString &getNome() const;
        void setNome(const QString &newNome);

        const QString &getNomeDisci() const;
        void setNomeDisci(const QString &newNomeDisci);

        const QString &getTurma() const;
        void setTurma(const QString &newTurma);

        const QString &getCodDisci() const;
        void setCodDisci(const QString &newCodDisci);
};

#endif // ALUNO_H
