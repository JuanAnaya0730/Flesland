/*! La clase cuchillo se encargara de trabajar en conjunto con la clase personaje ya que estos
 *  seran los proyectiles que el personaje principal lanzara.
 *  Estos cuchillos o proyectiles describiran un movimiento rectilineo uniforme(MRU).
*/

#ifndef CUCHILLO_H
#define CUCHILLO_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QTimer>

#define V 2 // Velocidad de los proyectiles.

class Cuchillo:
        public QObject,
        public QGraphicsRectItem
{
private:
    int posicionX; // Posicion en X despues de un determinado tiempo.
    int posicionY; // Posicion en Y. constante.
    int X0; // Posicion inicial.
    int t; // Intervalo de tiempo durante el cual se mueve el cuerpo.
    QTimer *timer;

public:
    /* El construcor sobrecargado debera recibir una posicion inicial en X y una posicion
     inicial y constante en Y para que los proyectiles que se lancen se ubiquen correctamente
     en la pantalla. */
    Cuchillo(int posicionInicialX, int posicionconstanteY);

    int getPosicionX() const;
    int getPosicionY() const;

public slots:
    /* Esta funcion se encargara de actualizar la posicion de los proyectiles para un tiempo t. */
    void actulizarposicion(void);
};

#endif // CUCHILLO_H
