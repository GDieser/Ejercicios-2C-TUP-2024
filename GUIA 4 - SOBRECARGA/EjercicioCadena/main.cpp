#include <iostream>
#include "Cadena.h"

using namespace std;

int main()
{
    Cadena cad("Soy cad 1");
    Cadena cad2("Soy cad 2");
    char vect[30] = "Soy un vector";
    string str= "Soy un string";

    ///PD

    //Cadena cad3(cad + cad2);
    //Cadena cad3(cad + str);
    //Cadena cad3(cad + vect);
    Cadena cad3(cad + " Soy un literal");
    cad3.mostrar();




    /* ///PC
    cad += cad2;
    cad.mostrar();

    cad += vect;
    cad.mostrar();

    cad += str;
    cad.mostrar();*/

    /* ///PB
    cad = cad2;
    cad.mostrar();

    //cad = "CHAU";
    //cad.mostrar();

    cad = str;
    cad.mostrar();

    cad = vect;
    cad.mostrar();*/

    /* ///PA 3
     if(cad < str)///Con < y >
    {
        cout << "Cad menor" << endl;
    }
    else
    {
        cout << "Cad mayor" << endl;
    }*/

    /*///PA 2
    if(cad != "HOLAA")
    {
        cout << "Diferentes" << endl;
    }
    else
    {
        cout << "Iguales" << endl;
    }*/

    /*///PA 1
    if(cad == vect)
    {
        cout << "Iguales" << endl;
    }
    else
    {
        cout << "No Iguales" << endl;
    }*/

    return 0;
}
