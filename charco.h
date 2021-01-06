/*! La clase "Charco" se encargara de ralentizar al personaje principal en caso de
 *  que este entre en lo que graficamente sera un charco.
*/

#ifndef CHARCO_H
#define CHARCO_H

#include <QGraphicsRectItem>
#include <QPainter>

class Charco:
        public QGraphicsRectItem
{
private:
    int posicionX; // Posicion en X del charco.
    int posicionY; // Posicion en Y del charco.
    int Ancho; // Ancho que tendra el charco.
    int Alto; // Alto que tendra el charco.

public:
    /* El constructor debera recibir la posicion en X y Y en la que se quiere que se
     ubique el charco asi como tambien un ancho y alto para para este. */
    Charco(int pX, int pY, int ancho_, int alto_);

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // CHARCO_H
