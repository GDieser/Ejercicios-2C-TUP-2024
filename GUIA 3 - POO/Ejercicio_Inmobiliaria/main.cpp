#include <iostream>
#include <cstring>

#include "Duenio.h"
#include "Inmueble.h"

#include "Casa.h"
#include "Casa_quinta.h"
#include "Departamento.h"
#include "Local.h"
#include "Terreno.h"
#include "Funciones.h"

using namespace std;

int main()
{
    mostrarMenu();

    return 0;
}


/*
Duenio cargarDuenio()
{
    string nombre, apellido, dni, celular;

    cout << "--CARGAR--"<<endl;
    cout<<"Nombre: ";
    getline(cin, nombre);
    cout<<"Apellido: ";
    getline(cin, apellido);
    cout<<"DNI: ";
    getline(cin, dni);
    cout<<"Celular: ";
    getline(cin, celular);

    return Duenio(nombre, apellido, dni, celular);
}

void mostrarDuenio(Duenio obj)
{
    cout << "--MOSTRAR--"<<endl;
    cout<<"Nombre: "<<obj.getNombre()<<endl;
    cout<<"Apellido: "<<obj.getApellido()<<endl;
    cout<<"DNI: "<<obj.getDNI()<<endl;
    cout<<"Celular: "<<obj.getCelular()<<endl;;
}

Inmueble cargarInmueble()
{
    int codInmueble;
    int antiguedad;
    float precioVenta;
    float precioAlquiler;
    string calle;
    string numero;
    string localidad;

    cout << "--CARGAR--"<<endl;
    cout << "Calle: ";
    getline(cin, calle);
    cout << "Numero: ";
    getline(cin, numero);
    cout << "Localidad: ";
    getline(cin, localidad);
    cout << "Codigo de inmueble: ";
    cin>>codInmueble;
    cout << "Antiguedad: ";
    cin>>antiguedad;
    cout << "Precio Venta: ";
    cin>>precioVenta;
    cout << "Precio Alquiler: ";
    cin>>precioAlquiler;


    cout<<endl;
    cout<<"---CARGAR DATOS DE LA CASA---"<< endl;
    cout << "Codigo de inmueble: ";
    cin>>codInmueble;
    cout << "Calle: ";
    getline(cin, calle);
    cout << "Numero: ";
    getline(cin, numero);
    cout << "Localidad: ";
    getline(cin, localidad);
    cout << "Antiguedad: ";
    cin>>antiguedad;
    cout << "Precio Venta: ";
    cin>>precioVenta;
    cout << "Precio Alquiler: ";
    cin>>precioAlquiler;

    cout<<"Superficie total: ";
    cin>>superficieTotal;
    cout<<"Superficie cubierta: ";
    cin>>superficieCubierta;



    cout<<"Habitaciones: ";
    cin>>habitaciones;

    return Inmueble(codInmueble, antiguedad, precioVenta, precioAlquiler, calle, numero, localidad);
}

void mostraInmueble(Inmueble obj)
{
    cout << "--MOSTRAR--"<<endl;
    cout << "Calle: "<<obj.getCalle()<<endl;
    cout << "Numero: "<<obj.getNumero()<<endl;
    cout << "Localidad: "<<obj.getLocalidad()<<endl;
    cout << "Codigo de inmueble: "<<obj.getCodigo()<<endl;
    cout << "Antiguedad: "<<obj.getAntiguedad()<<endl;
    cout << "Precio Venta: "<<obj.getPrecioVenta()<<endl;
    cout << "Precio Alquiler: "<<obj.getPrecioAlquiler()<<endl;
}
*/
