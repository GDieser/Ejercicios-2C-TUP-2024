#include <iostream>
#include <ctime>
using namespace std;

/*
Escribe un programa que solicite al usuario el tamaño de un array de enteros, lo cree dinámicamente
utilizando new, el usuario debe poder cargar el array y mostrarlo, y luego libere la memoria con delete
*/

int main (){

    srand(time(0));

    int *vectorPrueba, tam = 0;

    cout << "Ingrese tamaño del array: " << endl;
    cin >> tam;

    vectorPrueba = new int[tam];

    if(vectorPrueba == nullptr)
    {
        cout << "Error al asignar memoria" << endl;
        ///exit (-1)  <--- de c++
        return -1;
    }

    cout << endl;

    for(int x=0; x<tam; x++)
    {
        vectorPrueba[x] = (rand() % 10+1);
    }

    cout << endl;
    for(int y=0; y<tam; y++)
    {

        cout << "#" << y+1 << ": " << vectorPrueba[y] << endl;
    }


    delete []vectorPrueba;

	return 0;
}
