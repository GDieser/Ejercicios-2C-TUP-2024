#pragma once

using namespace std;

class Punto
{
private:
    float _x;
    float _y;

public:
    Punto();
    Punto(float xInicial, float yInicial);

    void setY_Inicial();
    float getY_Inicial();
    void setX_Inicial();
    float getX_Inicial();

    float calcularDistancia(Punto otroPunto);

    void mover(float deltaX, float deltaY);

};

