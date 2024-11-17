#include <iostream>
#include "Martillo.h"
#include "Herramienta.h"

using namespace std;

///Constructor
//Martillo::Martillo(){}

Martillo::Martillo(string tipoCabeza, float peso, float longitud)
{
    setNombre();
    _tipoCabeza = tipoCabeza;
    _peso = peso;
    _longitud = longitud;
}
void Martillo::setNombre(){ _nombre = "Martillo";}

float Martillo::getLongitud(){return _longitud;}

float Martillo::getPeso(){return _peso;}

void Martillo::setLongitud(float longitud)
{
    _longitud = longitud;
}

void Martillo::setPeso(float peso)
{
    _peso = peso;
}

void Martillo::mostrarInformacion()
{
    cout << _tipoCabeza << endl;
    cout << _nombre << endl;
    cout << _peso << endl;
    cout << _longitud << endl;
}
