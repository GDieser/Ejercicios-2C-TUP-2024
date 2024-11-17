#pragma once
using namespace std;

class Alumno_Legajo
{
public:
    Alumno_Legajo();

    Alumno_Legajo(int legajo, string nombre, string apellido);

    int getLegajo() const;
    string getNombre() const;
    string getApellido() const;


    void setLegajo(int l);
    void setNombre(string nombre);
    void setApellido(string apellido);

    void Mostrar();


private:
    int _legajo;
    char _nombre[30];
    char _apellido[30];
};

