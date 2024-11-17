#pragma once

using namespace std;

class Triangulo
{
    public:
        Triangulo(int lado1, int lado2, int lado3);

        int getLado(int numero);
        void setLado(int numero, int lado);

        int getTipo();

        bool isEscaleno();
        bool isIsosceles();
        bool isEquilatero();


    private:
        int _lado[3];
};

