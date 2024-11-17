#pragma once

using namespace std;

class Persona
{
    private:
        string _nombre;
        int _edad;

    public:
        Persona(){}
        Persona(string nombre, int edad);

        void setNombre(string nombre);
        string getNombre();

        void setEdad(int edad);
        int getEdad();

        void cargarDatos();
        void mostrarDatos(Persona obj);

};

