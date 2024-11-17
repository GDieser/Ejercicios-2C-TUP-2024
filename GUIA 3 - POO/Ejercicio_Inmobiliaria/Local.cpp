#include <iostream>
#include "Local.h"

using namespace std;


Local::Local()
{
    //ctor
}

Local::Local(float superficieTotal, float superficieEstacionamiento, bool zonaComercial, int codInmueble, int antiguedad, float precioVenta, float precioAlquiler, string calle, string numero, string localidad)
: Inmueble(codInmueble, antiguedad, precioVenta, precioAlquiler, calle, numero, localidad)
{
    setSuperficieEstacionamiento(superficieEstacionamiento);
    setSuperficieTotal(superficieTotal);
    setZonaComercial(zonaComercial);
}

float Local::getSuperficieTotal()
{
    return _superficieTotal;
}
float Local::getSuperficieEstacionamiento()
{
    return _superficieEstacionamiento;
}
bool Local::getZonaComercial()
{
    return _zonaComercial;
}

void Local::setSuperficieTotal(float superficieTotal)
{
    _superficieTotal = superficieTotal;
}
void Local::setSuperficieEstacionamiento(float superficieEstacionamiento)
{
    _superficieEstacionamiento = superficieEstacionamiento;
}
void Local::setZonaComercial(bool zonaComercial)
{
    _zonaComercial = zonaComercial;
}

void Local::cargarDuenio(string nombre, string apellido, string dni, string celular)
{
    Duenio obj(nombre, apellido, dni, celular);

    objDuenio = obj;
}

