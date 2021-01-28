#ifndef NIVEL_H
#define NIVEL_H

#include <QObject>
#include <QTimer>
#include "LeerAchivos.h"
#include "plataforma.h"
#include "personaje.h"
#include "sierra.h"
#include "charco.h"
#include "muro.h"

class Nivel:
        public QObject
{
private:
    QList <Plataforma*> plataformas;
    QList <Sierra*> sierras;
    QList <Charco*> charcos;
    QList <Muro*> muros;
    Personaje *flesman;
    QTimer *timerRun;
    QPointF *centro;
    QTimer *timer;

public:
    Nivel();

    QPointF *getCentro() const;
    void correrNivel();
    void cargarNivel();

    QList<Plataforma *> getPlataformas();
    Personaje *getFlesman() const;

public slots:
    void moverCentro();
    void actualizar();
};

#endif // NIVEL_H
