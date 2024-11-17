#include <iostream>

#include "DetalleRutina.h"

using namespace std;

DetalleRutina::DetalleRutina()
{
    //ctor
}

DetalleRutina::DetalleRutina(int *idEjercicios)
{

    setIdEjercicios(idEjercicios);

}

int* DetalleRutina::getIdEjercicios()
{
    return _idEjercicios;
}


void DetalleRutina::setIdEjercicios(int *idEjercicios)
{

    for(int i=0; i<5; i++)
    {
        _idEjercicios[i] = idEjercicios[i];
    }

}

