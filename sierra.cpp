#include "sierra.h"

Sierra::Sierra(int posicininicialX, int posicioninicialY, int R_)
{
    timer = new QTimer();
    Radio = R_;
    w = 2;
    t=0;
    PX0 = posicininicialX;
    PY0 = posicioninicialY;
    timer->start(30);
    connect(timer, &QTimer::timeout, this, &Sierra::actualizar);
}


QRectF Sierra::boundingRect() const
{
    return QRectF(PX0, PY0, 20, 20);
}

void Sierra::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::white);
    painter->drawEllipse(boundingRect());
}

void Sierra::actualizar()
{
    t+=0.1;
    posicionX = Radio*cos(w*t);
    posicionY = Radio*sin(w*t);
    setPos(posicionX-10, posicionY-10);
}
