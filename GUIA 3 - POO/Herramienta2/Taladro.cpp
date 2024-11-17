#include <iostream>
#include "Taladro.h"

using namespace std;

Taladro::Taladro(string nombre, float peso, float longitud) : Herramienta(peso, longitud)
{
    _nombre = nombre;
}

float Taladro::getPotencia()
{
    return _potencia;
}
void Taladro::setPotencia(float potencia)
{
    _potencia = potencia;
}

void Taladro::mostrarInformacion()
{
    cout << "Herramienta: " << _nombre;
    cout << endl;
    cout << "Peso:  " << _peso;
    cout << endl;
    cout << "Longitud: " << _longitud;
    cout << endl;
    cout << "Potencia: " << getPotencia();
}
