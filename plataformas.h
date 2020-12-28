#ifndef PLATAFORMAS_H
#define PLATAFORMAS_H

#include <QGraphicsItem>
#include <QPainter>

class plataformas: public QGraphicsItem
{
public:

    int w,h;
    int posx, posy;

    plataformas(int x, int y,int w_, int h_);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);


};

#endif // PLATAFORMAS_H
