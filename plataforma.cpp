#include "plataforma.h"

Plataforma::Plataforma(int x, int y, int w_, int h_)
{
    posx = x;
    posy = y;
    w = w_;
    h = h_;
}
QRectF Plataforma::boundingRect() const
{
   return QRectF(posx,posy,w,h);
}

void Plataforma::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::blue);
    painter->drawRect(boundingRect());
}
