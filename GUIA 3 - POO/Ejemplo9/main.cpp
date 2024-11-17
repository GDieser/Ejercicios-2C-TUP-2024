#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    Persona p1 = Persona(29, "German");
    Persona p2(27, "Sofia");

    p1.correr();

    p2.leer();

    return 0;
}
