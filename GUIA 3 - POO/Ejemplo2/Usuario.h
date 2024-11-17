#pragma once

using namespace std;

class Usuario
{
public:
    Usuario();

    Usuario(string nombre, string clave, string rol);

    const char *getNombre();
    const char *getClave();
    const char *getRol();

    void setNombre(const char *nombre);
    void setClave(const char *clave);
    void setRol(const char *rol);


private:
    char _nombre[20];
    char _clave[10];
    char _rol[30];
};


