#include <iostream>
using namespace std;

/*
Hacer un programa que solicite al usuario 10 números y luego muestre primero los números positivos y luego los negativos.
El programa debe crear dos arrays dinámicos con la cantidad exacta en cada caso: uno para almacenar los números positivos y
otro para los números negativos.

*/

int main ()
{

    int vecUsuario[10];
    int contPos = 0, contNeg = 0, tamPos, tamNeg;
    int *vecPositivo, *vecNegativo;

    for(int x=0; x<10; x++)
    {
        cout << "Ingrese numero: ";
        cin >> vecUsuario[x];

        if(vecUsuario[x] >= 0)
        {
            contPos++;
        }
        else
        {
            contNeg++;
        }
    }

    vecPositivo = new int[contPos];
    vecNegativo = new int[contNeg];

    tamPos = contPos;
    tamNeg = contNeg;

    contNeg--;
    contPos--;

    for(int y=0; y<10; y++)
    {
        if(vecUsuario[y] >= 0)
        {
            vecPositivo[contPos--] = vecUsuario[y];
        }
        else
        {
            vecNegativo[contNeg--] = vecUsuario[y];
        }
    }


    cout << endl;
    cout << "---Positivos: " << endl;

    for(int i= 0; i < tamPos; i++)
    {

        cout << vecPositivo[i] << endl;;
    }

    cout << endl;
    cout << "---Negativos: " << endl;

    for(int i= 0; i < tamNeg; i++)
    {

        cout << vecNegativo[i] << endl;;
    }

    delete []vecNegativo;
    delete []vecPositivo;


    return 0;
}
