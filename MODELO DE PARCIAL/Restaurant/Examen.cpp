#include <iostream>
using namespace std;

#include "Examen.h"
#include "ServicioMesa.h"
#include "ArchivoServicioMesa.h"

/*void Examen::EjemploDeListado(){
   ArchivoServicioMesa archivo("restaurant.dat");
   ServicioMesa registro;

   int i, cantidadRegistros = archivo.CantidadRegistros();
   for(i = 0; i < cantidadRegistros; i++){
      registro = archivo.Leer(i);
      cout << registro.toCSV() << endl;
   }
}*/

void Examen::Punto1()
{

    ArchivoServicioMesa archivo("restaurant.dat");
    ServicioMesa registro;

    float puntaje, promedio = 0;
    int contMayor = 0, conPuntaje = 0;

    int i, cantidadRegistros = archivo.CantidadRegistros();
    for(i = 0; i < cantidadRegistros; i++)
    {
        registro = archivo.Leer(i);
        puntaje = registro.getPuntajeObtenido();
        promedio += puntaje;
        conPuntaje++;
    }

    promedio = promedio/conPuntaje;

    for(i = 0; i < cantidadRegistros; i++)
    {
        registro = archivo.Leer(i);
        puntaje = registro.getPuntajeObtenido();

        if(puntaje > promedio)
        {
            contMayor++;
        }

    }
    system("cls");
    cout << "Mayor al promedio: " << contMayor << endl;;
    cout << "Cantidad de Registros de puntajes: " << conPuntaje << endl;
    cout << "Promedio: " << promedio << endl;
    system("pause");

}

void Examen::Punto2()
{
    system("cls");
    ArchivoServicioMesa archivo("restaurant.dat");
    ServicioMesa registro;

    const int tam = 70;
    int vectID[tam] {};
    int vectValor[tam] {};
    int id;
    int numMax = 0, numPlato;

    int i, cantidadRegistros = archivo.CantidadRegistros();
    for(i = 0; i < cantidadRegistros; i++)
    {
        registro = archivo.Leer(i);
        id = registro.getIDPlato();

        vectID[id-1]++;
        vectValor[id-1] += registro.getImporte();

    }

    for(i = 0; i < tam; i++)
    {
        if(vectValor[i] > numMax)
        {
            numMax = vectValor[i];
            numPlato = i+1;
        }
    }

    cout << "Valor maximo: " << numMax << " ID#: " << numPlato << endl;


    system("pause");
}

void Examen::Punto3()
{
    system("cls");

    ArchivoServicioMesa archivo("restaurant.dat");
    ServicioMesa registro;

    Fecha fecha;

    const int tam = 20;
    int vectMozo[tam]{};
    int vectRec[tam]{};
    int id, cont = 0;

    int i, cantidadRegistros = archivo.CantidadRegistros();
    for(i = 0; i < cantidadRegistros; i++)
    {
        registro = archivo.Leer(i);
        fecha = registro.getFecha();
        id = registro.getIDMozo();

        if(fecha.getAnio() == 2024)
        {
            ///Para poder determinar que un servicio de mesa ha tenido una propina se debe verificar que el
            ///valor de la misma sea mayor a 0. Si la propina es cero entonces ese servicio de mesa no ha recibido propina.
            if(registro.getPropina() > 0)
            {
                vectMozo[id-1] += registro.getPropina();
            }
        }
    }

    int maxProp = 0, num;
    for(i = 0; i < tam; i++)
    {
        if(vectMozo[i] > maxProp)
        {
            maxProp = vectMozo[i];
            num = i+1;
        }
    }

    cout << "Mozo con mayor recaudacion 2024: " << num << endl;


    system("pause");
}
