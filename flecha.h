#ifndef FLECHA_H
#define FLECHA_H

#include <math.h>
#include <QGraphicsItem>
#include <QPainter>
#include <QPixmap>

class flecha :public QGraphicsItem
{
    double posicion_x;
    double posicion_y;
    double velocidad;
    double angulo;
    double velocidad_x;
    double velocidad_y;
    const double delta = 0.01;
    const double gravedad = 9.8;

    int ancho;
    int alto;
    int radio= 15;

public:
    flecha();
    flecha(double x, double y, double v, double a);

    QRectF boundingRect() const = 0;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) = 0;

    double getPosicion_x() const;
    void setPosicion_x(double value);
    double getPosicion_y() const;
    void setPosicion_y(double value);

    void actualizar_posicion ();
    void calcularVelocidad();
};

#endif // FLECHA_H
