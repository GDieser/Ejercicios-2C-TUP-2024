#include <iostream>
#include "Persona.h"

using namespace std;

int main()
{
    int e;
    string n;

    char letra;
    letra='a';
    cout<<letra;
    cout<<(int)letra;


    Persona objPero("Hola", 28);

    Persona objPer;

    objPer.cargarDatos();
    objPer.mostrarDatos(objPero);

    //objPer.setEdad(e);
    //objPer.setNombre(n);


    return 0;
}
