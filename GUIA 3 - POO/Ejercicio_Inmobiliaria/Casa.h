#pragma once

#include "Duenio.h"
#include "Inmueble.h"

using namespace std;

class Casa : public Inmueble
{
private:

    float _superficieTotal;
    float _superficieCubierta;
    int _habitaciones;

    Duenio _objDuenio;

public:
    Casa();

    Casa(float superdicieTotal, float superficieCubierta, int habitaciones, int codInmueble, int antiguedad, float precioVenta, float precioAlquiler, string calle, string numero, string localidad);
    float getSuperficieTotal();
    float getSuperficieCubierta();
    int getHabitaciones();

    void setSuperficieTotal(float superficieTotal);
    void setSuperficieCubierta(float superficieCubierta);
    void setHabitaciones(int habitaciones);

    void cargarDuenio(string nombre, string apellido, string DNI, string celular);

};
