#include <iostream>

#include "Alumno.h"
#include "Fecha.h"
#include "ArchivoAlumnos.h"

using namespace std;

///Hacer un proyecto con un menú
///para agregar registros,
///listar todos los registros y
///listar 1 registro (se pide el ingreso de un legajo y se los muestra)

int main()
{

    int legajo;

    Alumno reg;

    ArchivoAlumnos archiAlu;

    /*reg.Cargar();
    archiAlu.grabarRegistroAlumno(reg);
    archiAlu.listarRegistros();*/
    cout<<"INGRESE EL LEGAJO DEL ALUMNO QUE SE QUIERE BUSCAR ";
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
    cout<<endl;
    system("pause");
    return 0;
}
