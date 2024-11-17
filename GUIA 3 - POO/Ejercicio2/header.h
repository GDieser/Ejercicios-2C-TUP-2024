#pragma once
#include <ctime>

using namespace std;

struct Dado
{
private:///Atributos
    int valor;

public:///Metodos

    Dado(int);///Constructor

    void lanzar();
    int getValor();
    bool esMaximo();
    bool esMinimo();
};

///Contructor para inciar los atributos
Dado::Dado(int _valor)
{
    valor = _valor;
}

void Dado::lanzar()
{
    valor = (rand()%6)+1;
}

int Dado::getValor()
{
    return valor;
}

bool Dado::esMaximo()
{

    if(valor == 6) return true;
    else return false;
}

bool Dado::esMinimo()
{

    if(valor == 1) return true;
    else return false;
}
