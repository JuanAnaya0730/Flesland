#include "aldeano.h"

Aldeano::Aldeano(int posicionconstanteX, int posicionconstanteY)
{
    posicionX = posicionconstanteX;
    posicionY = posicionconstanteY;

    setRect(posicionX, posicionY, 80, 85);
}
