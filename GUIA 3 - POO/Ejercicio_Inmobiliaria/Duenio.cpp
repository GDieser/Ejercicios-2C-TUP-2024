#include <iostream>
#include <cstring>

#include "Duenio.h"

using namespace std;


Duenio::Duenio() {}

Duenio::Duenio(string nombre, string apellido, string DNI, string celular)
{
    setNombre(nombre);
    setApellido(apellido);
    setDNI(DNI);
    setCelular(celular);
}

string Duenio::getNombre()
{
    return _nombre;
}
string Duenio::getApellido()
{
    return _apellido;
}
string Duenio::getDNI()
{
    return _DNI;
}
string Duenio::getCelular()
{
    return _celular;
}

void Duenio::setNombre(string nombre)
{
    strcpy(_nombre, nombre.c_str());
}
void Duenio::setApellido(string apellido)
{
    strcpy(_apellido, apellido.c_str());
}
void Duenio::setDNI(string DNI)
{
    strcpy(_DNI, DNI.c_str());
}
void Duenio::setCelular(string celular)
{
    strcpy(_celular, celular.c_str());
}
