#include <iostream>
#include "Termometro.h"

using namespace std;

Termometro::Termometro(){}

Termometro::Termometro(float tempInicial, char unidadInicial)
{
    _temperatura = tempInicial;
    _unidad = unidadInicial;
}

void Termometro::setTemperatura(float temp)
{
    _temperatura = temp;

}

float Termometro::getTemperatura() {return _temperatura;}

void Termometro::cambiarUnidad(char nuevaUnnidad)
{
    if(nuevaUnnidad != _unidad)
    {
        if(nuevaUnnidad == 'c') _temperatura = (_temperatura * 1.8) + 32;
        if(nuevaUnnidad == 'f') _temperatura = (_temperatura - 32) * 1.8;
    }
    _unidad = nuevaUnnidad;

}

char Termometro::getUnidad() {return _unidad;}
