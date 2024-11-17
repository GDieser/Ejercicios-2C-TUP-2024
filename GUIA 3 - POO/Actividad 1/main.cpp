#include <iostream>
#include "Herramienta.h"

#include "Martillo.h"

using namespace std;

/*

Estás desarrollando un sistema para gestionar un inventario de herramientas en un taller.
Cada herramienta tiene características comunes, pero algunas herramientas tienen atributos y
comportamientos específicos.
Crea las siguientes clases:

Herramienta (clase base):
Atributos: nombre (string), peso (float, en kg), longitud (float, en cm)
Métodos:
Constructor que inicialice los atributos de peso y longitud. El nombre queda vacío.
Métodos getters y setters para los atributos de peso y longitud.
mostrarInformacion() → Imprime el nombre de la herramienta, el peso y la longitud.

longitud.
Martillo (hereda de Herramienta):
Atributos: tipoCabeza (string, por ejemplo: "plana", "de bola").
Métodos:
Constructor que inicialice los atributos. Debe establecer "Martillo" como nombre de la herramienta.
Métodos getters y setters para los atributos de peso y longitud.
mostrarInformacion() → Imprime los detalles de la herramienta e indica el tipo de cabeza del martillo.

Destornillador (hereda de Herramienta):
Atributos: tipoPunta (string, por ejemplo: "plana", "estrella").
Métodos:
Constructor que inicialice los atributos. Debe establecer "Destornillador" como nombre de herramienta.
Métodos getters y setters para los atributos de peso y longitud.
mostrarInformacion() → Imprime los detalles de la herramienta e indica el tipo de punta del destornillador.

Taladro (hereda de Herramienta):
Atributos: potencia (float, en watts).
Métodos:
Constructor que inicialice los atributos. Debe establecer "Taladro" como nombre de herramienta.
Métodos getters y setters para los atributos de peso y longitud.
mostrarInformacion() → Imprime los detalles de la herramienta e indica la potencia del taladro.
*/

int main()
{
    float peso, longitud;
/*
    cin >> peso;
    cout << endl;
    cin >> longitud;
*/

    Herramienta objHer(50.5, 120.5);

    objHer.mostrarInformacion();

    return 0;
}
