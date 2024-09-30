#include <iostream>
#include <ctime>
using namespace std;

/*
Hacer una función que reciba un vector de enteros y su tamaño y devuelva la cantidad de números distintos
que se repiten en el vector
*/

int mostrarNumerosDistintos( int vectNum[], int tam);

int main (){

    srand(time(0));


    int vectNum[20]{};
    int *vectRep, contadorRepetidos;

    for(int i=0; i<20; i++)
    {
        cin >> vectNum[i];
    }

    contadorRepetidos = mostrarNumerosDistintos(vectNum, 20);

    /*for(int x=0; x<20; x++)
    {
        cout << vectNum[x] << endl;
    }*/

    cout << "Contador totales: " << contadorRepetidos << endl;


	return 0;
}


int mostrarNumerosDistintos( int vectNum[], int tam)
{
    int vectAux[20]{};
    int contador = 0, contadorTotales = 0, contRep = 0;

    for(int x=0; x<20; x++)
    {
        contador = 0;

        for(int y=0; y<20; y++)
        {
            if(vectNum[x] == vectNum[y])
            {
                contador++;
            }
        }

        if(contador > 1)
        {
            for(int z=0; z<20; z++)
            {
                if(vectNum[x] == vectAux[z])
                {
                    contRep++;
                }
            }

            if(contRep == 0)
            {
                vectAux[contadorTotales] = vectNum[x];
                contadorTotales++;
            }
        }

        contRep=0;
    }

    return contadorTotales;
}
