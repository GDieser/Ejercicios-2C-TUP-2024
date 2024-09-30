#include <iostream>
#include <ctime>

#include "Fecha.h"

using namespace std;

Fecha::Fecha()
{
    establecerFechaPorDefecto();
}

Fecha::Fecha(int d=0, int m=0, int a=0)
{
    setDia(d);
    setMes(m);
    setAnio(a);
}

void Fecha::setDia(int dia)
{
    if(dia>=1 &&dia<=31)this->_dia=dia;
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

///fin de la definición de la clase
///desarrollo de los métodos
void Fecha::CargarFecha()
{
    int d, m, a;

    cout<<"DIA ";
    cin>>d;
    setDia(d);

    cout<<"MES ";
    cin>>m;
    setMes(m);

    cout<<"ANIO ";
    cin>>a;
    setAnio(a);
}

void Fecha::Mostrar()
{
    cout<<_dia<<"/"<<_mes<<"/"<<_anio<<endl;
}

void Fecha::establecerFechaPorDefecto(){

    time_t timestamp = time(0);

    tm *diaactual = localtime(&timestamp);

    _dia = diaactual->tm_mday;

    _mes = diaactual->tm_mon+1;

    _anio = diaactual->tm_year+1900;
}

