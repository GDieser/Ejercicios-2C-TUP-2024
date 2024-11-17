/*#include <iostream>
#include "Martillo.h"
#include "Herramienta.h"

using namespace std;

///Constructor
Martillo::Martillo() {}

Martillo::Martillo(string tipoCabeza, float peso, float longitud)
{
	setNombre();
	_tipoCabeza = tipoCabeza;
	_peso = peso;
	_longitud = longitud;
}
void Martillo::setNombre() { _nombre = "Martillo"; }

float Martillo::getLongitud() { return _longitud; }

float Martillo::getPeso() { return _peso; }

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
*/


#include <iostream>
#include "Herramienta.h"
#include "Martillo.h"


using namespace std;

Martillo::Martillo(string nombre, float peso, float longitud):Herramienta(peso, longitud)
{
    _nombre = nombre;
}


string Martillo::getTipoCabeza()
{
    return _tipoCabeza;
}
void Martillo::setTipoCaebza(string tipo)
{
    _tipoCabeza = tipo;
}


void Martillo::mostrarInformacion()
{

    cout << "Herramienta: " << _nombre;
    cout << endl;
    cout << "Peso:  " << _peso;
    cout << endl;
    cout << "Longitud: " << _longitud;
    cout << endl;
    cout << "Tipo Cabeza: " << getTipoCabeza();
}

