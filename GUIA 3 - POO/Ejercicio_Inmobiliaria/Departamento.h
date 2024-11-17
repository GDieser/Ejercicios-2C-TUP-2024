#pragma once

#include "Duenio.h"
#include "Inmueble.h"

using namespace std;

class Departamento : public Inmueble
{
private:

    char _piso[3];
    char _departamento[3];
    float _superficieTotal;
    float _superficieCubierta;
    int _habitaciones;
    float _superficieBalcon;
    bool _cochera;
    float _expensa;

    Duenio objDuenio;

public:
    Departamento();
    Departamento(string piso, string departamento, float superficieTotal, float superficieCubierta, int habitaciones, float superficieBalcon, bool cochera, float expensa, int codInmueble, int antiguedad, float precioVenta, float precioAlquiler, string calle, string numero, string localidad);

    string getPiso();
    string getDepartamento();
    float getSuperficieTotal();
    float getSuperficieCubierta();
    int getHabitaciones();
    float getSuperficieBalcon();
    bool getCochera();
    float getExpensa();


    void setPiso(string piso);
    void setDepartamento(string departamento);
    void setSuperficieTotal(float superficieTotal);
    void setSuperficieCubierta(float superficieCubierta);
    void setHabitaciones(int habitaciones);
    void setSuperficieBalcon(float superficieBalcon);
    void setCochera(bool cochera);
    void setExpensa(float expensa);

    void cargarDuenio(string nombre, string apellido, string dni, string celular);

};

