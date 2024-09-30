#include <iostream>
#include <cstring>

#include "AlumnosTUP.h"


using namespace std;

AlumnosTUP::AlumnosTUP()
{

}

AlumnosTUP::AlumnosTUP(int legajo, string nombre, string apellido, string email)
{
    setLegajo(legajo);
    setNombre(nombre);
    setApellido(apellido);
    setEmail(email);
}

string AlumnosTUP::getNombre() const
{
    return _nombre;
}
string AlumnosTUP::getApellido() const
{
    return  _apellido;
}

string AlumnosTUP::getEmail() const
{
    return _email;
}

void AlumnosTUP::setNombre(string nombre)
{
    strcpy(_nombre, nombre.c_str());
}
void AlumnosTUP::setApellido(string apellido)
{
    strcpy(_apellido, apellido.c_str());
}

void AlumnosTUP::setEmail(string email)
{
    strcpy(_email, email.c_str());
}

int AlumnosTUP::getLegajo() const
{
    return _legajo;
}
void AlumnosTUP::setLegajo(int l)
{
    _legajo=l;
}

void AlumnosTUP::Mostrar()
{
    cout<<"LEGAJO ";
    cout<<_legajo<<endl;

    cout<<"NOMBRE ";
    cout<<_nombre<<endl;

    cout<<"APELLIDO ";
    cout<<_apellido<<endl;

    cout<<"EMAIL ";
    cout<<_email<<endl;

}
