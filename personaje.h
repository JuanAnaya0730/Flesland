#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <QGraphicsRectItem>
#include <cuchillo.h>
#include <QObject>
#include <QTimer>
#include <math.h>

#define Angulo (float) 1.5708 // Equivalente de 90° en radianes.
#define G (float) 9.81 // Valor promedio de la gravedad.
class Personaje:
        public QObject,
        public QGraphicsRectItem
{
private:
    Cuchillo *disparo;
    QTimer *timer;
    float posicionX;
    float posicionY;
    float X0;
    float Y0;
    float V0;
    float Vx;
    float Vy;
    float t;

public:
    Personaje(int posicionInicialX,int posicionInicialY);
    void Disparar();
    void saltar();
    void bajar();
    void adelantar();
    void timerOn();
    void timerOff();

    Cuchillo *getDisparos() const;
    float getPosicionX() const;
    float getPosicionY() const;
    float getT() const;
    void setY0(float value);
    void setPosicionX(float value);

public slots:
    void actualizarMParabolico();

};

#endif // PERSONAJE_H
