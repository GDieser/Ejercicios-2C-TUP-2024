#pragma once
#include "Alumno.h"
#include "Fecha.h"
#include "Alumno_Legajo.h"

using namespace std;

class ArchivoAlumnos : public Alumno
{

private:
    char nombre[50];
    int _tamanioRegistro;

public:
    //ArchivoAlumnos();

    ArchivoAlumnos(const char *n = "alumnos.dat");

    int getTamanioRegistro();
    void setTamanioRegistro();

    bool grabarRegistroAlumno(Alumno reg);
    bool grabarRegistroAlumno(Alumno reg, string nombreRegistro);

    bool leerRegistroAlumno(Alumno &reg);

    bool listarRegistros();

    int buscarRegistro(int leg);

    //Alumno leerRegistro(int ubicacion);

    Alumno leerRegistro(int ubicacion);

    void buscarRegistrosAnio(int anio);

    int buscarRegistrosMayor();
    int buscarRegistrosMenor();

    int getCantidad();

    void listarAlfabeticamente();

    bool guardarAlfabeticamente();
    bool listarRegistrosOrdenado();
    bool generarArchivoAlumnosTup();
    bool listarRegistroAlumosTup();
    bool listarAlumnosMayoresTreinta();

    int informarEdadPromedio();
    void listarCantidadAlumnosPorMes();

    bool grabarRegistro(Alumno_Legajo reg, string nombreRegistro);
    void generarArchivoAlumnosPorLegajo();

    void generarArchivoNacidos2001();

};
