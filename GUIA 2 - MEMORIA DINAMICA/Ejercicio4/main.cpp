#include <iostream>
#include <ctime>
using namespace std;
/*
Escribe un programa que solicite al usuario ingresar una lista de 10 n�meros enteros. Luego,
el programa debe mostrar los n�meros pares distintos que se ingresaron. Para resolver este ejercicio,
deber�s implementar una funci�n que reciba un vector de enteros y su tama�o, y que devuelva un puntero
a un vector din�mico que contenga solo los n�meros pares distintos del vector recibido.
*/

void cargarVector(int *vect);

void mostrarVector(int *vect, int tam);

int* devolverPares(int *vect, int &tam);

int main()
{
    srand(time(NULL));

    const int TAM = 10;
    int vect[TAM];
    int tam = 0;

    cargarVector(vect);

    mostrarVector(vect, TAM);

    int *vect2 = devolverPares(vect, tam);

    //vect2 = new int[tam];

    cout << "PARES: " << endl;

    mostrarVector(vect2, tam);

    delete []vect2;


    return 0;
}

void cargarVector(int *vect)
{
    for(int i=0; i<10; i++)
    {
        vect[i] = rand()%10+1;
    }
}

void mostrarVector(int *vect, int tam)
{
    for(int i=0; i<tam; i++)
    {
        cout << vect[i] << endl;
    }
}

int* devolverPares(int *vect, int &tam)
{
    int *vect2;
    for(int i=0; i<10; i++)
    {
        for(int j=i+1; j<10; j++)
        {
            if(vect[i]%2 == 0 && vect[i] != 0)
            {
                if(vect[i] == vect[j])
                {
                    vect[j] = 0;
                }
                tam++;
            }
        }
    }

    vect2 = new int[tam];
    tam = 0;

    for(int i=0; i<10; i++)
    {
        if(vect[i]%2 == 0 && vect[i] != 0)
        {
            vect2[tam] = vect[i];
            tam++;
        }
    }
    //delete []vect2;

    return vect2;
}
