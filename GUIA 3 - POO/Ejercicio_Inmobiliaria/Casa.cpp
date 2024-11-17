#include <iostream>
#include "Duenio.h"
#include "Casa.h"

using namespace std;

Casa::Casa()
{
    //ctor
}

Casa::Casa(float superdicieTotal, float superficieCubierta, int habitaciones, int codInmueble, int antiguedad, float precioVenta, float precioAlquiler, string calle, string numero, string localidad)
    : Inmueble(codInmueble, antiguedad, precioVenta, precioAlquiler, calle, numero, localidad)
{
    setSuperficieTotal(superdicieTotal);
    setSuperficieCubierta(superficieCubierta);
    setHabitaciones(habitaciones);
}

float Casa::getSuperficieTotal()
{
    return _superficieTotal;
}
float Casa::getSuperficieCubierta()
{
    return _superficieCubierta;
}
int Casa::getHabitaciones()
{
    return _habitaciones;
}

void Casa::setSuperficieTotal(float superficieTotal)
{
    _superficieTotal = superficieTotal;
}
void Casa::setSuperficieCubierta(float superficieCubierta)
{
    _superficieCubierta = superficieCubierta;
}
void Casa::setHabitaciones(int habitaciones)
{
    _habitaciones = habitaciones;
}

void Casa::cargarDuenio(string nombre, string apellido, string DNI, string celular)
{
    Duenio obj(nombre, apellido, DNI, celular);

    _objDuenio = obj;
}

