#include <iostream>
using namespace std;

/*
Una marroquinería dispone de 45 carteras blancas, 50 carteras negras, 40
marrones y 49 grises. Se pide hacer un programa donde se ingresen tres
ventas. Cada venta está compuesta por:
Cantidad de carteras
Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)
Calcular e informar:
A - Cantidad total de carteras vendidas en total.
B - Cuántas carteras quedaron de cada tipo.
C - Los colores de carteras que no se vendieron.
D - NOTA: Ninguna venta superará las 10 carteras.
*/

int main ()
{

    int blancas = 45, negras = 50, marrones = 40, grises = 49;
    int cantidad, totalVendidas = 0;
    int tipo;

    for(int i=0; i<3; i++)
    {
        system("cls");

        cout << "Cantidad de carteras a comprar: ";
        cin >> cantidad;

        if(cantidad > 10)
        {
            cout << "Cantidad no permitida, maximo 10un." << endl;
            i--;
            system("pause");
        }
        else
        {
            cout << "Ingrese tipo de cartera: 1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris ";
            cin >> tipo;


            totalVendidas+=cantidad;

            switch(tipo)
            {
            case 1:
                blancas = blancas - cantidad;
                break;
            case 2:
                negras-=cantidad;
                break;
            case 3:
                marrones-=cantidad;
                break;
            case 4:
                grises-=cantidad;
                break;
            default:
                break;
            }
        }

    }

    ///PA
    cout << "Cantidad total vendidos: " << totalVendidas << " unidades" << endl;

    ///PB
    cout << "Cantidad Blancas: " << blancas << endl;
    cout << "Cantidad Negras: " << negras << endl;
    cout << "Cantidad Marrones: " << marrones << endl;
    cout << "Cantidad Grises: " << grises << endl;

    ///PC
    if(blancas == 45)
    {
        cout << "Carteras Blancas no tuvieron ventas." << endl;
    }
    if(negras == 50)
    {
        cout << "Carteras Negras no tuvieron ventas." << endl;
    }
    if(marrones == 40)
    {
        cout << "Carteras Marrones no tuvieron ventas." << endl;
    }
    if(grises == 49)
    {
        cout << "Carteras Grises no tuvieron ventas." << endl;
    }

    return 0;
}
