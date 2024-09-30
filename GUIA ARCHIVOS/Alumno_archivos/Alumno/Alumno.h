#pragma once
#include "Fecha.h"

using namespace std;

///desarrollo de clase Alumno
class Alumno : public Fecha
{
protected:

    int _legajo;
    char _nombre[30];
    char _apellido[30];
    Fecha _fechaNacimiento;
    char _email[50];
    int _codigoCarrera;

public:

    Alumno();

    Alumno(int legajo, string nombre, string apellido, Fecha fecha, string email, int codigo);

    int getLegajo() const;
    string getNombre() const;
    string getApellido() const;
    Fecha getFechaNacimiento() const;
    string getEmail() const;
    int getCodigoCarrera() const;

    void setLegajo(int l);
    void setNombre(string nombre);
    void setApellido(string apellido);
    void setFechaNacimiento(Fecha fecha);
    void setEmail(string email);
    void setCodigoCarrera(int codigo);

    void Cargar();
    void Mostrar();
};
