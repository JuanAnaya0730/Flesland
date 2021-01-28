/*! La clase "Muro" cumplira casi la misma funcion que la clase plataforma con la
 *  diferencia de que este no dejara al personaje pasarlo de un lado a otro.
*/

#ifndef MURO_H
#define MURO_H

#include "plataforma.h"

class Muro:
        public Plataforma
{
private:
    int posicionX; // Posicion en X del muro.
    int posicionY; // Posicion en Y del muro.
    int Ancho; // Ancho que tendra el muro.
    int Alto; // Alto que tendra el muro.

public:
    Muro(int pX, int pY, int ancho_, int alto_);

    int getPosicionX() const;
    int getPosicionY() const;
    int getAncho() const;
    int getAlto() const;

};

#endif // MURO_H
