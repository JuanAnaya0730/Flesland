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
    int posicionX;
    int posicionY;
    int Ancho;
    int Alto;

public:
    Charco(int pX, int pY, int ancho_, int alto_);

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // CHARCO_H
