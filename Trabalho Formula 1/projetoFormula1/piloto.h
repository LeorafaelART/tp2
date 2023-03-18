#ifndef PILOTO_H
#define PILOTO_H
#include <QString>

class piloto
{
    private:
        int codigoPiloto;
        QString nomePiloto;
        QString paisPiloto;
        int idadePiloto;
        QString equipePiloto;
        QString motorPiloto;
        int pFinal;
    public:
        piloto();

        int getCodigoPiloto() const;
        void setCodigoPiloto(int newCodigoPiloto);

        const QString &getNomePiloto() const;
        void setNomePiloto(const QString &newNomePiloto);


        const QString &getPaisPiloto() const;
        void setPaisPiloto(const QString &newPaisPiloto);

        int getIdadePiloto() const;
        void setIdadePiloto(int newIdadePiloto);


        const QString &getEquipePiloto() const;
        void setEquipePiloto(const QString &newEquipePiloto);

        const QString &getMotorPiloto() const;
        void setMotorPiloto(const QString &newMotorPiloto);

        int getPFinal() const;
        void setPFinal(int newPFinal);
};

#endif // PILOTO_H
