#include <iostream>
#include "Destornillador.h"

using namespace std;

Destornillador::Destornillador(string nombre, float peso, float longitud):Herramienta(peso, longitud)
{
    _nombre = nombre;
}

string Destornillador::getTipoPunta()
{
    return _tipoPunta;
}
void Destornillador::setTipoPunta(string tipo)
{
    _tipoPunta = tipo;
}

void Destornillador::mostrarInformacion()
{
    cout << "Herramienta: " << _nombre;
    cout << endl;
    cout << "Peso:  " << _peso;
    cout << endl;
    cout << "Longitud: " << _longitud;
    cout << endl;
    cout << "Tipo Punta: " << getTipoPunta();
}
