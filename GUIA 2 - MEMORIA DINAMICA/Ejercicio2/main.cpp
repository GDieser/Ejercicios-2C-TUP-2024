#include <iostream>

using namespace std;

int quitarRepetidos(int *vect1, int *&vect2);

int main()
{
    int vectorUno[10] = { 1, 2, 1, 2, 5, 5, 4, 4, 3, 3 };
    int *vectorDos, tam;

    tam = quitarRepetidos(vectorUno, vectorDos);

    cout << &vectorDos[0] << endl;
    system("pause");

    for(int i=0; i<tam; i++)
    {
        cout << vectorDos[i] << endl;
    }

    delete []vectorDos;

    return 0;
}

int quitarRepetidos(int *vect1, int *&vect2)
{
    int cont = 0;

    for(int i=0; i<10; i++)
    {
        for(int j=i+1; j<10; j++)
        {
            if(vect1[i] == vect1 [j] && vect1[i] != 0)
            {
                vect1[j] = 0;
                cont++;
            }
        }
    }


    vect2 = new int[cont];
    cont = 0;

    cout << &vect2[0] << endl;
    system("pause");

    for(int i=0; i<10; i++)
    {
        if(vect1[i] != 0)
        {
            vect2[cont] = vect1[i];
            cont++;
        }
    }

    return cont;
}

/*
int main()
{
    int vectorUno[10] = { 1, 2, 1, 2, 5, 5, 4, 4, 3, 3 };
    int *vectorDos, tam;

    tam = quitarRepetidos(vectorUno);

    vectorDos = new int[tam];

    tam = 0;

    for(int i=0; i<10; i++)
    {
        if(vectorUno[i] != 0)
        {
            vectorDos[tam] = vectorUno[i];
            tam++;
        }
    }

    for(int i=0; i<tam; i++)
    {
        cout << vectorDos[i] << endl;
    }

    delete []vectorDos;

    return 0;
}

int quitarRepetidos(int *vect1)
{
    int cont = 0;

    for(int i=0; i<10; i++)
    {
        for(int j=i+1; j<10; j++)
        {
            if(vect1[i] == vect1 [j] && vect1[i] != 0)
            {
                vect1[j] = 0;
                cont++;
            }
        }
    }

    return cont;
}*/
