#pragma once
#include "Herramienta.h"
/*Destornillador (hereda de Herramienta):
Atributos: tipoPunta (string, por ejemplo: "plana", "estrella").
Métodos:
Constructor que inicialice los atributos. Debe establecer "Destornillador" como nombre de herramienta.
Métodos getters y setters para el tipoPunta..
mostrarInformacion() → Imprime los detalles de la herramienta e indica el tipo de punta del destornillador.*/


class Destornillador : public Herramienta
{
private:
    string _tipoPunta;

public:
    Destornillador(string nombre, float peso, float longitud);

    string getTipoPunta();
    void setTipoPunta(string tipo);

    void mostrarInformacion();
};

