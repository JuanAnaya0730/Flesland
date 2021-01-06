#include "charco.h"

Charco::Charco(int pX, int pY, int ancho_, int alto_)
{
    posicionX = pX;
    posicionY = pY;
    Ancho = ancho_;
    Alto = alto_;
}

QRectF Charco::boundingRect() const
{
    return QRectF(posicionX, posicionY, Ancho, Alto);
}

void Charco::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawRect(boundingRect());
}
