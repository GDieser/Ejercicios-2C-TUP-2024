#pragma once

using namespace std;

class Termometro
{
private:
    float _temperatura;
    char _unidad;

public:
    Termometro();
    Termometro(float tempInicial, char unidadInicial);

    float getTemperatura();
    void setTemperatura(float temp);
    void cambiarUnidad(char nuevaUnnidad);
    char getUnidad();
};


