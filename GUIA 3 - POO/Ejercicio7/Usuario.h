#pragma once

using namespace std;
class Usuario
{
    private:
        string _nombre;
        string _clave;
        string _rol;

    public:
        Usuario(){}
        Usuario(string nombre, string clave, string rol);

        void setNombre(string nombre);
        string getNombre();
        void setClave(string clave);
        string getClave();
        void setRol(string rol);
        string getRol();
        void mostrarSaludo(Usuario *obj, int indice);

};
