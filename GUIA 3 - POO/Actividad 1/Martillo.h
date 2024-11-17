#pragma once
#include <string>
#include "Herramienta.h"


using namespace std;

class Martillo: public Herramienta
{
private:

    string _tipoCabeza;

public:

    //Martillo();
    Martillo(string tipoCabeza, float peso, float longitud);

    ///Getter
    float getPeso();
    float getLongitud();

    ///Setter
    void setPeso(float peso);
    void setLongitud(float longitud);
    void setNombre();

    void mostrarInformacion();

};


