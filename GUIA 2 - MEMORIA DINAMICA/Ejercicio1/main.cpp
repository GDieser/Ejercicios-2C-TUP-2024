#include <iostream>
#include <ctime>
#include <iomanip>

/*Cargar las notas del primer parcial de los 78 estudiantes de un curso.
Luego de cargar todas las notas:
- Pedir un número y mostrar por pantalla la nota registrada. Por ejemplo,
se ingresa 10 para mostrar el décimo examen.
- Listar cuántos estudiantes obtuvieron una nota mayor al promedio.*/


using namespace std;

int main()
{
    srand(time(NULL));

    const int tam = 78;
    float promedio = 0;
    int num;


    int vectNotas[tam]{};

    for(int i=0; i<tam; i++)
    {
        vectNotas[i] = (rand()%10+1);
    }

    ///Promedio
    for(int i=0; i<tam; i++)
    {
        promedio +=vectNotas[i];
    }

    promedio = promedio/tam;

    cout << "Ingrese un num: ";
    cin >> num;

    ///Nota:
    cout << "Nota: " << vectNotas[num-1] << endl;

    int cont = 0;

    for(int i=0; i<tam; i++)
    {
        if (vectNotas[i] > promedio)
        {
            cont++;
        }
    }

    cout << fixed << setprecision(2);
    cout << "Cantidad de notas superior al promedio: " << promedio << endl;
    cout << cont << endl;

    return 0;
}
