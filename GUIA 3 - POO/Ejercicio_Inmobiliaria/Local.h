#pragma once

#include "Duenio.h"
#include "Inmueble.h"

using namespace std;

class Local : public Duenio, public Inmueble
{
private:

    float _superficieTotal;
    float _superficieEstacionamiento;
    bool _zonaComercial;

    Duenio objDuenio;

public:
    Local();
    Local(float superficieTotal, float superficieEstacionamiento, bool zonaComercial, int codInmueble, int antiguedad, float precioVenta, float precioAlquiler, string calle, string numero, string localidad);

    float getSuperficieTotal();
    float getSuperficieEstacionamiento();
    bool getZonaComercial();

    void setSuperficieTotal(float superficieTotal);
    void setSuperficieEstacionamiento(float superficieEstacionamiento);
    void setZonaComercial(bool zonaComercial);

    void cargarDuenio(string nombre, string apellido, string dni, string celular);
};


