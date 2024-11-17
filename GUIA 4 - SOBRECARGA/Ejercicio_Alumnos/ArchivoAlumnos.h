#pragma once
#include "Alumno.h"


class ArchivoAlumnos
{

public:

    ArchivoAlumnos();

    ArchivoAlumnos(const char *n);

    bool leerRegistroAlumno(Alumno &reg);

    bool listarRegistros();

    int buscarRegistro(int leg);

    Alumno leerRegistro(int ubicacion);

    bool grabarRegistroAlumno(Alumno reg);

private:

    char _nombre[50];

};
