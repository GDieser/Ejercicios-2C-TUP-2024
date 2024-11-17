#include <iostream>
# include<cstring>

#include "Fecha.h"

using namespace std;

Fecha::Fecha(){}

Fecha::Fecha(const int d = 0,const int m = 0,const int a = 0)
{
    _dia=d;
    _mes=m;
    _anio=a;
}

void Fecha::setDia(int dia)
{
    if(_dia>=1 &&_dia<=31)this->_dia=dia;
    else this->_dia=0;
}
void Fecha::setMes(const int m)
{
    _mes=m;
}
void Fecha::setAnio(int a)
{
    _anio=a;
}
///getter
int Fecha::getDia()
{
    return _dia;
}
int Fecha::getMes()
{
    return _mes;
}
int Fecha::getAnio()
{
    return _anio;
}

void Fecha::Cargar()
{
    int d;
    cout<<"DIA ";
    cin>>d;
    setDia(d);
    cout<<"MES ";
    cin>>_mes;
    cout<<"ANIO ";
    cin>>_anio;
}

void Fecha::Mostrar()
{
    cout<<_dia<<"/"<<_mes<<"/"<<_anio<<endl;
}

