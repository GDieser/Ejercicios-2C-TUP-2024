#pragma once

using namespace std;

class Inmueble
{
    protected:

    int _codInmueble;
    int _antiguedad;
    float _precioVenta;
    float _precioAlquiler;
    char _calle[50];
    char _numero[6];
    char _localidad[50];

    public:
        Inmueble();

        Inmueble(int codInmueble, int antiguedad, float precioVenta, float precioAlquiler, string calle, string numero, string localidad);

        int getCodigo();
        int getAntiguedad();
        float getPrecioVenta();
        float getPrecioAlquiler();
        string getCalle();
        string getNumero();
        string getLocalidad();

        void setCodigo(int codigo);
        void setAntiguedad(int antiguedad);
        void setPrecioVenta(float precioVenta);
        void setPrecioAlquiler(float precioAlquiler);
        void setCalle(string calle);
        void setNumero(string numero);
        void setLocalidad(string localidad);

};
