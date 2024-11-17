#include <iostream>
#include "Funciones.h"

using namespace std;

///Menu Principal
void mostrarMenu()
{
    int op;

    do
    {
        system("cls");
        cout << "--------MENU PRINCIPAL--------"<<endl;
        cout << "1- AGREGAR INMUEBLE: "<<endl;
        cout << "2- VER INMUEBLES DISPONIBLES: "<<endl;
        cout << "3- ELIMINAR INMUEBLE: "<<endl;
        cout << "0- SALIR: "<<endl;
        cin>>op;

        switch(op)
        {
        case 1:
            system("cls");
            agregarTipoInmueble();
            break;
        case 2:

            system("cls");
            break;
        case 3:

            system("cls");
            break;
        case 0:

            system("cls");
            cout<<"ADIOS!"<<endl;
            break;
        }


    }
    while(op !=0);

}

///Agregar Inmueble
void agregarTipoInmueble()
{
    int op;
    Casa objCasa;
    Casa_quinta objCQuinta;
    Departamento objDepartamento;
    Local objLocal;
    Terreno objTerreno;

    do
    {
        system("cls");
        cout << "--------TIPOS--------"<<endl;
        cout << "1- AGREGAR CASA "<<endl;
        cout << "2- AGREGAR CASA QUINTA "<<endl;
        cout << "3- AGREGAR DEPARTAMENTO "<<endl;
        cout << "4- AGREGAR LOCAL "<<endl;
        cout << "5- AGREGAR TERRENO "<<endl;
        cout << "0- ATRAS: "<<endl;
        cin>>op;

        switch(op)
        {
        case 1:
            system("cls");
            cargarCasa(objCasa);
            system("pause");
            break;
        case 2:
            system("cls");
            cargarCasaQuinta(objCQuinta);
            system("pause");
            break;
        case 3:
            system("cls");
            cargarDepartamento(objDepartamento);
            system("pause");
            break;
        case 4:
            system("cls");
            cargarLocal(objLocal);
            system("pause");
            break;
        case 5:
            system("cls");
            cargarTerreno(objTerreno);
            system("pause");
            break;
        case 0:
            break;
        }

    }
    while(op !=0);
}


///Cargar Casa
Casa cargarCasa(Casa objCasa)
{
    string nombre, apellido, dni, celular;
    int codInmueble, antiguedad;
    float precioVenta, precioAlquiler;
    string calle, numero, localidad;

    float superficieTotal, superficieCubierta, habitaciones;

    cin.ignore();
    cout << "--CARGAR DATOS DEL DUENIO--"<<endl;
    cout<<"Nombre: ";
    getline(cin, nombre);
    cout<<"Apellido: ";
    getline(cin, apellido);
    cout<<"DNI: ";
    getline(cin, dni);
    cout<<"Celular: ";
    getline(cin, celular);

    objCasa.cargarDuenio(nombre, apellido, dni, celular);

    cout<<endl;
    cout<<"---CARGAR DATOS DE LA CASA---"<< endl;
    cout << "Codigo de inmueble: ";
    cin>>codInmueble;
    cin.ignore();
    cout << "Calle: ";
    getline(cin, calle);
    cout << "Numero: ";
    getline(cin, numero);
    cout << "Localidad: ";
    getline(cin, localidad);
    cout << "Antiguedad: ";
    cin>>antiguedad;
    cout<<"Superficie total: ";
    cin>>superficieTotal;
    cout<<"Superficie cubierta: ";
    cin>>superficieCubierta;
    cout<<"Habitaciones: ";
    cin>>habitaciones;
    cout << "Precio Venta: ";
    cin>>precioVenta;
    cout << "Precio Alquiler: ";
    cin>>precioAlquiler;


    return Casa(superficieTotal, superficieCubierta, habitaciones, codInmueble, antiguedad, precioVenta, precioAlquiler, calle, numero, localidad);

}

///Cargar Casa Quinta
Casa_quinta cargarCasaQuinta(Casa_quinta objCasaQuinta)
{
    string nombre, apellido, dni, celular;
    int codInmueble, antiguedad;
    float precioVenta, precioAlquiler;
    string calle, numero, localidad;

    float superficieTotal, superficieCubierta;
    bool pileta, quincho;
    int habitaciones;

    cin.ignore();
    cout << "--CARGAR DATOS DEL DUENIO--"<<endl;
    cout<<"Nombre: ";
    getline(cin, nombre);
    cout<<"Apellido: ";
    getline(cin, apellido);
    cout<<"DNI: ";
    getline(cin, dni);
    cout<<"Celular: ";
    getline(cin, celular);

    objCasaQuinta.cargarDuenio(nombre, apellido, dni, celular);

    cout<<endl;
    cout<<"---CARGAR DATOS DE LA CASA---"<< endl;
    cout << "Codigo de inmueble: ";
    cin>>codInmueble;
    cin.ignore();
    cout << "Calle: ";
    getline(cin, calle);
    cout << "Numero: ";
    getline(cin, numero);
    cout << "Localidad: ";
    getline(cin, localidad);
    cout << "Antiguedad: ";
    cin>>antiguedad;
    cout<<"Superficie total: ";
    cin>>superficieTotal;
    cout<<"Superficie cubierta: ";
    cin>>superficieCubierta;
    cout<<"Habitaciones: ";
    cin>>habitaciones;
    cout<<"Pileta: ";
    cin>>pileta;
    cout<<"Quincho: ";
    cin>>quincho;
    cout << "Precio Venta: ";
    cin>>precioVenta;
    cout << "Precio Alquiler: ";
    cin>>precioAlquiler;


    return Casa_quinta(superficieTotal, superficieCubierta, pileta, quincho, habitaciones, codInmueble, antiguedad, precioVenta, precioAlquiler, calle, numero, localidad);

}

