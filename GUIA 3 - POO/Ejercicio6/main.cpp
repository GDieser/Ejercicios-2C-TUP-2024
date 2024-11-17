#include <iostream>
#include <cmath>
#include "Punto.h"

/*
Crea una clase llamada Punto que represente un punto en un plano cartesiano.
La clase debe contener los siguientes atributos:
x (float): Almacena la coordenada en el eje X.
y (float): Almacena la coordenada en el eje Y.
Implementa los siguientes métodos públicos:
Punto(float xInicial, float yInicial): Constructor que inicializa las coordenadas
x y y del punto.
Getters y Setters para cada atributo.
calcularDistancia(Punto otroPunto): Devuelve la distancia entre el punto actual y
 otro punto dado. La fórmula para calcular la distancia entre dos puntos
 (x1, y1) y (x2, y2) es: sqrt((x2 - x1)^2 + (y2 - y1)^2).
mover(float deltaX, float deltaY): Mueve el punto sumando deltaX a x y deltaY a y.

*/

using namespace std;

int main()
{
    float distancia;

    Punto objPunto;
    Punto otroObjPunto;

    objPunto.setX_Inicial();
    objPunto.setY_Inicial();

    cout << objPunto.getX_Inicial() << endl;
    cout << objPunto.getY_Inicial() << endl;

    distancia = objPunto.calcularDistancia(otroObjPunto);

    cout << endl;
    cout << "Distancia: " << distancia << endl;

    cout << endl;
    objPunto.mover(2.0, 2.0);
    cout << "MOVER: " << endl;
    cout << objPunto.getX_Inicial() << endl;
    cout << objPunto.getY_Inicial() << endl;

    return 0;
}
