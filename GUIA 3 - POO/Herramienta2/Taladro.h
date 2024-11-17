#pragma once
#include "Herramienta.h"

/*Taladro (hereda de Herramienta):
Atributos: potencia (float, en watts).
Métodos:
Constructor que inicialice los atributos. Debe establecer "Taladro" como nombre de herramienta.
Métodos getters y setters para los atributos de potencia.
mostrarInformacion() → Imprime los detalles de la herramienta e indica la potencia del taladro.*/

class Taladro : public Herramienta
{
protected:
    float _potencia;

public:
    Taladro(string nombre, float peso, float longitud);

    float getPotencia();
    void setPotencia(float potencia);

    void mostrarInformacion();
};

