#include <iostream>
# include<cstring>

#include "ArchivoAlumnos.h"
#include "Fecha.h"
#include "AlumnosTUP.h"

using namespace std;

//ArchivoAlumnos::ArchivoAlumnos(){}

ArchivoAlumnos::ArchivoAlumnos(const char *n)
{
    setTamanioRegistro();
    strcpy(nombre, n);
}
int ArchivoAlumnos::getTamanioRegistro()
{
    return _tamanioRegistro;
}

void ArchivoAlumnos::setTamanioRegistro()
{
    _tamanioRegistro = sizeof(Alumno);
}

bool ArchivoAlumnos::grabarRegistroAlumno(Alumno reg)
{
    FILE *pAlumno;

    pAlumno=fopen(nombre,"ab" );//si no puede hacer la apertura fopen devuelve NULL

    if(pAlumno==NULL) return false;

    int escribio=fwrite(&reg,sizeof(Alumno),1,pAlumno);

    fclose(pAlumno);

    return escribio;

}

bool ArchivoAlumnos::leerRegistroAlumno(Alumno &reg)
{
    FILE *pAlumno;
    pAlumno=fopen(nombre,"rb" );//si no puede hacer la apertura fopen devuelve NULL
    if(pAlumno==NULL) return false;
    int leyo=fread(&reg,sizeof(Alumno),1,pAlumno);
    fclose(pAlumno);
    return leyo;
}

bool ArchivoAlumnos::listarRegistros()
{
    FILE *pAlu;

    Alumno reg;

    pAlu=fopen(nombre, "rb");
    if(pAlu==NULL)
    {
        cout<<"NO SE PUDO ABRIR EL ARCHIVO "<<endl;
        return false;
    }

    while(fread(&reg,sizeof(Alumno),1,pAlu)==1)
    {
        reg.Mostrar();
        cout<<endl;
    }

    fclose(pAlu);

    return true;
}

int ArchivoAlumnos::buscarRegistro(int leg)
{
    FILE *pAlu;
    Alumno reg;
    int pos=0;
    pAlu=fopen(nombre, "rb");
    if(pAlu==NULL)
    {
        cout<<"NO SE PUDO ABRIR EL ARCHIVO "<<endl;
        return -2;
    }
    while(fread(&reg,sizeof(Alumno),1,pAlu)==1)
    {
        if(reg.getLegajo()==leg)
        {
            fclose(pAlu);
            return pos;
        }
        pos++;
    }
    fclose(pAlu);
    return -1;
}

Alumno ArchivoAlumnos::leerRegistro(int ubicacion)
{
    FILE *pAlu;
    Alumno reg;
    reg.setLegajo(-1);
    ///int pos=0;
    pAlu=fopen(nombre, "rb");
    if(pAlu==NULL)
    {
        cout<<"NO SE PUDO ABRIR EL ARCHIVO "<<endl;
        return reg;
    }
    /*while(fread(&reg,sizeof(Alumno),1,pAlu)==1){
        if(pos==ubicacion){
          fclose(pAlu);
          return reg;
        }
        pos++;
    }*/
    int cuanto=ubicacion*sizeof(Alumno);
    int desde_donde=0;
    fseek(pAlu,cuanto, desde_donde);
    fread(&reg, sizeof(Alumno),1, pAlu);
    fclose(pAlu);
    return reg;

}

void ArchivoAlumnos::buscarRegistrosAnio(int anio)
{
    Alumno reg;
    Fecha fecha;

    FILE *pAlu;
    pAlu=fopen(nombre, "rb");

    if(pAlu==NULL)
    {
        exit(-1);
    }
    while(fread(&reg,sizeof(Alumno),1,pAlu)==1)
    {
        fecha = reg.getFechaNacimiento();

        if(fecha.getAnio()== anio)
        {
            cout << endl;
            reg.Mostrar();
            cout << "-------------------" << endl;
        }
    }
    fclose(pAlu);
}

int ArchivoAlumnos::buscarRegistrosMenor()
{
    Alumno reg;
    int vect[8] = {};

    FILE *pAlu;
    pAlu=fopen(nombre, "rb");

    if(pAlu==NULL)
    {
        exit(-1);
    }
    while(fread(&reg,sizeof(Alumno),1,pAlu)==1)
    {
        vect[reg.getCodigoCarrera()-1]++;
    }
    fclose(pAlu);

    int menor = 0;
    for(int i=0; i<8; i++)
    {
        if(vect[i] < menor || menor == 0 )
        {
            menor = vect[i];
        }
    }

    return menor+1;
}

int ArchivoAlumnos::buscarRegistrosMayor()
{
    Alumno reg;
    int vect[8] = {};

    FILE *pAlu;
    pAlu=fopen(nombre, "rb");

    if(pAlu==NULL)
    {
        exit(-1);
    }
    while(fread(&reg,sizeof(Alumno),1,pAlu)==1)
    {
        vect[reg.getCodigoCarrera()-1]++;
    }
    fclose(pAlu);

    int mayor = 0;
    for(int i=0; i<8; i++)
    {
        if(vect[i] > mayor)
        {
            mayor = vect[i];
        }
    }

    return mayor+1;
}

int ArchivoAlumnos::getCantidad()
{

    int total, cantidad;

    FILE *pFile;
    pFile = fopen(nombre, "rb");

    if(pFile == nullptr)
    {
        return 0;
    }

    fseek(pFile, 0, SEEK_END);
    total = ftell(pFile);

    fclose(pFile);

    return total / sizeof(Alumno);
}


