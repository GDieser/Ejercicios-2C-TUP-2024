#include <iostream>
#include "Usuario.h"

using namespace std;

Usuario cargarUsuario(Usuario &obj)
{
    string nombre, clave, rol;

    cout << "Nombre: ";
    cin >> nombre;
    cout << "Clave: ";
    cin >> clave;
    cout << "Rol: ";
    cin >> rol;

    return Usuario(nombre, clave, rol);
}

int main()
{
    Usuario objUser[5];

    for(int i=0; i<5; i++)
    {
        cargarUsuario(objUser[i]);
    }



    return 0;
}
