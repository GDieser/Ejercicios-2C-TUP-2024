#include <iostream>
#include <Fecha.h>

using namespace std;


int main()
{
    Fecha objFecha(1, 1, 2001);

    objFecha.agregarDias(3650);

    cout << "Fecha: " << objFecha.toString();

    return 0;
}
