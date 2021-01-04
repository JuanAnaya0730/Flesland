#ifndef FLECHA_H
#define FLECHA_H

#include <QGraphicsItem>
#include <QPainter>
#include <QPixmap>
#include <math.h>

class Flecha:
        public QGraphicsItem
{
private:
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
    Flecha(double x, double y, double v, double a);

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

    double getPosicion_x() const;
    void setPosicion_x(double value);
    double getPosicion_y() const;
    void setPosicion_y(double value);

    void actualizar_posicion ();
    void calcularVelocidad();

};

#endif // FLECHA_H
