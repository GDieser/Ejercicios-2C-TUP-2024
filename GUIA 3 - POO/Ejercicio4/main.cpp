#include <iostream>
#include <cstring>

#include "header.h"

/*
Crea una clase llamada Triangulo que represente un tri�ngulo. La clase debe contener un vector de 3 elementos,
donde cada elemento corresponde a la longitud de un lado del tri�ngulo. Implementa los siguientes m�todos:

-getLado(int numero): Devuelve la longitud del valor del lado correspondiente al n�mero proporcionado (1, 2, o 3).
Si el n�mero es incorrecto (fuera del rango 1-3), devuelve cero.

-setLado(int numero, float valor): Establece el valor del lado correspondiente al n�mero proporcionado (1, 2, o 3).
Si el n�mero es incorrecto (fuera del rango 1-3), no realiza ninguna acci�n.

-getTipo(): Devuelve el tipo de tri�ngulo seg�n sus lados:
1 para un tri�ngulo equil�tero (todos los lados iguales).
2 para un tri�ngulo is�sceles (dos lados iguales).
3 para un tri�ngulo escaleno (todos los lados diferentes).

-isEscaleno(): Devuelve true si el tri�ngulo es escaleno, false en caso contrario.
-isIsosceles(): Devuelve true si el tri�ngulo es is�sceles, false en caso contrario.
-isEquilatero(): Devuelve true si el tri�ngulo es equil�tero, false en caso contrario.
*/

using namespace std;


int main()
{
    ///strcpy()
    ///strlen()
    Triangulo ladoTg;
    int lado;
    float valor;
    int op;
    int tipo;

    do
    {
        system("cls");

        cout << "--- MENU ---" << endl;
        cout << endl;
        cout << "1. CARGAR LADO" << endl;
        cout << "2. MOSTRAR LADOS" << endl;
        cout << "3. MOSTRAR TIPOS" << endl;
        cout << endl;
        cout << "0. SALIR" << endl;
        cin >> op;

        switch(op)
        {
        case 1:///Cargar
            system("cls");
            cout << "Lado: ";
            cin >> lado;

            cout << "Valor: ";
            cin >> valor;

            ladoTg.setLado(lado, valor);

            break;
        case 2:///Mostrar
            system("cls");
            cout << "Valor Lado: " << endl;
            cin >> lado;
            valor = ladoTg.getLado(lado);

            if(valor==0) cout << "Lado invalido";
            else cout << "Lado " << lado << " valor: " << valor << endl;

            system("pause");
            break;
        case 3:///Tipo
            system("cls");
            cout << "Tipo de triangulo:" << endl;

            tipo = ladoTg.getTipo();

            if(tipo == 1) cout << "Triangulo equilatero." << endl;
            else if(tipo == 2) cout << "Triangulo isoseles." << endl;
            else if(tipo == 3) cout << "Triangulo escaleno." << endl;
            system("pause");
            break;
        default:

            break;
        }

    }while(op != 0);

    return 0;
}
