#include <iostream>
#include "funciones.h"

using namespace std;

void Alumno::cargar()
{
    cout << "Legajo: ";
    cin >> legajo;

    cout << "Nombre: ";
    cin >> nombre;

    cout << "Apellido: ";
    cin >> apellido;

    regular = true;
}

void Alumno::mostrar()
{
    cout << legajo << endl;
    cout << nombre << endl;
    cout << apellido << endl;
}
