#pragma once

using namespace std;

class Persona
{
private: ///Atributos
    int edad;
    string nombre;

public: ///Metodos
    Persona(int, string);///Constructor

    void leer();
    void correr();
};

///Contructor para inciar los atributos
Persona::Persona(int _edad, string _nombre)
{
    edad = _edad;
    nombre = _nombre;
}

void Persona::leer()
{
    cout << "Soy " << nombre << " tengo " << edad << " y puedo leer!" << endl;
}

void Persona::correr()
{
    cout << "Soy " << nombre << " tengo " << edad <<  " y puedo correr!" << endl;
}
