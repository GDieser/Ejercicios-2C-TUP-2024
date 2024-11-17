#include <iostream>
#include "TaladroPercutor.h"

using namespace std;

TaladroPercutor::TaladroPercutor(string nombre, float peso, float longitud) : Taladro(nombre, peso, longitud)
{
    _nombre = nombre;
}

int TaladroPercutor::getGolpesPorMinuto()
{
    return _golpesPorMinuto;
}
void TaladroPercutor::setGolpesPorMinuto(int golpes)
{
    _golpesPorMinuto = golpes;
}

void TaladroPercutor::mostrarInformacion()
{
    cout << "Herramienta: " << _nombre;
    cout << endl;
    cout << "Peso:  " << _peso;
    cout << endl;
    cout << "Longitud: " << _longitud;
    cout << endl;
    cout << "GPM: " << getGolpesPorMinuto();
}
