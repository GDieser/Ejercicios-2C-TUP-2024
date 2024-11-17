#pragma once

/*Herramienta (clase base):
Atributos: nombre (string), peso (float, en kg), longitud (float, en cm)
Métodos:
Constructor que inicialice los atributos de peso y longitud. El nombre queda vacío.
Métodos getters y setters para los atributos de peso y longitud.
mostrarInformacion() → Imprime el nombre de la herramienta, el peso y la longitud.*/

using namespace std;

class Herramienta
{
    protected:
        string _nombre;
        float _peso;
        float _longitud;

    public:
        //Herramienta();
        Herramienta(float peso, float longitud);

        float getPeso();
        void setPeso();

        float getLongitud();
        void setLongitud();

        void mostrarInformacion();

};


