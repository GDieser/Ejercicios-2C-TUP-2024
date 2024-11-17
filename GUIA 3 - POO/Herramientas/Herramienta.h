#pragma once
#include <iostream>
#include <string>

using namespace std;

class Herramienta
{
protected:
    string _nombre = {};
    float _peso;
    float _longitud;

public:

    Herramienta();
    Herramienta(float peso, float longitud);

    ///Getter
    float getPeso();
    float getLongitud();

    ///Setter
    void setPeso(float peso);
    void setLongitud(float longitud);

    void mostrarInformacion();
};

///Constructor
Herramienta::Herramienta(){}

Herramienta::Herramienta(float peso, float longitud)
{
    _peso = peso;
    _longitud = longitud;
}

float Herramienta::getLongitud(){return _longitud;}

float Herramienta::getPeso(){return _peso;}

void Herramienta::setLongitud(float longitud)
{
    _longitud = longitud;
}

void Herramienta::setPeso(float peso)
{
    _peso = peso;
}

void Herramienta::mostrarInformacion()
{
    cout << _nombre << endl;
    cout << _peso << endl;
    cout << _longitud << endl;
}
