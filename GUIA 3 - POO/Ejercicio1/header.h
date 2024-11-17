#pragma once

using namespace std;

class Rectangulo/// Sin ()
{
private:///Atributos
    int base;
    int altura;

public:///Metodos
    Rectangulo(int, int);///Constructor

    int calcularArea();
    int calcularPerimetro();

};

///Contructor para inciar los atributos
Rectangulo::Rectangulo(int _base, int _altura)
{
    base = _base;
    altura = _altura;
}

int Rectangulo::calcularArea()
{
    int area;

    area = base * altura;

    return area;
}

int Rectangulo::calcularPerimetro()
{
    int perimetro;

    perimetro = (base + altura) * 2;

    return perimetro;
}
