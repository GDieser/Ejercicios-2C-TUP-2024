# include<iostream>
# include<cstring>

#include "Fecha.h"
#include "Alumno.h"
#include "ArchivoAlumnos.h"

/// A partir del archivo de Alumnos, hacer un archivo con los alumnos que están inscriptos en TUP (TUP tiene como número de carrera el 5).
///Cada registro debe tener; Legajo, nombre, apellido y email.


using namespace std;

void mostrarMenu();

void mostrarSubMenu();

int main()
{
    mostrarMenu();

    return 0;
}

void mostrarMenu()
{

    int op, legajo;

    Alumno reg;
    ArchivoAlumnos archiAlu;


    do
    {
        system("cls");
        cout << "--------------MENU--------------" << endl;
        cout << endl;
        cout << "1 - Agregar Registro." << endl;
        cout << "2 - Mostrar Regristros." << endl;
        cout << "3 - Mostrar Registro por legajo." << endl;
        cout << "4 - Reportes." << endl;
        cout << "5 - Tamanio en byte del registro" << endl;
        cout << "6 - Generar registro Alumnos Tup" << endl;
        cout << "7 - Mostrar Alumnos TUP" << endl;
        cout << "8 - Mostrar Alumnos mayores a 30" << endl;
        cout << "9 - Mostrar promedio de edad" << endl;
        cout << endl;
        cout << endl;
        cout << "0 - Salir." << endl;
        cin >> op;

        system("cls");

        switch(op)
        {
        case 1:
            reg.Cargar();

            if(archiAlu.grabarRegistroAlumno(reg))
            {
                cout << "Cargado!" << endl;
            }
            else
            {
                cout << "Error de carga!" << endl;
            }

            system("pause");

            break;
        case 2:
            archiAlu.listarRegistros();
            system("pause");
            break;
        case 3:
            cout << "Legajo: " << endl;
            cin >> legajo;

            archiAlu.leerRegistro(archiAlu.buscarRegistro(legajo)).Mostrar();

            system("pause");
            break;
        case 4:
            mostrarSubMenu();
            break;
        case 5:
            cout << "Tamaño en byte del registro: " << archiAlu.getTamanioRegistro()<<endl;
            system("pause");
            break;
        case 6:
            if(archiAlu.generarArchivoAlumnosTup())
            {
                cout << "GENERADO!" << endl;
            }
            else
            {
                cout << "ERROR!" << endl;
            }

            system("pause");
            break;
        case 7:
            archiAlu.listarRegistroAlumosTup();
            system("pause");
            break;
        case 8:
            cout << "Alumnos mayores a 30: " << endl;
            archiAlu.listarAlumnosMayoresTreinta();
            system("pause");
            break;
        case 9:
            cout << "Promedio de edad: " << endl;
            cout << archiAlu.informarEdadPromedio() << endl;
            system("pause");
            break;
        case 0:
            cout << "ADIOS" << endl;
            break;
        }

    }
    while(op != 0);
}


void mostrarSubMenu()
{
    int op, legajo, anio, mayor, menor;

    Fecha fecha;

    Alumno reg;
    ArchivoAlumnos archiAlu;


    do
    {
        system("cls");
        cout << "--------------MENU--------------" << endl;
        cout << endl;
        cout << "1 - Buscar por Anio de nacimiento." << endl;
        cout << "2 - Carrera con mas alumnos." << endl;
        cout << "3 - Carrera con menos alumnos." << endl;
        cout << "4 - Ordenar alfabeticamente los alumnos." << endl;
        cout << "5 - Generar archivo con orden alfabetico." << endl;
        cout << "6 - Informar inscriptos en ing mecanica." << endl;
        cout << "7 - Generar archivo con legajo de 130 a 140." << endl;
        cout << "8 - Generar archivo alumnos 2001." << endl;
        cout << endl;
        cout << "0 - Volver al menu anterior." << endl;
        cin >> op;

        system("cls");

        switch(op)
        {
        case 1:
            cout << "Anio a buscar: " << endl;
            cin >> anio;

            archiAlu.buscarRegistrosAnio(anio);

            system("pause");

            break;
        case 2:
            mayor = archiAlu.buscarRegistrosMayor();
            cout << "Carrera con mas inscriptos: " << mayor << endl;

            system("pause");
            break;
        case 3:
            menor = archiAlu.buscarRegistrosMenor();
            cout << "Carrera con menos inscriptos: " << menor << endl;

            system("pause");
            break;
        case 4:
            archiAlu.listarAlfabeticamente();
            system("pause");
            break;
        case 5:

            if(archiAlu.guardarAlfabeticamente())
            {
                cout << "Guardado Exitosamente: " << endl;
            }
            else
            {
                cout << "Error: " << endl;
            }

            archiAlu.listarRegistrosOrdenado();

            system("pause");
            break;
        case 6:
            archiAlu.listarCantidadAlumnosPorMes();
            system("pause");
            break;
        case 7:
            archiAlu.generarArchivoAlumnosPorLegajo();
            system("pause");
            break;
        case 8:
            archiAlu.generarArchivoNacidos2001();
            system("pause");
            break;

        case 0:
            cout << "ADIOS" << endl;
            break;
        }

    }
    while(op != 0);

}



/*cout<<"INGRESE EL LEGAJO DEL ALUMNO QUE SE QUIERE BUSCAR ";
cin>>legajo;

int pos=archiAlu.buscarRegistro(legajo);

if(pos==-1)
{
    cout<<"NO EXISTE UN ALUMNO CON ESE LEGAJO";
}
else
{
    reg=archiAlu.leerRegistro(pos);
    if(reg.getLegajo()==-1)
    {
        cout<<"ERROR DE LECTURA";
    }
    else
    {
        reg.Mostrar();
    }
}
cout<<endl;*/
