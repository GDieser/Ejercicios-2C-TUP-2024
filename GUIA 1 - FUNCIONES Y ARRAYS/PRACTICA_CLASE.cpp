#include <iostream>
#include <ctime>

using namespace std;

///side effect

/*Hacer un programa que permita representar un Incrementador. Un incrementador es un número entero
que comienza con un valor inicial y pueda incrementarse a partir de un valor de incremento. También
deberá llevar la cuenta de la cantidad de veces que incrementó.

Por ejemplo, si nuestro incrementador comienza en 0 y el valor de incremento es de 50. En cada incremento,
 aumentará de 50 en 50. Ejemplo:
0, 50, 100, 150, etc.


Restricciones:
El valor del incrementador no puede nunca disminuir.
La cantidad de veces que se incrementó siempre debe aumentar de uno en uno. Tampoco puede disminuir.
Siempre que el incrementador aumente debe hacerlo por la misma cantidad definida en el valor de incremento.

*/

void realizarIncremento(int valorIncremento, int &totalIncrementos);

void guardarValores(int vect, tam);

int main (){

    srand(time(0));

    int valorInicial, valorIncremento, contadorIncremento = 0;
    int totalIncrementos;
    char incremento = 's';

    int vect[5];

    for(int i=0; i<5; i++)
    {
        vect[i] = (rand() % 10);
    }

    guardarValores(vect, 5)

    cout << "Ingrese valor inicial: " << endl;
    cin >> valorInicial;

    totalIncrementos = valorInicial;

    cout << "Ingrese valor de incremento: " << endl;
    cin >> valorIncremento;



    while(incremento == 's')
    {
        cout << "Desea incrementar (S/N): ";
        cin >> incremento;

        contadorIncremento++;

        realizarIncremento(valorIncremento, totalIncrementos);

        cout << endl;
        cout << "Valor: " << totalIncrementos << endl;

    }

    ///Contador
    cout << "Cantidad de veces incrementadas: " << contadorIncremento << endl;



	return 0;
}


void realizarIncremento(int valorIncremento, int &totalIncrementos)
{
    totalIncrementos += valorIncremento;
}

void guardarValores(int vect, tam)
{

}
