#ifndef MAINGAME_H
#define MAINGAME_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QKeyEvent>
#include <QObject>
#include <QTimer>
#include "nivel.h"

class MainGame:
        public QGraphicsView
{
private:
    QGraphicsScene *scene;
    QTimer *timerView;
    Nivel *nivel1;

public:
    MainGame();
    void keyPressEvent(QKeyEvent *key);

public slots:
    void moverView();

};

#endif // MAINGAME_H
