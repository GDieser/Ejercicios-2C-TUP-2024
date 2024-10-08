#pragma once

using namespace std;


class Fecha
{
protected:

    int _dia;
    int _mes;
    int _anio;


public:

    Fecha();
    Fecha(int d, int m, int a);

    void CargarFecha();
    void Mostrar(void);

    void setDia(int dia);
    void setMes(const int m);
    void setAnio(int a);

    int getDia();
    int getMes();
    int getAnio();

    void establecerFechaPorDefecto();
};
