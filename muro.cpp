#include "muro.h"

Muro::Muro(int pX, int pY, int ancho_, int alto_):
    Plataforma(pX, pY, ancho_, alto_)
{
    posicionX = pX;
    posicionY = pY;
    Ancho = ancho_;
    Alto = alto_;
}
