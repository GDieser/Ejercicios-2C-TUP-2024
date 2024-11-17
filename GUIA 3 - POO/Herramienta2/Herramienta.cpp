#include <iostream>
#include "Herramienta.h"

using namespace std;
//Herramienta::Herramienta(){}

Herramienta::Herramienta(float peso, float longitud)
{
    _peso = peso;
    _longitud = longitud;
}

void Herramienta::setPeso() {}

void Herramienta::setLongitud() {}

float Herramienta::getPeso()
{
    return _peso;
}

float Herramienta::getLongitud()
{
    return _longitud;
}

void Herramienta::mostrarInformacion()
{
    cout << "Herramienta: " << _nombre;
    cout << endl;
    cout << "Peso:  " << _peso;
    cout << endl;
    cout << "Longitud: " << _longitud;
}

