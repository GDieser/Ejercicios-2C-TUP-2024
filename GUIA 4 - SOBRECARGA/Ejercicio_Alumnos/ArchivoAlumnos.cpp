#include <iostream>
# include<cstring>

#include "ArchivoAlumnos.h"
#include "Alumno.h"

using namespace std;

ArchivoAlumnos::ArchivoAlumnos()
{

}

ArchivoAlumnos::ArchivoAlumnos(const char *n="alumnos.dat")
{
    strcpy(_nombre, n);
}

bool ArchivoAlumnos::grabarRegistroAlumno(Alumno reg)
{
    FILE *pAlumno;
    pAlumno=fopen(_nombre,"ab" );//si no puede hacer la apertura fopen devuelve NULL

    if(pAlumno==NULL) return false;

    int escribio=fwrite(&reg,sizeof(Alumno),1,pAlumno);

    fclose(pAlumno);
    return escribio;

}

bool ArchivoAlumnos::leerRegistroAlumno(Alumno &reg)
{
    FILE *pAlumno;
    pAlumno=fopen(_nombre,"rb" );//si no puede hacer la apertura fopen devuelve NULL

    if(pAlumno==NULL) return false;

    int leyo=fread(&reg,sizeof(Alumno),1,pAlumno);

    fclose(pAlumno);
    return leyo;
}

bool ArchivoAlumnos::listarRegistros()
{
    FILE *pAlu;

    Alumno reg;

    pAlu=fopen(_nombre, "rb");

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
    int pos=0;

    FILE *pAlu;
    Alumno reg;
    pAlu=fopen(_nombre, "rb");

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
    pAlu=fopen(_nombre, "rb");

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
