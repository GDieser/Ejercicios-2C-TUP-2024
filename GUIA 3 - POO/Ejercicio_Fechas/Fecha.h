#pragma once
#include <string>

using namespace std;

class Fecha
{
private:
    int _dia;
    int _mes;
    int _anio;

    void agregarDia();
    void restarDia();

    void setFecha();
    void validarFechas();

public:
    Fecha();
    Fecha(int dia, int mes, int anio);

    int getDia();
    int getMes();
    int getAnio();

    void agregarDias(int dias);

    string toString();

};
