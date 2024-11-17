#include <iostream>
#include "header.h"

/*

Crea una clase llamada Rectangulo que represente un rect�ngulo. La clase debe
tener dos atributos correspondientes a la base y altura. Implementa las siguientes metodos:

Getters y Setter de cada atributo.
calcularArea(): Devuelve el �rea del rect�ngulo.
calcularPerimetro(): Devuelve el per�metro del rect�ngulo.

*/

using namespace std;

int main()
{

    int base, altura;

    cout << "Altura: " << endl;
    cin >> altura;

    cout << "Base: " << endl;
    cin >> base;

    Rectangulo r1(base, altura);

    cout << "Area: " << r1.calcularArea() << endl;

    cout << "Perimetro: " << r1.calcularPerimetro() << endl;

    return 0;
}
