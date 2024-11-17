#include <iostream>
#include "Triangulo.h"

using namespace std;

int main()
{
    Triangulo objTr(2, 3, 1);

    if(objTr.getTipo() == 1)
    {
        cout << "Equilatero";
    }
    else if(objTr.getTipo() == 2)
    {
        cout << "Isosceles";
    }
    else if(objTr.getTipo() == 3)
    {
        cout << "Escaleno";
    }

    return 0;
}
