#include <iostream>
using namespace std;

/*
Hacer una función que reciba un vector de enteros y su tamaño y luego muestre el vector ordenado de forma ascendente,
tener en cuenta que el vector enviado como argumento no debe ser modificado.
*/

void ordenarVector(int vec[], int tam1, int vec2[], int tam2);

int main ()
{

    int vec[10], vec2[2];

    for(int i=0; i<10; i++)
    {
        cin >> vec[i];
    }

    ordenarVector(vec, 10, vec2, 10);

    return 0;
}

void ordenarVector(int vec[], int tam1, int vec2[], int tam2)
{
    int auxiliar;

    for(int x=0; x<tam1; x++)
    {
        for(int y=x+1; y<tam1; y++)
        {
            if(vec[y] < vec[x])
            {
                vec2[x] = vec[y];
            }
        }
    }
}
