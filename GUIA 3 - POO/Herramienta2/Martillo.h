#pragma once
#include "Herramienta.h"

/*Martillo (hereda de Herramienta):
Atributos: tipoCabeza (string, por ejemplo: "plana", "de bola").
Métodos:
Constructor que inicialice los atributos. Debe establecer "Martillo" como nombre de la herramienta.
Métodos getters y setters para el atributo tipoCabeza.
mostrarInformacion() → Imprime los detalles de la herramienta e indica el tipo de cabeza del martillo.*/

using namespace std;

class Martillo : public Herramienta{
protected:
    string _tipoCabeza;

public:
    Martillo(string nombre, float peso, float longitud);

    string getTipoCabeza();
    void setTipoCaebza(string tipo);

    void mostrarInformacion();

};



