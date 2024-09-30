#include <iostream>
#include <cstring>
#include <string.h>
#include <iomanip>

using namespace std;
#include "Pais.h"
#include "Ciudad.h"


/*1 - Agregar una función global que busque un registro de país a partir de su código.
La función debe poder devolver si el registro existe o no.

2 - Agregar una función global que permita agregar un registro de País al archivo de países.
*/

///P1
int buscarRegistro(char *codigo)
{

    FILE *pFile;

    Pais pais;

    int pos = 0;

    pFile = fopen("paises.dat", "rb");
    if(pFile == nullptr)
    {
        return -1;
    }
    while(fread(&pais, sizeof(Pais), 1, pFile)==1)
    {

        if(strcmp(pais.getCodigo(), codigo) == 0)
        {
            break;
        }
    }
    fclose(pFile);

    if(strcmp(pais.getCodigo(), codigo) == 0)
    {
        cout << "Pais: " << endl;

        pais.mostrar();

        return 0;
    }
    else
    {
        return -1;
    }
}

///P2
bool agregarRegistro(const Pais &pais)
{
    bool resultado;
    FILE *pFile;

    pFile = fopen("paises.dat", "ab");
    if(pFile == nullptr)
    {
        return false;
    }

    resultado = fwrite(&pais, sizeof(Pais), 1, pFile) == 1;

    fclose(pFile);

    return resultado;
}

Pais cargarPais()
{
    char codigo[4], codigo2[3], nombre[45], continente[20];
    float superficie, expectativaDeVida;
    int poblacion, capital;
    short independencia;

    cout << "Codigo: " << endl;
    cin >> codigo;

    cout << "Codigo2: " << endl;
    cin >> codigo2;

    cout << "Nombre: " << endl;
    cin >> nombre;

    cout << "Continente: " << endl;
    cin >> continente;

    cout << "Superficie: " << endl;
    cin >> superficie;

    cout << "Expectatica de vida: " << endl;
    cin >> expectativaDeVida;

    cout << "Poblacion: " << endl;
    cin >> poblacion;

    cout << "Capital: " << endl;
    cin >> capital;

    cout << "Independencia: " << endl;
    cin >> independencia;

    return Pais(codigo, codigo2, nombre, continente, superficie, poblacion, independencia, expectativaDeVida, capital);
}

///P3
void listarTodosPaises()
{

    Pais pais;

    FILE *pFile;

    pFile = fopen("paises.dat", "rb");
    if(pFile==nullptr)
    {
        exit;
    }

    while(fread(&pais, sizeof(Pais), 1, pFile) == 1)
    {
        pais.mostrar();
        cout << "-----------------------------------------------------------------------------------" << endl;
    }
    fclose(pFile);
}


///P4
void listarCiudades()
{
    Ciudad ciudad;

    FILE *pFile;

    pFile = fopen("ciudades.dat", "rb");
    if(pFile==nullptr)
    {
        exit;
    }

    while(fread(&ciudad, sizeof(Ciudad), 1, pFile) == 1)
    {
        cout << endl;
        ciudad.mostrar();
    }
    fclose(pFile);
}

///P4-1
void buscarPorCodigo(char *codigo)
{

    FILE *pFile;

    Ciudad ciudad;

    pFile = fopen("ciudades.dat", "rb");

    if(pFile == nullptr)
    {
        exit;
    }
    while(fread(&ciudad, sizeof(Ciudad), 1, pFile)==1)
    {

        if(strcmp(ciudad.getIDPais(), codigo) == 0)
        {
            cout << endl;
            cout << "Ciudad: " << ciudad.getNombre() << endl;
            cout << "Poblacion: " << ciudad.getPoblacion() << endl;
        }
    }
    fclose(pFile);

}

///P4-2
int buscarCapital(char *codigo)
{
    FILE *pFile;

    Pais pais;

    int capital = -1;

    pFile = fopen("paises.dat", "rb");
    if(pFile == nullptr)
    {
        return -1;
    }
    while(fread(&pais, sizeof(Pais), 1, pFile)==1)
    {

        if(strcmp(pais.getCodigo(), codigo) == 0)
        {
            capital = pais.getIDCapital();
            break;
        }
    }
    fclose(pFile);

    return capital;
}

///P4-3
void mostrarCapital(int ID)
{
    Ciudad ciudad;

    FILE *pFile;

    pFile = fopen("ciudades.dat", "rb");
    if(pFile==nullptr)
    {
        exit;
    }

    while(fread(&ciudad, sizeof(Ciudad), 1, pFile) == 1)
    {
        if(ciudad.getID() == ID)
        {
            cout << endl;
            cout << "------------------------------------" << endl;
            cout << "Capital: " << ciudad.getNombre() << endl;
        }
    }
    fclose(pFile);
}

///P5
void listarPaises()
{
    float supPlaneta = 5101000;
    float porAux;
    float porcentaje;
    Pais pais;

    FILE *pFile;

    pFile = fopen("paises.dat", "rb");
    if(pFile==nullptr)
    {
        exit;
    }

    while(fread(&pais, sizeof(Pais), 1, pFile) == 1)
    {
        cout << "--------------------------------------------------------------" << endl;
        cout << "Pais: " << pais.getNombre() << " superficie: " << pais.getSuperficie() << endl;
        porAux = pais.getSuperficie();
        porcentaje = (porAux * 100) / supPlaneta;

        cout << fixed << setprecision(2);
        cout << "Porcentaje de su superficie a nivel mundial: " << porcentaje << "%" << endl;
        cout << endl;

    }
    fclose(pFile);
}

void mostrarMenu();

int main()
{
    mostrarMenu();

    return 0;
}

void mostrarMenu()
{
    char codigo[4];
    Pais pais;

    int IDcapital, cod;

    int op;

    do
    {
        system("cls");
        cout << "---------------------MENU--------------------" << endl;
        cout << endl;
        cout << "1- BUSCAR PAIS POR CODIGO" << endl;
        cout << "2- AGREGAR NUEVO REGISTRO PAIS" << endl;
        cout << "3- LISTAR TODOS LOS REGISTROS DE PAIS" << endl;
        cout << "4- LISTAR CIUDADES, POBLACION Y CAPITAL" << endl;
        cout << "5- LISTAR PAISES POR NOMBRE Y SUPERFICIE" << endl;
        cout << endl;
        cout << "0- SALIR" << endl;
        cin >> op;

        switch(op)
        {
        case 1:
            system("cls");
            cout << "Ingrese codigo: ";
            cin >> codigo;
            cod = buscarRegistro(codigo);

            if(cod == -1)
            {
                cout << "No encontrado!" << endl;
            }
            system("pause");
            break;
        case 2:
            system("cls");
            cout << "--------AGREGAR UN REGISTRO--------" << endl;
            cout << endl;
            pais = cargarPais();

            if(agregarRegistro(pais))
            {
                cout << endl;
                cout << "Agregado" << endl;
            }
            else
            {
                cout << "Error" << endl;
            }

            system("pause");
            break;
        case 3:
            system("cls");

            listarTodosPaises();

            system("pause");
            break;
        case 4:
            system("cls");

            cout << "Ingrese codigo: ";
            cin >> codigo;
            buscarPorCodigo(codigo);
            IDcapital = buscarCapital(codigo);
            mostrarCapital(IDcapital);

            system("pause");
            break;
        case 5:
            system("cls");

            listarPaises();

            system("pause");
            break;
        case 0:
            system("cls");
            cout << "ADIOS" << endl;
            break;
        }

    }
    while(op != 0);
}
