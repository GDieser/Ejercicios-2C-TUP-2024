#include <iostream>
#include <ctime>

using namespace std;

/*1- Cargar Vector: El programa debe solicitar al usuario la cantidad de elementos que va a cargar,
posteriormente se solicitara cuales son dichos números para almacenarlos en un vector utilizando asignación
dinámica de memoria.
2- Mostrar Vector: En caso de tener cargado el vector, debe mostrarlo por pantalla.
3- Salir: Sale del programa (no olvidar liberar la memoria)
Pista: Recordar que se puede inicializar un puntero con el valor nullptr
*/

void mostrarMenu();

int cargarVector(int *&vect);

void mostrarVector(int *vect, int tam);

int main()
{
    srand(time(NULL));

    mostrarMenu();

    return 0;
}

void mostrarMenu()
{
    int op;
    int *vect;
    int tam;

    do
    {

        system("cls");
        cout << "1- Cargar vector: " << endl;
        cout << "2- Mostrar vector: " << endl;
        cout << "3- Salir: " << endl;
        cin >> op;

        switch(op)
        {
        case 1:
            system("cls");
            tam = cargarVector(vect);
            system("pause");
            break;
        case 2:
            system("cls");
            mostrarVector(vect, tam);
            system("pause");
            break;
        case 3:
            system("cls");
            cout << "Adios!" << endl;
            break;
        }
    }
    while(op != 3);

    delete []vect;

}

int cargarVector(int *&vect)
{
    int tam;

    cout << "Tamanio: " << endl;
    cin >> tam;

    vect = new int [tam];

    for(int i=0; i<tam; i++)
    {
        vect[i] = rand()%99;
    }

    return tam;
}

void mostrarVector(int *vect, int tam)
{
    for(int i=0; i<tam; i++)
    {
        cout << "Num: " << vect[i] << endl;
    }
}
