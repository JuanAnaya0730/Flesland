#include <QApplication>
#include "maingame.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainGame juego;
    juego.show();

    return a.exec();
}
