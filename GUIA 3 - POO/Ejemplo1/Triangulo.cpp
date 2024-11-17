#include <iostream>
#include "Triangulo.h"

using namespace std;

Triangulo::Triangulo(int lado1, int lado2, int lado3)
{
    _lado[0] = lado1;
    _lado[1] = lado2;
    _lado[2] = lado3;
}

int Triangulo::getLado(int numero)
{
    return _lado[numero];
}
void Triangulo::setLado(int numero, int lado)
{
    _lado[numero] = lado;
}

int Triangulo::getTipo()
{
    if(isEquilatero())
    {
        return 1;
    }
    else if(isIsosceles())
    {
        return 2;
    }
    else if(isEscaleno())
    {
        return 3;
    }
}

bool Triangulo::isEscaleno()
{
    if(_lado[0] != _lado[1] && _lado[1] != _lado[2] && _lado[0] != _lado[2])
    {
        return true;
    }
    else
    {
        return false;
    }

}
bool Triangulo::isIsosceles()
{
    if((_lado[0] == _lado[1] && _lado[0] != _lado[2]) || (_lado[0] == _lado[2] && _lado[1] != _lado[2]) || (_lado[1] == _lado[2] && _lado[0] != _lado[2]))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Triangulo::isEquilatero()
{
    if(_lado[0] == _lado[1] && _lado[1] == _lado[2])
    {
        return true;
    }
    else
    {
        return false;
    }
}

