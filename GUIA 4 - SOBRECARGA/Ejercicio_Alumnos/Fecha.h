#pragma once


class Fecha
{

public:
    Fecha();
    Fecha(const int d, const int m, const int a);

    void Cargar();
    void Mostrar(void);
    ///setter
    void setDia(int dia);
    void setMes(const int m);
    void setAnio(int a);
    ///getter
    int getDia();
    int getMes();
    int getAnio();

private:

    int _dia;
    int _mes;
    int _anio;
};


