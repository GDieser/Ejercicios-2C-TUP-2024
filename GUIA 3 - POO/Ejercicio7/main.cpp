#include <iostream>
#include "Usuario.h"

/*
7
Crea una clase llamada Usuario que represente a un usuario en un sistema.
La clase debe tener los siguientes atributos:
Nombre (string)
Clave (string)
Rol (string): Puede ser "admin" o "user".

Implementa los siguientes métodos:
Usuario(string nombre, string clave, string rol):
-Constructor que inicializa los atributos.
-getter y setter de cada atributo
Desarrolla un programa que realice lo siguiente:
-Cargar en el sistema una lista de 5 usuarios utilizando un array de objetos Usuario
(esto debe estar hardcodeado en el programa).
-Solicitar al usuario que ingrese su nombre y contraseña al iniciar el programa.
-Verificar si las credenciales ingresadas coinciden con alguno de los usuarios
cargados en el sistema utilizando una función que reciba el array de usuarios,
la cantidad de usuarios, el nombre y la contraseña. Esta función debe devolver el
índice donde se encuentra el usuario en el array, o -1 si el usuario no existe.
-Si se encuentra un usuario con las credenciales correctas, permitir el acceso al
sistema mostrando el rol al que pertenece con un saludo amigable. Utiliza una función
que reciba un objeto Usuario y muestre el saludo con el rol específico.
-Si el usuario ingresa credenciales incorrectas, permitir un máximo de 3 intentos.
Si se agotan los intentos, el programa debe finalizar indicando que se han agotado
los intentos.

*/

using namespace std;

void cargarUusuarios(Usuario *vec)
{
    vec[0].setNombre("German");
    vec[0].setClave("1234");
    vec[0].setRol("admin");

    vec[1].setNombre("Sofia");
    vec[1].setClave("1234");
    vec[1].setRol("admin");

    vec[2].setNombre("Alejandro");
    vec[2].setClave("1234");
    vec[2].setRol("user");

    vec[3].setNombre("Pedro");
    vec[3].setClave("1234");
    vec[3].setRol("user");

    vec[4].setNombre("Lara");
    vec[4].setClave("1234");
    vec[4].setRol("admin");
}

int recorrerUsuarios(Usuario *vect, string nombre, string clave)
{
    for(int i=0; i<5; i++)
    {
        if(vect[i].getNombre() == nombre && vect[i].getClave() == clave)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string nombre, clave;
    int indUsuario;
    int contador = 0;

    Usuario objUsuario[5];
    Usuario obj;

    cargarUusuarios(objUsuario);

    while(contador < 3)
    {
        system("cls");
        cout << "Ingrese nombre: ";
        cin >> nombre;
        cout << "Ingrese Clave: ";
        cin >> clave;

        indUsuario = recorrerUsuarios(objUsuario, nombre, clave);

        if(indUsuario == -1)
        {
            cout << endl;
            cout << "Usuario inexistente." << endl;
            contador++;
            system("pause");
        }
        else
        {
            obj.mostrarSaludo(objUsuario, indUsuario);
            break;
        }
    }

    cout << endl;
    if(contador >= 3) cout << "Limite de intentos alcanzado...";


    return 0;
}
