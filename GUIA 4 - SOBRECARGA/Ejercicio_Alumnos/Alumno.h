#pragma once
#include "Fecha.h"

///desarrollo de clase Alumno
class Alumno
{
public:

    Alumno();

    int getLegajo();
    void setLegajo(int l);
    void Cargar();
    void Mostrar();

private:

    int _legajo;
    char _nombre[30];
    char _apellido[30];
    Fecha _fechaNacimiento;
    char _email[50];
    int _codigoCarrera;
};
