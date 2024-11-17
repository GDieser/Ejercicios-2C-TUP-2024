#pragma once
#include "Taladro.h"

/*Utilizá la base de la Actividad 1 y agrega una nueva clase llamada TaladroPercutor que herede de Taladro.
Atributos: golpesPorMinuto (int, por ejemplo: 2500).
Métodos:
Constructor que inicialice los atributos. Debe establecer "Taladro percutor" como nombre de herramienta.
Métodos getters y setters para el atributo golpes por minuto.
mostrarInformacion() → Imprime los detalles de la herramienta, del taladro e indica el los golpes por minuto.*/


class TaladroPercutor : public Taladro
{
    private:
        int _golpesPorMinuto;

    public:
        TaladroPercutor(string nombre, float peso, float longitud);

        int getGolpesPorMinuto();
        void setGolpesPorMinuto(int golpes);

        void mostrarInformacion();
};

