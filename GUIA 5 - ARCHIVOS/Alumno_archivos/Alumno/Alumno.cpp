#include <iostream>
#include <cstring>
#include "Alumno.h"
#include "Fecha.h"

using namespace std;

Alumno::Alumno()
{
    //Cargar();
}

Alumno::Alumno(int legajo, string nombre, string apellido, Fecha fecha, string email, int codigo)
{
    setLegajo(legajo);
    setNombre(nombre);
    setApellido(apellido);
    setFechaNacimiento(fecha);
    setEmail(email);
    setCodigoCarrera(codigo);
}


string Alumno::getNombre() const
{
    return _nombre;
}
string Alumno::getApellido() const
{
    return  _apellido;
}
Fecha Alumno::getFechaNacimiento() const
{
    return _fechaNacimiento;
}
string Alumno::getEmail() const
{
    return _email;
}
int Alumno::getCodigoCarrera() const
{
    return _codigoCarrera;
}

void Alumno::setNombre(string nombre)
{
    strcpy(_nombre, nombre.c_str());
}
void Alumno::setApellido(string apellido)
{
    strcpy(_apellido, apellido.c_str());
}
void Alumno::setFechaNacimiento(Fecha fecha)
{
    _fechaNacimiento = fecha;
}
void Alumno::setEmail(string email)
{
    strcpy(_email, email.c_str());
}
void Alumno::setCodigoCarrera(int codigo)
{
    _codigoCarrera = codigo;
}

int Alumno::getLegajo() const
{
    return _legajo;
}
void Alumno::setLegajo(int l)
{
    _legajo=l;
}

///Métodos de alumno
void Alumno::Cargar()
{
    Fecha fechaNacimiento;
    int legajo, codigoCarrera;

    string nombre, apellido, email;

    cout<<"LEGAJO ";
    cin>>legajo;
    setLegajo(legajo);

    cout<<"NOMBRE ";
    cin>>nombre;
    setNombre(nombre);

    cout<<"APELLIDO ";
    cin>>apellido;
    setApellido(apellido);

    cout<<"FECHA DE NACIMIENTO " << endl;
    fechaNacimiento.CargarFecha();
    setFechaNacimiento(fechaNacimiento);

    cout<<"EMAIL ";
    cin>>email;
    setEmail(email);

    cout<<"CARRERA ";
    cin>>codigoCarrera;
    setCodigoCarrera(codigoCarrera);

}

void Alumno::Mostrar()
{
    cout<<"LEGAJO ";
    cout<<_legajo<<endl;

    cout<<"NOMBRE ";
    cout<<_nombre<<endl;

    cout<<"APELLIDO ";
    cout<<_apellido<<endl;

    cout<<"FECHA DE NACIMIENTO "<<endl;
    _fechaNacimiento.Mostrar();

    cout<<"EMAIL ";
    cout<<_email<<endl;

    cout<<"CARRERA ";
    cout<<_codigoCarrera<<endl;


}
