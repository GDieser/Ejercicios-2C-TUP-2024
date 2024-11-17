#include <iostream>
#include "Termometro.h"

/*
Crea una clase llamada Termometro que represente un termómetro digital.

La clase debe contener los siguientes atributos:
temperatura (float): Almacena la temperatura actual medida por el termómetro.
unidad (char): Almacena la unidad de medida de la temperatura ('C' para Celsius, 'F' para Fahrenheit).

Implementa los siguientes métodos:

Termometro(float tempInicial, char unidadInicial): Constructor que inicializa la temperatura y la unidad de medida.
get y set de temperatura.

cambiarUnidad(char nuevaUnidad): Cambia la unidad de medida entre Celsius y Fahrenheit.

Si la nueva unidad es diferente de la actual, convierte la temperatura a la nueva unidad.
Fórmula de conversión de Celsius a Fahrenheit: (C * 9/5) + 32
Fórmula de conversión de Fahrenheit a Celsius: (F - 32) * 5/9
getUnidad(): Devuelve la unidad actual de medida.
*/


using namespace std;

void iniciarTamperatura(Termometro objTem);

int main()
{
    //Termometro objTem;

    float temperatura;
    char unidad;

    cout << "Ingrese temperatura: ";
    cin >> temperatura;

    cout << "Ingrese unidad de mediad: ";
    cin >> unidad;

    Termometro objTem(temperatura, unidad);

    objTem.setTemperatura(temperatura);

    cout << objTem.getTemperatura() << endl;

    cout << objTem.getUnidad() << endl;

    cout << "Cambiar unidad: " ;
    cin >> unidad;

    objTem.cambiarUnidad(unidad);

    cout << objTem.getTemperatura() << endl;

    cout << objTem.getUnidad();

    return 0;
}


void iniciarTamperatura(Termometro objTem)
{

}
