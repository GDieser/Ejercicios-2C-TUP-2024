#include <iostream>
#include <cstring>
#include "Usuario.h"

using namespace std;

Usuario::Usuario()
{

}

Usuario::Usuario(string nombre, string clave, string rol)
{
    setNombre(nombre.c_str());
    setClave(clave.c_str());
    setRol(rol.c_str());
}

const char* Usuario::getNombre()
{
    return _nombre;
}
const char* Usuario::getClave()
{
    return _clave;
}
const char* Usuario::getRol()
{
    return _rol;
}

void Usuario::setNombre(const char *nombre)
{
    strcpy(_nombre, nombre);
}
void Usuario::setClave(const char *clave)
{
    strcpy(_clave, clave);
}
void Usuario::setRol(const char *rol)
{
    strcpy(_rol, rol);
}
