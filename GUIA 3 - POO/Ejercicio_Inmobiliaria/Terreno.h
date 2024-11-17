#pragma once

#include "Duenio.h"
#include "Inmueble.h"

using namespace std;

class Terreno : public Duenio, public Inmueble
{
private:

    float _ancho;
    float _largo;
    float _superficieConstruible;

    Duenio objDuenio;

public:
    Terreno();

    Terreno(float ancho, float largo, float superficieConstruible, int codInmueble, int antiguedad, float precioVenta, float precioAlquiler, string calle, string numero, string localidad);

    float getAncho();
    float getLargo();
    float getSuperficieConstruible();

    void setAncho(float ancho);
    void setLargo(float largo);
    void setSuperficieConstruible(float superficieConstruible);


    void cargarDuenio(string nombre, string apellido, string dni, string celular);
};

