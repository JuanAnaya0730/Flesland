#ifndef PLATAFORMA_H
#define PLATAFORMA_H

#include <QGraphicsItem>
#include <QPainter>

class Plataforma:
        public QGraphicsItem
{
protected:
    int w,h;
    int posx, posy;

public:
    Plataforma(int x, int y,int w_, int h_);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
};

#endif // PLATAFORMA_H
