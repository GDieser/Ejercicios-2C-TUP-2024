#include <iostream>
#include <ctime>

using namespace std;

/*Cargar las notas del primer parcial de los 78 estudiantes de un curso.
Luego de cargar todas las notas:

- Pedir un número y mostrar por pantalla la nota registrada. Por ejemplo,
se ingresa 10 para mostrar el décimo examen.
- Listar cuántos estudiantes obtuvieron una nota mayor al promedio*/

void cargarNotas(int vecNotas[], int tam, float &promedio);

int contarPromedios(int vecNotas[], int tam, float promedio);

int main (){

    srand(time(0));

    int const tam = 78;
    int parcialEstudiantes[tam]{};
    int consulta, contador;

    float promedio = 0;

    cargarNotas(parcialEstudiantes, tam, promedio);

    cout << "Ingrese un numero para consultar nota: ";
    cin >> consulta;

    cout << endl;

    cout << "-- Nota: " << parcialEstudiantes[consulta] << endl;

    contador = contarPromedios(parcialEstudiantes, tam, promedio);

    cout << endl;

    cout << "Cantidad de estudiantes que superaron la nota promedio: " << contador << endl;


	return 0;
}


void cargarNotas(int vecNotas[], int tam, float &promedio)
{
    int randNotas;

    for(int i = 0; i < tam; i++)
    {
        randNotas = rand() % 10 + 1;

        vecNotas[i] = randNotas;

        promedio += randNotas;
    }

    promedio = promedio / tam;
}

int contarPromedios(int vecNotas[], int tam, float promedio)
{
    int contPromedio = 0;

    for(int i = 0; i < tam ; i++)
    {
        if(vecNotas[i] > promedio)
        {
            contPromedio++;
        }
    }

    return contPromedio;
}
