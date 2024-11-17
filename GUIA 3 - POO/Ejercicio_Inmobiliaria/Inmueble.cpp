#include <iostream>
#include <cstring>
#include "Inmueble.h"

using namespace std;

Inmueble::Inmueble()
{
    _precioAlquiler = 0;
    _precioVenta = 0;
}

Inmueble::Inmueble(int codInmueble, int antiguedad, float precioVenta, float precioAlquiler, string calle, string numero, string localidad)
{
    setCodigo(codInmueble);
    setAntiguedad(antiguedad);
    setPrecioVenta(precioVenta);
    setPrecioAlquiler(precioAlquiler);

    setCalle(calle);
    setNumero(numero);
    setLocalidad(localidad);
}

int Inmueble::getCodigo()
{
    return _codInmueble;
}
int Inmueble::getAntiguedad()
{
    return _antiguedad;
}
float Inmueble::getPrecioVenta()
{
    return _precioVenta;
}
float Inmueble::getPrecioAlquiler()
{
    return _precioAlquiler;
}
string Inmueble::getCalle()
{
    return _calle;
}
string Inmueble::getNumero()
{
    return _numero;
}
string Inmueble::getLocalidad()
{
    return _localidad;
}

void Inmueble::setCodigo(int codigo)
{
    _codInmueble = codigo;
}
void Inmueble::setAntiguedad(int antiguedad)
{
    _antiguedad = antiguedad;
}
void Inmueble::setPrecioVenta(float precioVenta)
{
    _precioVenta = precioVenta;
}
void Inmueble::setPrecioAlquiler(float precioAlquiler)
{
    _precioAlquiler = precioAlquiler;
}

void Inmueble::setCalle(string calle)
{
    strcpy(_calle, calle.c_str());
}

void Inmueble::setNumero(string numero)
{
    strcpy(_numero, numero.c_str());
}

void Inmueble::setLocalidad(string localidad)
{
    strcpy(_localidad, localidad.c_str());
}
