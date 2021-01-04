#include "flecha.h"

Flecha::Flecha(double x, double y, double v, double a)
{
    posicion_x = x;
    posicion_y = y;
    velocidad = v;
    angulo = a;
    setPos (posicion_x,posicion_y);
}

QRectF Flecha::boundingRect() const
{
    return QRectF(-radio,-radio,2*radio,2*radio);
}

void Flecha::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    // <div>Iconos diseñados por <a href="https://www.flaticon.es/autores/smashicons" title="Smashicons">Smashicons</a> from <a href="https://www.flaticon.es/" title="Flaticon">www.flaticon.es</a></div>
    QPixmap imagen (":/imagen/imagenes/flecha.png");
    painter->drawPixmap(-radio,-radio,2*radio,2*radio,imagen);
}

void Flecha::calcularVelocidad()
{
    velocidad_x = velocidad*cos(angulo);
    velocidad_y = velocidad*sin(angulo)-gravedad*delta;
    angulo = atan2(velocidad_y,velocidad_x);
    velocidad = sqrt(velocidad_x*velocidad_x+velocidad_y*velocidad_y);
}

void Flecha::actualizar_posicion()
{
    calcularVelocidad();
    posicion_x = posicion_x+velocidad_x *delta;
    posicion_y = posicion_y + velocidad_y*delta-(0.5*gravedad*delta*delta);
    setPos (posicion_x,posicion_y);
}

double Flecha::getPosicion_x() const
{
    return posicion_x;
}

void Flecha::setPosicion_x(double value)
{
    posicion_x = value;
}

double Flecha::getPosicion_y() const
{
    return posicion_y;
}

void Flecha::setPosicion_y(double value)
{
    posicion_y = value;
}
