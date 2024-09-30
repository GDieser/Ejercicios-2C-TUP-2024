#include <iostream>
#include <ctime>
using namespace std;

/*
Crear un programa que contenga un menú con las siguientes opciones:

1- Cargar Vector: El programa debe solicitar al usuario la cantidad de elementos que va a cargar,
posteriormente se solicitara cuales son dichos números para almacenarlos en un vector utilizando asignación
dinámica de memoria.
2- Mostrar Vector: En caso de tener cargado el vector, debe mostrarlo por pantalla.
3- Salir: Sale del programa (no olvidar liberar la memoria)

Pista: Recordar que se puede inicializar un puntero con el valor nullptr
*/

int main ()
{

    srand(time(0));

    int *vecCarga, tam = 0;

    cout << "Ingrese tamaño del array: " << endl;
    cin >> tam;

    vecCarga = new int[tam];

    if(vecCarga == nullptr)
    {
        cout << "Error al asignar memoria" << endl;
        ///exit (-1)  <--- de c++
        return -1;
    }

    cout << endl;

    for(int x=0; x<tam; x++)
    {
        vecCarga[x] = (rand() % 10+1);
    }

    cout << endl;
    for(int y=0; y<tam; y++)
    {

        cout << "#" << y+1 << ": " << vecCarga[y] << endl;
    }


    delete []vecCarga;

    return 0;
}
