#include <iostream>

#include "DetalleRutina.h"

using namespace std;

int main()
{
    int vect[5];
    int vect2[5];

    for(int i=0; i<5;i++)
    {
        cin >> vect[i];
    }

    DetalleRutina rutina(vect);

    int *vect3 = rutina.getIdEjercicios();


    for(int i=0; i<5;i++)
    {
        cout << vect3[i] << endl;
    }

    return 0;
}
