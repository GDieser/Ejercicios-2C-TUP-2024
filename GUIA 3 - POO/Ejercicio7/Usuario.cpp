#include <iostream>
#include "Usuario.h"

using namespace std;

Usuario::Usuario(string nombre, string clave, string rol)
{
    _nombre = nombre;
    _clave = clave;
    _rol = rol;
}

void Usuario::setNombre(string nombre)
{
    _nombre = nombre;
}

string Usuario::getNombre()
{
    return _nombre;
}

void Usuario::setClave(string clave)
{
    _clave = clave;
}

string Usuario::getClave()
{
    return _clave;
}

void Usuario::setRol(string rol)
{
    _rol = rol;
}
string Usuario::getRol()
{
    return _rol;
}

void Usuario::mostrarSaludo(Usuario *obj, int indice)
{
    system("cls");
    cout << "Usuario tipo: " << obj[indice].getRol() << endl;
    cout << "Bienvenido " << obj[indice].getNombre() << endl;
}

