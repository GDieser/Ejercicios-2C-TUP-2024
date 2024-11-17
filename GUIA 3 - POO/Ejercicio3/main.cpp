#include <iostream>
#include "header.h"

/*
Crea una clase llamada CuentaBancaria que represente una cuenta bancaria.
La clase debe tener los siguientes atributos:

-Número de cuenta (entero)
-Saldo actual (float)

Implementa los siguientes métodos:

-Un constructor que me permita establecer el número de cuenta y el saldo.
-Un método depositar(float monto) que incremente el saldo.
-Un método retirar(float monto) que disminuya el saldo si hay fondos suficientes,
caso contrario no hace nada.
-Un método obtenerSaldo() que devuelva el saldo actual.
*/

using namespace std;

int main()
{
    int numCuenta;
    float saldo, monto;
    int op, salir;

    cout << "Ingrese Num Cuenta: ";
    cin >> numCuenta;

    cout << "Ing Saldo de la cuenta: ";
    cin >> saldo;

    CuentaBancaria cb1(numCuenta, saldo);

    do
    {
        system("cls");

        cout << "1 - Depositar, 2 - Retirar ";
        cin >> op;

        switch(op)
        {
        case 1:
            cout << "Monto: ";
            cin >> monto;
            cb1.depositar(monto);
            break;
        case 2:
            cout << "Monto: ";
            cin >> monto;
            cb1.retirar(monto);
            break;
        default:
            cout << "Error" << endl;
            break;
        }

        cout << "Continuar? ";
        cin >> salir;

    }while(salir != 0);

    cout << "Saldo: " << cb1.obtenerSaldo() << endl;



    return 0;
}
