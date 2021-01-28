#include "personaje.h"
#include <QDebug>

Personaje::Personaje(int posicionInicialX,int posicionInicialY)
{
    timer = new QTimer();

    V0 = 50;
    Vx = V0 * cos(Angulo);
    Vy = V0 * sin(Angulo);

    X0 = posicionInicialX;
    Y0 = posicionInicialY;
    setRect(0, 0, 80, 85);
    setPos(X0, Y0);

    posicionX = X0;

    connect(timer, &QTimer::timeout, this, &Personaje::actualizarMParabolico);
    timerOn();
}

void Personaje::actualizarMParabolico()
{
    //posicionX = X0 + Vx*t;
    posicionY = Y0 - Vy*t + ((G*t*t)/2);
    setPos(posicionX, posicionY);
    t += 0.1;
}

void Personaje::Disparar()
{
    disparo = new Cuchillo(x()+40, y()+37);
    qDebug() << &disparo;
}

void Personaje::saltar()
{
    Y0 = y();
    t = 0;
    timerOn();
}

void Personaje::bajar()
{
    t = 10.7;
    timerOn();
}

void Personaje::adelantar()
{
    posicionX+=1;
    setPos(posicionX, y());
}

void Personaje::timerOn()
{
    timer->start(5);
}

void Personaje::timerOff()
{
    timer->stop();
}

void Personaje::setPosicionX(float value)
{
    posicionX = value;
}

void Personaje::setY0(float value)
{
    Y0 = value;
    setPos(x(), Y0);
}

Cuchillo *Personaje::getDisparos() const
{
    return disparo;
}

float Personaje::getPosicionY() const
{
    return posicionY;
}

float Personaje::getT() const
{
    return t;
}

float Personaje::getPosicionX() const
{
    return posicionX;
}
