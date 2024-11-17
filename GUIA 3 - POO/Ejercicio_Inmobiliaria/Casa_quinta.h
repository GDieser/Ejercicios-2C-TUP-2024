#pragma once

#include "Duenio.h"
#include "Inmueble.h"

using namespace std;

class Casa_quinta : public Inmueble
{
private:

    float _superficieTotal;
    float _superficieCubierta;
    bool _pileta;
    bool _quincho;
    int _habitaciones;

    Duenio objDuenio;

public:
    Casa_quinta();
    Casa_quinta(float superficieTotal, float superficieCubierta, bool pileta, bool quincho, int habitaciones, int codInmueble, int antiguedad, float precioVenta, float precioAlquiler, string calle, string numero, string localidad);


    float getSuperficieTotal();
    float getSuperficieCubierta();
    bool getPileta();
    bool getQuincho();
    int getHabitaciones();

    void setSuperficieTotal(float superficieTotal);
    void setSuperficieCubierta(float superficieCubierta);
    void setPileta(bool pileta);
    void setQuincho(bool quincho);
    void setHabitaciones(int habitacione);

    void cargarDuenio(string nombre, string apellido, string dni, string celular);

};

