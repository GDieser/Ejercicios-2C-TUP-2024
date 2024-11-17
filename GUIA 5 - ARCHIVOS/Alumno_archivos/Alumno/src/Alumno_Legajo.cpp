#include <iostream>
#include <cstring>

#include "Alumno_Legajo.h"

using namespace std;


Alumno_Legajo::Alumno_Legajo()
{

}

Alumno_Legajo::Alumno_Legajo(int legajo, string nombre, string apellido)
{
    setLegajo(legajo);
    setNombre(nombre);
    setApellido(apellido);
}

string Alumno_Legajo::getNombre() const
{
    return _nombre;
}
string Alumno_Legajo::getApellido() const
{
    return  _apellido;
}

void Alumno_Legajo::setNombre(string nombre)
{
    strcpy(_nombre, nombre.c_str());
}
void Alumno_Legajo::setApellido(string apellido)
{
    strcpy(_apellido, apellido.c_str());
}

int Alumno_Legajo::getLegajo() const
{
    return _legajo;
}
void Alumno_Legajo::setLegajo(int l)
{
    _legajo=l;
}

void Alumno_Legajo::Mostrar()
{
    cout<<"LEGAJO ";
    cout<<_legajo<<endl;

    cout<<"NOMBRE ";
    cout<<_nombre<<endl;

    cout<<"APELLIDO ";
    cout<<_apellido<<endl;

}