void ArchivoAlumnos::listarAlfabeticamente()
{
    int cantidad = getCantidad();
    Alumno alu;

    string *vectRegistros = new string[cantidad];

    if(vectRegistros == nullptr)
    {
        exit(-1);
    }

    FILE *pAlu;
    pAlu=fopen(nombre, "rb");
    if(pAlu == nullptr)
    {
        exit(-1);
        delete []vectRegistros;
    }

    for(int i=0; i<cantidad; i++)
    {
        fread(&alu, sizeof(Alumno), 1, pAlu);
        vectRegistros[i] = alu.getNombre();
    }
    fclose(pAlu);

    string nombre, nombre2;

    for (int i = 0; i < cantidad - 1; i++)
    {

        for (int j = 0; j < cantidad - 1 - i; j++)
        {
            if (strcmp(vectRegistros[j].c_str(), vectRegistros[j+1].c_str()) > 0)
            {
                nombre = vectRegistros[j];
                vectRegistros[j] = vectRegistros[j+1];
                vectRegistros[j+1] = nombre;
            }

        }
    }

    for (int i = 0; i < cantidad; i++)
    {
        cout << endl;
        cout << vectRegistros[i] << endl;
        cout << "-------------------" << endl;
    }

    delete []vectRegistros;
}

bool ArchivoAlumnos::guardarAlfabeticamente()
{
    int cantidad = getCantidad();
    Alumno alu;

    Alumno *vectRegistros = new Alumno[cantidad];

    if(vectRegistros == nullptr)
    {
        return false;
    }

    FILE *pAlu;
    pAlu=fopen(nombre, "rb");
    if(pAlu == nullptr)
    {
        return false;;
        delete []vectRegistros;
    }

    for(int i=0; i<cantidad; i++)
    {
        fread(&alu, sizeof(Alumno), 1, pAlu);
        vectRegistros[i] = alu;
    }
    fclose(pAlu);

    FILE *nuevo;
    nuevo=fopen("alumnosOrdenados.dat", "ab");
    if(nuevo == nullptr)
    {
        return false;
        delete []vectRegistros;
    }

    for (int i = 0; i < cantidad - 1; i++)
    {

        for (int j = 0; j < cantidad - 1 - i; j++)
        {
            if (strcmp(vectRegistros[j].getNombre().c_str(), vectRegistros[j+1].getNombre().c_str()) > 0)
            {
                Alumno aux;
                aux = vectRegistros[j];
                vectRegistros[j] = vectRegistros[j+1];
                vectRegistros[j+1] = aux;
            }

        }
    }

    for(int i=0; i<cantidad; i++)
    {
        fwrite(&vectRegistros[i], sizeof(Alumno), 1, nuevo);
    }
    fclose(nuevo);

    delete []vectRegistros;
}

bool ArchivoAlumnos::listarRegistrosOrdenado()
{
    FILE *pAlu;

    Alumno reg;

    pAlu=fopen("alumnosOrdenados.dat", "rb");
    if(pAlu==nullptr)
    {
        return false;
    }

    while(fread(&reg,sizeof(Alumno),1,pAlu)==1)
    {
        cout << "-------------------" << endl;
        reg.Mostrar();
        cout<<endl;
    }

    fclose(pAlu);

    return true;
}

bool ArchivoAlumnos::generarArchivoAlumnosTup()
{
    int tam = getCantidad();
    Alumno alumno;

    AlumnosTUP *aluTup;

    FILE *pFile;

    pFile=fopen(nombre, "rb");
    if(pFile == nullptr)
    {
        return false;
    }

    int cont = 0;
    for(int i=0; i<tam; i++)
    {
        fread(&alumno, sizeof(Alumno), 1, pFile);
        if(alumno.getCodigoCarrera() == 5)
        {
            cont++;
        }
    }
    fclose(pFile);

    pFile=fopen(nombre, "rb");
    if(pFile == nullptr)
    {
        return false;
    }

    aluTup = new AlumnosTUP[cont];

    cont = 0;
    for(int i=0; i<tam; i++)
    {
        fread(&alumno, sizeof(Alumno), 1, pFile);

        if(alumno.getCodigoCarrera() == 5)
        {
            AlumnosTUP aux(alumno.getLegajo(), alumno.getNombre(), alumno.getApellido(), alumno.getEmail());
            aluTup[cont] = aux;
            cont++;
        }
    }
    fclose(pFile);

    pFile=fopen("alumnosTup.dat", "ab");
    if(pFile == nullptr)
    {
        delete[] aluTup;
        return false;
    }

    for(int i=0; i<cont; i++)
    {
        fwrite(&aluTup[i], sizeof(AlumnosTUP), 1, pFile);
    }

    fclose(pFile);
    delete []aluTup;

    return true;

}

bool ArchivoAlumnos::listarRegistroAlumosTup()
{
    FILE *pAlu;

    AlumnosTUP alu;

    pAlu=fopen("alumnosTup.dat", "rb");

    if(pAlu==nullptr)
    {
        return false;
    }

    while(fread(&alu,sizeof(AlumnosTUP),1,pAlu)==1)
    {
        cout << "-------------------" << endl;
        alu.Mostrar();
        cout<<endl;
    }

    fclose(pAlu);

    return true;
}

bool ArchivoAlumnos::listarAlumnosMayoresTreinta()
{
    FILE *pAlu;

    Alumno reg;


    pAlu=fopen(nombre, "rb");
    if(pAlu==nullptr)
    {
        return false;
    }

    int anioActual = 2024;
    while(fread(&reg,sizeof(Alumno),1,pAlu)==1)
    {
        int anioNacimiento = reg.getFechaNacimiento().getAnio();
        int edad = anioActual - anioNacimiento;

        if(edad >= 30)
        {
            cout << "-------------------" << endl;
            reg.Mostrar();
            cout<<endl;
        }
    }

    fclose(pAlu);

    return true;
}
