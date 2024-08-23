#include <iostream>
using namespace std;

/*
Una fundación que se dedica a fomentar la adopción de mascotas dispone de los registros de adopciones del año 2024.
Por cada adopción que se haya efectuado se registró:
Mes de la adopción (entero entre 1 y 12)
Tipo de animal adoptado (entero entre 10 y 15)
Edad del adoptante responsable
Tipo de vivienda del adoptante responsable (entero entre 1 y 5)

La información no se encuentra agrupada ni ordenada bajo ningún criterio. Para indicar el fin de la carga de datos
se ingresa un mes de adopción igual a cero.

Se pide calcular e informar
El tipo de animal más adoptado en general.
El promedio de edad de los adoptantes de cada tipo de animal.
Por cada tipo de animal y tipo de vivienda la cantidad total de adopciones registradas.

Aclaración:
Los tipos de animales son:
10 - Perro, 11 - Gato, 12 - Conejo, 13 - Hurón, 14 - Caballo, 15 - Oveja

Los tipos de vivienda son:
1 - Casa, 2 - Departamento, 3 - Casa Quinta, 4 - Finca, 5 - Duplex


*/

void registrarDatos( int mes, int tipoAnimal, int edad, int tipoVivienda, int vecAnimal[2][6], int vecViviendas[5]);

int main ()
{

    int mes, tipoAnimal, edad, tipoVivienda, PA_Maximo = 0, PA_Tipo, promedio;

    int vecViviendas[5] {}, vecAnimal[2][6] {};

    registrarDatos(mes, tipoAnimal, edad, tipoVivienda, vecAnimal, vecViviendas);

    ///PA
    for(int x=0; x<6; x++)
    {
        if(vecAnimal[0][x] > PA_Maximo)
        {
            PA_Maximo = vecAnimal[0][x];
            PA_Tipo = x;
        }
    }

    cout << "Animal mas adopatado: " << endl;

    switch(PA_Tipo)
    {

    case 0:
        cout << "PERRO" << endl;
        break;
    case 1:
        cout << "GATO" << endl;
        break;
    case 2:
        cout << "CONEJO" << endl;
        break;
    case 3:
        cout << "HURON" << endl;
        break;
    case 4:
        cout << "CABALLO" << endl;
        break;
    case 5:
        cout << "OVEJA" << endl;
        break;
    }


    ///PB
    for(int y=0; y<6; y++)
    {
        if(vecAnimal[0][y] != 0)
        {
            switch(y)
            {

            case 0:
                promedio = (vecAnimal[1][y] / vecAnimal[0][y]);
                cout << "Promedio edad adoptantes: PERRO " << promedio << endl;
                break;
            case 1:
                promedio = (vecAnimal[1][y] / vecAnimal[0][y]);
                cout << "Promedio edad adoptantes: GATO " << promedio << endl;
                break;
            case 2:
                promedio = (vecAnimal[1][y] / vecAnimal[0][y]);
                cout << "Promedio edad adoptantes: CONEJO " << promedio << endl;
                break;
            case 3:
                promedio = (vecAnimal[1][y] / vecAnimal[0][y]);
                cout << "Promedio edad adoptantes: HURON " << promedio << endl;
                break;
            case 4:
                promedio = (vecAnimal[1][y] / vecAnimal[0][y]);
                cout << "Promedio edad adoptantes: CABALLO "<< promedio << endl;
                break;
            case 5:
                promedio = (vecAnimal[1][y] / vecAnimal[0][y]);
                cout << "Promedio edad adoptantes: OVEJA "<< promedio << endl;
                break;
            }
        }
    }

    ///PC

    cout << endl;
    cout << "Cantidad de adopciones por animal: " << endl;
    cout << endl;

    for(int i = 0; i<6; i++)
    {
        switch(i)
        {

        case 0:
            cout << "PERRO: " << endl;
            cout << vecAnimal[0][i] << endl;
            break;
        case 1:
            cout << "GATO: " << endl;
            cout << vecAnimal[0][i] << endl;
            break;
        case 2:
            cout << "CONEJO: " << endl;
            cout << vecAnimal[0][i] << endl;
            break;
        case 3:
            cout << "HURON: " << endl;
            cout << vecAnimal[0][i] << endl;
            break;
        case 4:
            cout << "CABALLO: " << endl;
            cout << vecAnimal[0][i] << endl;
            break;
        case 5:
            cout << "OVEJA: " << endl;
            cout << vecAnimal[0][i] << endl;
            break;
        }
    }

    cout << endl;
    cout << "Cantidad de adopciones por vivienda: " << endl;
    cout << endl;

    for(int z=0; z<5; z++)
    {
        switch(z)
        {

        case 0:
            cout << "CASA: " << endl;
            cout << vecViviendas[z] << endl;
            break;
        case 1:
            cout << "DTO: " << endl;
            cout << vecViviendas[z] << endl;
            break;
        case 2:
            cout << "QUINTA: " << endl;
            cout << vecViviendas[z] << endl;
            break;
        case 3:
            cout << "FINCA: " << endl;
            cout << vecViviendas[z] << endl;
            break;
        case 4:
            cout << "DUPLEX: " << endl;
            cout << vecViviendas[z] << endl;
            break;
        }
    }


    return 0;
}



void registrarDatos( int mes, int tipoAnimal, int edad, int tipoVivienda, int vecAnimal[2][6], int vecViviendas[5])
{

    cout << " Ingrese mes: " << endl;
    cin >> mes;

    while(mes != 0)
    {

        cout << " Ingrese tipo de Animal (10 a 15): " << endl;
        cin >> tipoAnimal;

        cout << " Ingrese edad del adoptante: " << endl;
        cin >> edad;

        cout << " Ingrese tipo de vivienda: " << endl;
        cin >> tipoVivienda;

        vecAnimal[0][tipoAnimal-10]++;
        vecAnimal[1][tipoAnimal-10]+= edad;

        vecViviendas[tipoVivienda-1]++;


        cout << " Ingrese mes: " << endl;
        cin >> mes;
    }
}
