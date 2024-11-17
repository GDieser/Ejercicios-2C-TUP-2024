#include <iostream>
#include "Herramienta.h"
#include "Martillo.h"

using namespace std;

int main()
{
    //float peso, longitud;
/*
    cin >> peso;
    cout << endl;
    cin >> longitud;
*/

    Herramienta objHer(50.5, 120.5);

    objHer.mostrarInformacion();

    Martillo objMar("Punta", 50.5, 120.5);
    objMar.mostrarInformacion();

    return 0;
}