///Cargar Departamento
Departamento cargarDepartamento(Departamento obj)
{
    string nombre, apellido, dni, celular;
    int codInmueble, antiguedad;
    float precioVenta, precioAlquiler;
    string calle, numero, localidad;

    string piso, departamento;
    float superficieTotal, superficieCubierta, superficieBalcon, expensa;
    int habitaciones;
    bool cochera;

    cin.ignore();
    cout << "--CARGAR DATOS DEL DUENIO--"<<endl;
    cout<<"Nombre: ";
    getline(cin, nombre);
    cout<<"Apellido: ";
    getline(cin, apellido);
    cout<<"DNI: ";
    getline(cin, dni);
    cout<<"Celular: ";
    getline(cin, celular);

    obj.cargarDuenio(nombre, apellido, dni, celular);

    cout<<endl;
    cout<<"---CARGAR DATOS DE LA CASA---"<< endl;
    cout << "Codigo de inmueble: ";
    cin>>codInmueble;
    cin.ignore();
    cout << "Calle: ";
    getline(cin, calle);
    cout << "Numero: ";
    getline(cin, numero);
    cout << "Localidad: ";
    getline(cin, localidad);
    cout << "Piso: ";
    getline(cin, piso);
    cout << "Departamento: ";
    getline(cin, departamento);
    cout<<"Habitaciones: ";
    cin>>habitaciones;
    cout<<"Cochera: ";
    cin>>cochera;

    cout << "Antiguedad: ";
    cin>>antiguedad;
    cout << "Precio Venta: ";
    cin>>precioVenta;
    cout << "Precio Alquiler: ";
    cin>>precioAlquiler;
    cout << "Expensas: ";
    cin>>expensa;

    cout<<"Superficie total: ";
    cin>>superficieTotal;
    cout<<"Superficie cubierta: ";
    cin>>superficieCubierta;
    cout<<"Superficie balcon: ";
    cin>>superficieBalcon;

    return Departamento(piso, departamento, superficieTotal, superficieCubierta, habitaciones, superficieBalcon, cochera, expensa, codInmueble, antiguedad, precioVenta, precioAlquiler, calle, numero, localidad);
}

///Cargar Local
Local cargarLocal(Local objLocal)
{
    string nombre, apellido, dni, celular;
    int codInmueble, antiguedad;
    float precioVenta, precioAlquiler;
    string calle, numero, localidad;

    float superficieTotal, superficieEstacionamiento;
    bool zonaComercial;

    cin.ignore();
    cout << "--CARGAR DATOS DEL DUENIO--"<<endl;
    cout<<"Nombre: ";
    getline(cin, nombre);
    cout<<"Apellido: ";
    getline(cin, apellido);
    cout<<"DNI: ";
    getline(cin, dni);
    cout<<"Celular: ";
    getline(cin, celular);

    objLocal.cargarDuenio(nombre, apellido, dni, celular);

    cout<<endl;
    cout<<"---CARGAR DATOS DE LA CASA---"<< endl;
    cout << "Codigo de inmueble: ";
    cin>>codInmueble;
    cin.ignore();
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

    cout<<"Zona comercial: ";
    cin>>zonaComercial;
    cout<<"Superficie total: ";
    cin>>superficieTotal;
    cout<<"Superficie Estacionamiento: ";
    cin>>superficieEstacionamiento;

    return Local(superficieTotal, superficieEstacionamiento, zonaComercial, codInmueble, antiguedad, precioVenta, precioAlquiler, calle, numero, localidad);

}

///Cargar Terreno
Terreno cargarTerreno(Terreno objTerreno)
{
    string nombre, apellido, dni, celular;
    int codInmueble, antiguedad;
    float precioVenta, precioAlquiler;
    string calle, numero, localidad;

    float ancho, largo, superficieConstruible;

    cin.ignore();
    cout << "--CARGAR DATOS DEL DUENIO--"<<endl;
    cout<<"Nombre: ";
    getline(cin, nombre);
    cout<<"Apellido: ";
    getline(cin, apellido);
    cout<<"DNI: ";
    getline(cin, dni);
    cout<<"Celular: ";
    getline(cin, celular);

    objTerreno.cargarDuenio(nombre, apellido, dni, celular);


    cout<<endl;
    cout<<"---CARGAR DATOS DE LA CASA---"<< endl;
    cout << "Codigo de inmueble: ";
    cin>>codInmueble;
    cin.ignore();
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

    cout<<"Superficie Construible: ";
    cin>>superficieConstruible;
    cout<<"Ancho total: ";
    cin>>ancho;
    cout<<"Largo total: ";
    cin>>largo;


    return Terreno(ancho, largo, superficieConstruible, codInmueble, antiguedad, precioVenta, precioAlquiler, calle, numero, localidad);
}
