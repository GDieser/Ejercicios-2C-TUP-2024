#include <iostream>
#include "Casa_quinta.h"

using namespace std;

Casa_quinta::Casa_quinta()
{
    //ctor
}

Casa_quinta::Casa_quinta(float superficieTotal, float superficieCubierta, bool pileta, bool quincho, int habitaciones, int codInmueble, int antiguedad, float precioVenta, float precioAlquiler, string calle, string numero, string localidad)
    : Inmueble(codInmueble, antiguedad, precioVenta, precioAlquiler, calle, numero, localidad)
{
    setSuperficieTotal(superficieTotal);
    setSuperficieCubierta(superficieCubierta);
    setPileta(pileta);
    setQuincho(quincho);
    setHabitaciones(habitaciones);
}


float Casa_quinta::getSuperficieTotal()
{
    return _superficieTotal;
}
float Casa_quinta::getSuperficieCubierta()
{
    return _superficieCubierta;
}
bool Casa_quinta::getPileta()
{
    return _pileta;
}
bool Casa_quinta::getQuincho()
{
    return _quincho;
}
int Casa_quinta::getHabitaciones()
{
    return _habitaciones;
}

void Casa_quinta::setSuperficieTotal(float superficieTotal)
{
    _superficieTotal = superficieTotal;
}
void Casa_quinta::setSuperficieCubierta(float superficieCubierta)
{
    _superficieCubierta = superficieCubierta;
}
void Casa_quinta::setPileta(bool pileta)
{
    _pileta = pileta;
}
void Casa_quinta::setQuincho(bool quincho)
{
    _quincho = quincho;
}
void Casa_quinta::setHabitaciones(int habitacione)
{
    _habitaciones = habitacione;
}

void Casa_quinta::cargarDuenio(string nombre, string apellido, string dni, string celular)
{
    Duenio obj(nombre, apellido, dni, celular);

    objDuenio = obj;
}
