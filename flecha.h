#ifndef FLECHA_H
#define FLECHA_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QTimer>
#include <math.h>

#define Angulo (float) 1.22173
#define G (float) 9.81

class Flecha:
        public QObject,
        public QGraphicsRectItem
{
private:
    QTimer *timer;
    float posicionX;
    float posicionY;
    float X0;
    float Y0;
    float V0;
    float Vx;
    float Vy;
    float t;

//    QTimer *timer;
//    double posicion_x;
//    double posicion_y;
//    double velocidad;
//    double angulo;
//    double velocidad_x;
//    double velocidad_y;
//    const double delta = 0.01;
//    const double gravedad = 9.8;

//    int ancho;
//    int alto;
//    int radio= 15;

public:
    Flecha(float posicionInicialX, float posicionInicialY);

    void actulalizarMparabolico();
//    QRectF boundingRect() const;
//    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

//    double getPosicion_x() const;
//    void setPosicion_x(double value);
//    double getPosicion_y() const;
//    void setPosicion_y(double value);

//    void actualizar_posicion ();
//    void calcularVelocidad();

};

#endif // FLECHA_H
