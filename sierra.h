#ifndef SIERRA_H
#define SIERRA_H

#include <QGraphicsRectItem>
#include <QPainter>
#include <QObject>
#include <QTimer>
#include <math.h>

#define RADS (2*M_PI/360.0)

class Sierra:
        public QObject,
        public QGraphicsRectItem
{
private:
    QTimer *timer;
    float posicionX;
    float posicionY;
    float PX0;
    float PY0;
    float Radio;
    float w;
    float t;

public:
    Sierra(int posicininicialX, int posicioninicialY, int R_);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

public slots:
    void actualizar();

};

#endif // SIERRA_H
