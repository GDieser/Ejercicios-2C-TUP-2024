#include <iostream>
#include "Fecha.h"

using namespace std;


Fecha::Fecha()
{
    setFecha();
}
Fecha::Fecha(int dia, int mes, int anio)
{
    _dia = dia;
    _mes = mes;
    _anio = anio;

    validarFechas();
}

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

void Fecha::agregarDia()
{
    int diasMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if((_dia+1) > diasMes[_mes-1])
    {
        _dia = 1;
        if(_mes > 12)
        {
            _mes = 1;
            _anio++;
        }
        else
        {
            _mes++;
        }
    }

}
void Fecha::restarDia()
{
    int diasMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if((_dia-1) < 1 )
    {
        _dia = diasMes[_mes-1];

        if(_mes < 1)
        {
            _anio--;
            _mes = 12;
        }
        else
        {
            _mes--;
        }
    }

}

void Fecha::setFecha()
{
    _dia = 1;
    _mes = 1;
    _anio = 2023;
}

void Fecha::validarFechas()
{
    if(_anio < 0) setFecha();
    if(_mes > 12 || _mes < 0) setFecha();

    int diasMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(_dia < 1 || _dia > diasMes[_mes-1]) setFecha();
}

void Fecha::agregarDias(int dias)
{

    int diasMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(dias > 0)
    {
        while(dias > 0)
        {
            _dia++;

            if( _dia > diasMes[_mes-1])
            {
                _dia = 1;
                _mes++;

                if(_mes > 12)
                {
                    _anio++;
                    _mes = 1;
                }
            }
            dias--;
        }
    }
    else
    {
        while(dias < 0)
        {
            _dia--;
            if( _dia < 1)
            {
                if(_mes < 1)
                {
                    _anio--;
                    _mes = 12;
                    _dia = diasMes[_mes-1];
                }
                else
                {
                    _mes--;
                    _dia = diasMes[_mes-1];
                }
            }
            dias++;
        }
    }

}

string Fecha::toString()
{
    return to_string(_dia) + "/" + to_string(_mes) + "/" + to_string(_anio);
}

