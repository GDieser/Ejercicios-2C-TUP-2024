#pragma once
#include "Duenio.h"

using namespace std;

class Duenio
{
protected:

    char _nombre[50];
    char _apellido[50];
    char _DNI[12];
    char _celular[12];

public:
    Duenio();
    Duenio(string nombre, string apellido, string DNI, string celular);

    string getNombre();
    string getApellido();
    string getDNI();
    string getCelular();

    void setNombre(string nombre);
    void setApellido(string apellido);
    void setDNI(string DNI);
    void setCelular(string celular);

};

