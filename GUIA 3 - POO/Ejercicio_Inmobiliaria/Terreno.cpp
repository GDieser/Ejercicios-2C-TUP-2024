#include <iostream>
#include "Terreno.h"

using namespace std;


Terreno::Terreno()
{
    //ctor
}

Terreno::Terreno(float ancho, float largo, float superficieConstruible, int codInmueble, int antiguedad, float precioVenta, float precioAlquiler, string calle, string numero, string localidad)
: Inmueble(codInmueble, antiguedad, precioVenta, precioAlquiler, calle, numero, localidad)
{
    setAncho(ancho);
    setLargo(largo);
    setSuperficieConstruible(superficieConstruible);
}

    float Terreno::getAncho()
    {
        return _ancho;
    }
    float Terreno::getLargo()
    {
        return _largo;
    }
    float Terreno::getSuperficieConstruible()
    {
        return _superficieConstruible;
    }

    void Terreno::setAncho(float ancho)
    {
        _ancho = ancho;
    }
    void Terreno::setLargo(float largo)
    {
        _largo = largo;
    }
    void Terreno::setSuperficieConstruible(float superficieConstruible)
    {
        _superficieConstruible = superficieConstruible;
    }


void Terreno::cargarDuenio(string nombre, string apellido, string dni, string celular)
{
    Duenio obj(nombre, apellido, dni, celular);

    objDuenio = obj;
}

