#include <iostream>
#include <cstring>

#include "Departamento.h"

using namespace std;


Departamento::Departamento() {}

Departamento::Departamento(string piso, string departamento, float superficieTotal, float superficieCubierta, int habitaciones, float superficieBalcon, bool cochera, float expensa, int codInmueble, int antiguedad, float precioVenta, float precioAlquiler, string calle, string numero, string localidad)
    : Inmueble(codInmueble, antiguedad, precioVenta, precioAlquiler, calle, numero, localidad)
{
    setPiso(piso);
    setDepartamento(departamento);
    setSuperficieTotal(superficieTotal);
    setSuperficieCubierta(superficieCubierta);
    setSuperficieBalcon(superficieBalcon);
    setHabitaciones(habitaciones);
    setCochera(cochera);
    setExpensa(expensa);
}

string Departamento::getPiso()
{
    return _piso;
}
string Departamento::getDepartamento()
{
    return _departamento;
}
float Departamento::getSuperficieTotal()
{
    return _superficieTotal;
}
float Departamento::getSuperficieCubierta()
{
    return _superficieCubierta;
}
int Departamento::getHabitaciones()
{
    return _habitaciones;
}
float Departamento::getSuperficieBalcon()
{
    return _superficieBalcon;
}
bool Departamento::getCochera()
{
    return _cochera;
}
float Departamento::getExpensa()
{
    return _expensa;
}


void Departamento::setPiso(string piso)
{
    strcpy(_piso, piso.c_str());
}
void Departamento::setDepartamento(string departamento)
{
    strcpy(_departamento, departamento.c_str());
}
void Departamento::setSuperficieTotal(float superficieTotal)
{
    _superficieTotal = superficieTotal;
}
void Departamento::setSuperficieCubierta(float superficieCubierta)
{
    _superficieCubierta = superficieCubierta;
}
void Departamento::setHabitaciones(int habitaciones)
{
    _habitaciones = habitaciones;
}
void Departamento::setSuperficieBalcon(float superficieBalcon)
{
    _superficieBalcon = superficieBalcon;
}
void Departamento::setCochera(bool cochera)
{
    _cochera = cochera;
}
void Departamento::setExpensa(float expensa)
{
    _expensa = expensa;
}

void Departamento::cargarDuenio(string nombre, string apellido, string dni, string celular)
{
    Duenio obj(nombre, apellido, dni, celular);

    objDuenio = obj;
}

