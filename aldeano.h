#ifndef ALDEANO_H
#define ALDEANO_H

#include <QGraphicsRectItem>

class Aldeano:
        public QGraphicsRectItem
{
private:
    int posicionX;
    int posicionY;

public:
    Aldeano(int posicionconstanteX, int posicionconstanteY);
};

#endif // ALDEANO_H
