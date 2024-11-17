#pragma once

using namespace std;

class Triangulo
{
private:

    int lados[3];

public:

    Triangulo();///Constructor
    ///~Triangulo();   <------ Destructor
    Triangulo(int lado[3]){lado[0] = 1; lado[1] = 1; lado[2] = 1;}///sobrecarga

    void setLado(int numero, float valor);
    int getLado(int numero);
    int getTipo();
    bool isEscaleno();
    bool isIsoceles();
    bool isEquilatero();
};

Triangulo::Triangulo(){}

void Triangulo::setLado(int numero, float valor)
{
    ///Establecemos valores
    if(numero > 0 && numero < 4)
    {
        lados[numero-1] = valor;
    }

}

int Triangulo::getLado(int numero)
{
    ///Mostramos y comprobamos

    if(numero > 0 && numero < 4) return lados[numero-1];
    else return 0;
}

int Triangulo::getTipo()
{
    if(isEquilatero()) return 1;
    if(isIsoceles()) return 2;
    if(isEscaleno()) return 3;

}

bool Triangulo::isEscaleno()
{
    if(lados[0] != lados[1] && lados[0] != lados[2] && lados[1] != lados[2]) return true;
    else return false;
}

bool Triangulo::isIsoceles()
{
    if(lados[0] == lados[1] || lados[0] == lados[2] || lados[1] == lados[2]) return true;
    else return false;
}

bool Triangulo::isEquilatero()
{
    if(lados[0] == lados[1] && lados[0] == lados[2] && lados[1] == lados[2]) return true;
    else return false;
}
