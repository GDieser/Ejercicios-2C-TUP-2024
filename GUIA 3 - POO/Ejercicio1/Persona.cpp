#include <iostream>
using namespace std;

#include "Persona.h"


Persona::Persona(string nombre, int edad)
{
    _nombre = nombre;
    _edad = edad;
}

void Persona::setNombre(string nombre)
{
    _nombre = nombre;
}
void Persona::setEdad(int edad)
{
    _edad = edad;
}

string Persona::getNombre()
{
    return _nombre;
}
int Persona::getEdad()
{
    return _edad;
}

void Persona::cargarDatos()
{
    int e;
    string n;

    cout << "Nombre: ";
    cin >> _nombre;
    cout << "Edad: ";
    cin >> _edad;
}

void Persona::mostrarDatos(Persona obj)
{
    cout << "mostrar1" << endl;
    cout << getEdad() << endl;
    cout << getNombre() << endl;

    cout << "mostrar 2" << endl;
    cout << obj.getEdad() << endl;
    cout << obj.getNombre() << endl;

    cout << "mostrar 3" << endl;
    cout << _nombre << endl;
    cout << _edad << endl;
}
