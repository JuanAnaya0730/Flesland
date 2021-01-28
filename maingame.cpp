#include "maingame.h"
#include <QDebug>

MainGame::MainGame()
{
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800, 602);

    scene = new QGraphicsScene();
    timerView = new QTimer();
    nivel1 = new Nivel();

    scene->setSceneRect(0,0,10000,600);
    setScene(scene);

    nivel1->cargarNivel();
    nivel1->correrNivel();

    scene->addPixmap(QPixmap(":/Imagenes/Prueba.png"));
    scene->addItem(nivel1->getFlesman());

    timerView->start();
    QObject::connect(timerView, &QTimer::timeout, this, &MainGame::moverView);

    show();
}

void MainGame::keyPressEvent(QKeyEvent *key)
{
    if(key->key() == Qt::Key_W){
        nivel1->getFlesman()->saltar();
        //p->saltar();
    }
    if(key->key() == Qt::Key_S){
        //p->bajar();
        nivel1->getFlesman()->bajar();
    }
    if(key->key() == Qt::Key_D){
        //p->bajar();
        nivel1->getFlesman()->adelantar();
    }
    if(key->key() == Qt::Key_Space){
        nivel1->getFlesman()->Disparar();
        scene->addItem(nivel1->getFlesman()->getDisparos());
    }
}

void MainGame::moverView()
{
//    for(int i=0; i<nivel1->getPlataformas().size(); ++i){
//        if(p->collidesWithItem(nivel1->getPlataformas().at(i)) && p->getT()>=7){
//            if(p->getPosicionY()+85 <= nivel1->getPlataformas().at(i)->getPosy()+nivel1->getPlataformas().at(i)->getH()){
//                p->setY0(nivel1->getPlataformas().at(i)->getPosy()-86);
//                p->timerOff();
//            }
//        }
//    }
    //centerOn(*nivel1->getCentro());
    centerOn(2000, 474);
}
