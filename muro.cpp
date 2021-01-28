#include "muro.h"

Muro::Muro(int pX, int pY, int ancho_, int alto_):
    Plataforma(pX, pY, ancho_, alto_)
{
    posicionX = pX;
    posicionY = pY;
    Ancho = ancho_;
    Alto = alto_;
}

int Muro::getPosicionX() const
{
    return posicionX;
}

int Muro::getPosicionY() const
{
    return posicionY;
}

int Muro::getAlto() const
{
    return Alto;
}

int Muro::getAncho() const
{
    return Ancho;
}
