#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#pragma once

using namespace std;

class Examen{

private:
    int dia, mes, anio, notas;
    char apellido[50], nombre[50], materia[50];

public:
    void cargar();
    void mostrar();

};

#endif // HEADER_H_INCLUDED
