#ifndef OBSTACULO_FUEGO_H
#define OBSTACULO_FUEGO_H


class obstaculo_fuego
{
    double rapidez_tangencial; // v longitud del arco que el objeto recorre por cada unidad de tiempo m/s
    double rapidez_angular; // angulo que el radio barre por cada unidad de tiempo pi radianes / s, modulo de la velocidad angular
    double velocidad_tangencial; // V modulo y direcion m/s
    double aceleracion_centripeta;//aceleracion que siempre apunta hacie el centro
    double velocidad_angular; // que tan rapido gira el cuerpo y en que dirrecion lo hace

public:
    obstaculo_fuego();
};

#endif // OBSTACULO_FUEGO_H
