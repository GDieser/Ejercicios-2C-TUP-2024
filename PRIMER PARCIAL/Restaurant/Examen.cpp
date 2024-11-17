#include <iostream>
using namespace std;

#include "Examen.h"
#include "ServicioMesa.h"
#include "ArchivoServicioMesa.h"

void Examen::EjemploDeListado()
{
    ArchivoServicioMesa archivo("restaurant.dat");
    ServicioMesa registro;

    int i, cantidadRegistros = archivo.CantidadRegistros();
    for(i = 0; i < cantidadRegistros; i++)
    {
        registro = archivo.Leer(i);
        cout << registro.toCSV() << endl;
    }
}

void Examen::Punto1()
{
    system("cls");
    const int tam = 20;
    int cantidadRegistros;
    int vectMozosPropinas[tam] = {};

    int contMozosSinPropinas = 0;

    ArchivoServicioMesa archivo("restaurant.dat");

    ServicioMesa registro;

    cantidadRegistros = archivo.CantidadRegistros();

    for(int i = 0; i < cantidadRegistros; i++)
    {
        registro = archivo.Leer(i);

        if(registro.getPropina() == 0)
        {
            vectMozosPropinas[registro.getIDMozo()-1]++;
        }
    }

    for(int i=0; i<tam; i++)
    {
        if(vectMozosPropinas[i] > 0)
        {
            contMozosSinPropinas++;
        }
    }

    cout << "Cantidad de mozos sin propinas (al menos 1 vez): " << contMozosSinPropinas << endl;
    system("pause");

}

void Examen::Punto2()
{
    system("cls");
    const int tam = 20;
    int cantidadRegistros;
    int vectMozos[tam] = {};


    ArchivoServicioMesa archivo("restaurant.dat");

    ServicioMesa registro;

    cantidadRegistros = archivo.CantidadRegistros();

    for(int i = 0; i < cantidadRegistros; i++)
    {
        registro = archivo.Leer(i);

        if(registro.getPuntajeObtenido() == 10 || registro.getPuntajeObtenido() == 1)
        {
            vectMozos[registro.getIDMozo()-1]++;
        }
    }

    for(int i=0; i<tam; i++)
    {
        if(vectMozos[i] == 0)
        {
            cout << "Mozo #" << i+1 << endl;
        }
    }
    system("pause");

}

void Examen::Punto3()
{
    system("cls");
    const int tam = 70;
    int cantidadRegistros;
    int vectPlatos2023[tam] = {};
    int vectPlatos2024[tam] = {};

    ArchivoServicioMesa archivo("restaurant.dat");

    ServicioMesa registro;

    cantidadRegistros = archivo.CantidadRegistros();

    for(int i = 0; i < cantidadRegistros; i++)
    {
        registro = archivo.Leer(i);

        if(registro.getFecha().getAnio() == 2023)
        {
            vectPlatos2023[registro.getIDPlato()-1]++;
        }

        if(registro.getFecha().getAnio() == 2024)
        {
            vectPlatos2024[registro.getIDPlato()-1]++;
        }
    }

    for (int i = 0; i < tam; i++)
    {
        if(vectPlatos2024[i] > vectPlatos2023[i])
        {
            cout << "Se vendio mas en 2024 que en 2023: " << i+1 << endl;
        }
    }
    system("pause");

}
