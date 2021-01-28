#include "nivel.h"

Personaje *Nivel::getFlesman() const
{
    return flesman;
}

Nivel::Nivel()
{
    centro = new QPointF(400, 301);
    flesman = new Personaje(2000,0);
    timerRun = new QTimer();
    timer = new QTimer();

    connect(timer, &QTimer::timeout, this, &Nivel::moverCentro);
    connect(timerRun, &QTimer::timeout, this, &Nivel::actualizar);
}

void Nivel::correrNivel()
{
    timer->start(8);
    timerRun->start();
}

void Nivel::moverCentro()
{
    //flesman->setPosicionX(flesman->getPosicionX()+1);
    //centro->setX(centro->x()+1);
}

void Nivel::actualizar()
{
    for(int i=0; i<plataformas.size(); ++i){
        if(flesman->collidesWithItem(plataformas.at(i)) && flesman->getT()>=7){
            if(flesman->getPosicionY()+85 <= plataformas.at(i)->getPosy()+plataformas.at(i)->getH()){
                flesman->setY0(plataformas.at(i)->getPosy()-86);
                flesman->timerOff();
            }
        }
    }
}

QPointF *Nivel::getCentro() const
{
    return centro;
}

void Nivel::cargarNivel()
{
    plataformas = cargarPlataformas("Plataformas_Nivel1.txt");
}

QList<Plataforma *> Nivel::getPlataformas()
{
    return plataformas;
}
