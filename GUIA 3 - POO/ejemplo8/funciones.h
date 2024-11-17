#pragma once

class Alumno
{
private:
    int legajo;
    char nombre[30];
    char apellido[30];
    bool regular;

public:
    void cargar();
    void mostrar();
};
