#include <iostream>
#include <cstring>
#include "Cadena.h"


using namespace std;

Cadena::Cadena(const char *texto = "NADA")
{
    _tam=strlen(texto)+1;
    _p = new char[_tam];

    if(_p == nullptr)
    {
        exit(-1);
    }
    strcpy(_p, texto);

    _p[_tam-1] = '\0';

}

void Cadena::mostrar()
{
    cout << _p << endl;
}

int Cadena::getTamanio()
{
    return _tam;
}

const char* Cadena::getP()///El asterisco va antes del ::
{
    return _p;
}


bool Cadena::operator==(Cadena cad)
{
    return !strcmp(_p, cad._p);
}

bool Cadena::operator!=(Cadena cad)
{
    return strcmp(_p, cad._p);
}

bool Cadena::operator>(Cadena cad)
{
    int tam1, tam2;

    tam1 = strlen(_p);
    tam2 = strlen(cad.getP());

    if(tam1 > tam2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Cadena::operator<(Cadena cad)
{
    if(strlen(_p) < strlen(cad.getP())) return true;
    return false;
}

void Cadena::operator=(Cadena cad)
{
    delete []_p;

    _p = new char[cad.getTamanio()];
    if(_p == nullptr) exit(-1);

    strcpy(_p, cad.getP());
}

void Cadena::operator=(std::string str)
{
    delete []_p;

    _p = new char[strlen(str.c_str())];
    if(_p == nullptr) exit(-1);

    strcpy(_p, str.c_str());
}

void Cadena::operator=(const char *cadena)
{
    delete []_p;

    _p = new char[strlen(cadena)];
    if(_p == nullptr) exit(-1);

    strcpy(_p, cadena);
}

void Cadena::operator+=(Cadena cad)
{
    Cadena aux;
    aux = getP();

    delete []_p;

    _p = new char[(strlen(aux.getP())+strlen(cad.getP()))];

    strcat(_p, aux.getP());
    strcat(_p, cad.getP());
}
void Cadena::operator+=(std::string str)
{
    Cadena aux;
    aux = getP();

    delete []_p;

    _p = new char[(strlen(aux.getP())+strlen(str.c_str()))];

    strcat(_p, aux.getP());
    strcat(_p, str.c_str());
}
void Cadena::operator+=(const char *cadena)
{
    Cadena aux;
    aux = getP();

    delete []_p;

    _p = new char[(strlen(aux.getP())+strlen(cadena))];

    strcat(_p, aux.getP());
    strcat(_p, cadena);
}

Cadena Cadena::operator+(Cadena cad)
{
    Cadena aux;
    aux = getP();

    delete []_p;

    _p = new char[(strlen(aux.getP())+strlen(cad.getP()))];

    strcat(_p, aux.getP());

    return strcat(_p, cad.getP());

}
Cadena Cadena::operator+(std::string str)
{
    Cadena aux;
    aux = getP();

    delete []_p;

    _p = new char[(strlen(aux.getP())+strlen(str.c_str()))];

    strcat(_p, aux.getP());

    return strcat(_p, str.c_str());

}
Cadena Cadena::operator+(const char *cadena)
{
    Cadena aux;
    aux = getP();

    delete []_p;

    _p = new char[(strlen(aux.getP())+strlen(cadena))];

    strcat(_p, aux.getP());
    return strcat(_p, cadena);

}


Cadena::~Cadena()
{
    delete []_p;
}
