#include <iostream>
# include<cstring>

#include "Alumno.h"



using namespace std;

Alumno::Alumno()
{
    _legajo = 1;
    strcpy(_nombre, "NADA");
    strcpy(_apellido, "NADA");
    _fechaNacimiento;
    strcpy(_email, "NADA");
    _codigoCarrera = 1;
}

int Alumno::getLegajo()
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
    cout<<"LEGAJO ";
    cin>>_legajo;
    cout<<"NOMBRE ";
    cin>>_nombre;
    cout<<"APELLIDO ";
    cin>>_apellido;
    cout<<"FECHA DE NACIMIENTO ";
    _fechaNacimiento.Cargar();
    cout<<"EMAIL ";
    cin>>_email;
    cout<<"CARRERA ";
    cin>>_codigoCarrera;
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
