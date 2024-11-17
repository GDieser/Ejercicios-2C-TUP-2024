#include <iostream>
#include <cmath>
#include "Punto.h"


using namespace std;

Punto::Punto(){}

Punto::Punto(float xInicial, float yInicial)
{
    _x = xInicial;
    _y = yInicial;
}

void Punto::setY_Inicial()
{
    cout << "Set Y: ";
    cin >> _y;
}

float Punto::getY_Inicial() {return _y;}

void Punto::setX_Inicial()
{
    cout << "Set X: ";
    cin >> _x;
}

float Punto::getX_Inicial() {return _x;}

float Punto::calcularDistancia(Punto otroPunto)
{
    float aux_X;
    float aux_Y;
    float distancia;

    otroPunto.setX_Inicial();
    otroPunto.setY_Inicial();

    aux_X = otroPunto.getX_Inicial();
    aux_Y = otroPunto.getY_Inicial();

    distancia = sqrt((aux_X - _x)*(aux_X - _x) + (aux_Y - _y)*(aux_Y - _y));

    return distancia;
}

void Punto::mover(float deltaX, float deltaY)
{
    _x += deltaX;
    _y += deltaY;
}


