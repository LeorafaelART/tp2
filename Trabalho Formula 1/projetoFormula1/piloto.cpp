#include "piloto.h"

int piloto::getCodigoPiloto() const
{
    return codigoPiloto;
}

void piloto::setCodigoPiloto(int newCodigoPiloto)
{
    codigoPiloto = newCodigoPiloto;
}

const QString &piloto::getNomePiloto() const
{
    return nomePiloto;
}

void piloto::setNomePiloto(const QString &newNomePiloto)
{
    nomePiloto = newNomePiloto;
}

const QString &piloto::getPaisPiloto() const
{
    return paisPiloto;
}

void piloto::setPaisPiloto(const QString &newPaisPiloto)
{
    paisPiloto = newPaisPiloto;
}

int piloto::getIdadePiloto() const
{
    return idadePiloto;
}

void piloto::setIdadePiloto(int newIdadePiloto)
{
    idadePiloto = newIdadePiloto;
}

const QString &piloto::getEquipePiloto() const
{
    return equipePiloto;
}

void piloto::setEquipePiloto(const QString &newEquipePiloto)
{
    equipePiloto = newEquipePiloto;
}

const QString &piloto::getMotorPiloto() const
{
    return motorPiloto;
}

void piloto::setMotorPiloto(const QString &newMotorPiloto)
{
    motorPiloto = newMotorPiloto;
}

int piloto::getPFinal() const
{
    return pFinal;
}

void piloto::setPFinal(int newPFinal)
{
    pFinal = newPFinal;
}

piloto::piloto()
{
}
