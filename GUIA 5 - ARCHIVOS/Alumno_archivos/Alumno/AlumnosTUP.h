#pragma once
using namespace std;

class AlumnosTUP
{
public:
    AlumnosTUP();

    AlumnosTUP(int legajo, string nombre, string apellido, string email);

    int getLegajo() const;
    string getNombre() const;
    string getApellido() const;
    string getEmail() const;


    void setLegajo(int l);
    void setNombre(string nombre);
    void setApellido(string apellido);
    void setEmail(string email);

    void Mostrar();

private:

    int _legajo;
    char _nombre[30];
    char _apellido[30];
    char _email[50];

};

