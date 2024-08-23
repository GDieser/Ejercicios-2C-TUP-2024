#include <iostream>
#include <ctime>

/*Hacer una función llamada quitarRepetidos que reciba dos vectores de enteros de 10
elementos llamados vectorSinProcesar y vectorSinRepetidos. La función debe procesar el
vectorSinProcesar de manera que en el vectorSinRepetidos queden todos los elementos
distintos del vectorSinProcesar. La función debe devolver la cantidad de elementos
asignados a vectorSinRepetidos.

Ejemplo:
vectorUno[10] = { 1, 2, 1, 2, 5, 5, 4, 4, 3, 3 }
vectorDos[10];
int elementos = quitarRepetidos(vectorUno, vectorDos);

En elementos debe quedar el valor 5 ya que son 5 los elementos sin repetirse del vector.
Además el vectorDos debe contener los valores 1, 2, 5, 4 y 3.
*/

using namespace std;

int quitarRepetidos(int vectorUno[], int tam1, int vectorDos[], int tam2);

int main ()
{

    srand(time(0));


    int const tam = 10;

    int vectorSinProcesar[tam] {}, vectorSinRepetidos[tam] {};
    int elementos;

    for(int i = 0; i < tam; i++)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> vectorSinProcesar[i];
    }

    elementos = quitarRepetidos(vectorSinProcesar, tam, vectorSinRepetidos, tam);

    cout << "Cantidad de elementos repetidos: " << elementos << endl;

    return 0;
}


int quitarRepetidos(int vectorUno[], int tam1, int vectorDos[], int tam2)
{

    int elementos = 0, cont = 0;
    int repetido = 0;

    for(int i = 0; i < tam1; i++)
    {
        cont = 0;

        for(int f=0; f<tam1; f++)
        {
            if(vectorUno[i] == vectorUno[f])
            {
                cont++;
            }
        }

        if(cont > 1)
        {
            for(int x = 0; x < tam1; x++)
            {
                if(vectorUno[i] == vectorDos[x])
                {
                    repetido++;
                }
            }

            if(repetido == 0)
            {
                vectorDos[elementos] = vectorUno[i];
                elementos++;
            }
        }
        repetido = 0;

    }

    return elementos;
}
