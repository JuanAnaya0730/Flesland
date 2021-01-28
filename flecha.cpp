#include "flecha.h"

Flecha::Flecha(float posicionInicialX, float posicionInicialY)
{
    timer = new QTimer();

    V0 = 78;
    Vx = V0 * cos(Angulo);
    Vy = V0 * sin(Angulo);

    X0 = posicionInicialX;
    Y0 = posicionInicialY;
    setRect(0, 0, 10, 10);
    setPos(X0, Y0);

    connect(timer, &QTimer::timeout, this, &Flecha::actulalizarMparabolico);
    timer->start(15);
}

void Flecha::actulalizarMparabolico()
{
    posicionX = X0 - Vx*t;
    posicionY = Y0 - Vy*t + ((G*t*t)/2);
    setPos(posicionX, posicionY);
    t += 0.1;
}

/*
Flecha::Flecha(double x, double y, double v, double a)
{
    timer = new QTimer();

    posicion_x = x;
    posicion_y = y;
    velocidad = v;
    angulo = a;
    setPos (posicion_x,posicion_y);

    connect(timer, &QTimer::timeout, this, &Flecha::actualizar_posicion);
    timer->start(5);
}

QRectF Flecha::boundingRect() const
{
    return QRectF(-radio,-radio,2*radio,2*radio);
}

void Flecha::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    // <div>Iconos diseñados por <a href="https://www.flaticon.es/autores/smashicons" title="Smashicons">Smashicons</a> from <a href="https://www.flaticon.es/" title="Flaticon">www.flaticon.es</a></div>
    //QPixmap imagen (":/imagen/imagenes/flecha.png");
    //painter->drawPixmap(-radio,-radio,2*radio,2*radio,imagen);
    painter->setBrush(Qt::blue);
    painter->drawEllipse(boundingRect());
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
    posicion_x = posicion_x-velocidad_x *delta;
    posicion_y = posicion_y - velocidad_y*delta+(0.5*gravedad*delta*delta);
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
*/
