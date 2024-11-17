#include <iostream>
#include <cstring>

#include "Producto.h"
#include "ProductosArchivo.h"

using namespace std;

/// PascalCase -> normalmente se utiliza para los identificadores de clases

void mostrarMenu();

Producto cargarProducto();

void mostrarProducto(Producto producto);

void mostrarTodos();

void guardarProducto();

void modificarProducto();

Producto modificarProductoExistente(int codAnterior);

void eliminarProducto();

void ordenarAlfabeticamente();

void mostrarProductoPorCodigo();

void restaurarProductoPorCodigo();


int main()
{
    mostrarMenu();

    return 0;
}

void mostrarMenu()
{
    int op;
    Producto producto;

    do
    {
        system("cls");
        cout << " ---------Menu----------" << endl;
        cout << "1- Cargar Producto (codigo sea autonumerico)" << endl;
        cout << "2- Mostrar todos los productos" << endl;
        cout << "3- Modificar un producto por Codigo" << endl;
        cout << "4- Eliminar un producto por Codigo" << endl;
        cout << "5- Mostrar los productos ordenados por nombre" << endl;
        cout << "6- Bucar producto por Codigo" << endl;
        cout << "7- Restaurar producto por codigo" << endl;
        cout << endl;
        cout << "0- Salir" << endl;
        cin >> op;

        system("cls");
        switch(op)
        {
        case 1:
            guardarProducto();
            system("pause");
            break;
        case 2:
            mostrarTodos();
            system("pause");
            break;
        case 3:
            modificarProducto();
            system("pause");
            break;
        case 4:
            eliminarProducto();
            system("pause");
            break;
        case 5:
            ordenarAlfabeticamente();
            system("pause");
            break;
        case 6:
            mostrarProductoPorCodigo();
            system("pause");
            break;
        case 7:
            restaurarProductoPorCodigo();
            system("pause");
            break;
        case 0:

            cout << "ADIOS" << endl;
            break;
        }

    }
    while( op != 0);

}



Producto cargarProducto()
{
    int codigo, stockMinimo, stockActual;
    float precio;
    string nombre;

    ProductosArchivo pa;

    codigo = (pa.getCantidad()+1);

    cout << "Ingrese stock minimo: ";
    cin >> stockMinimo;

    cout << "Ingrese stock actual: ";
    cin >> stockActual;

    cout << "Ingrese precio: ";
    cin >> precio;

    cout << "Ingrese nombre: ";
    cin.ignore();
    getline(cin, nombre);

    return Producto(codigo, stockActual, stockMinimo, precio, nombre );
}

void mostrarProducto(Producto producto)
{
    if(producto.getEliminado() == 0)
    {
        cout << "---------------------------" << endl;
        cout << "Codigo: " << producto.getCodigo() << endl;
        cout << "Nombre: " << producto.getNombre() << endl;
        cout << "Precio: " << producto.getPrecio() << endl;
        cout << "Stock Actual: " << producto.getStockActual() << endl;
        cout << "Stock Minimo: " << producto.getStockMinimo() << endl;
        cout << "Eliminado: " << producto.getEliminado() << endl;
    }


}

///Podemos leer solo 1 vez, lo guardamos y podemos verlo la veces que queramos
///Ademas podemos ordenar el array
void mostrarTodos()
{
    ///Creamos obj de ProductosArchivos
    ProductosArchivo pa;

    ///Creamos puntero obj de Producto
    Producto *productos;

    ///Recibimos la cantidad de registros dentro del archivo
    int cantidad = pa.getCantidad();

    ///Memoria dinamica, le asigno la cantidad de registros que hay dentro del archivo
    productos = new Producto[cantidad];

    ///Mandamos el array (puntero obj) con la cantidad de registro que hay (que seria el tam del vect)
    pa.leerTodos(productos, cantidad);

    ///Leemos todos los registros guardados en el array
    for(int i=0; i < cantidad ; i++)
    {
        mostrarProducto(productos[i]);
    }
    ///liberamos memoria
    delete [] productos;
}

///Guardar nuevos registros
void guardarProducto()
{
    ///Cremoas obj de Producto
    Producto p;
    ///Cremoas obj de ProductosArchivo
    ProductosArchivo pa;

    ///Cargamos el obj
    p = cargarProducto();

    ///Y guardamos en el archivo (es un bool y si no puede guardar devuelve false)
    if(pa.guardar(p))
    {
        cout << "Producto guardado con exito!"<<endl;
    }
    else
    {
        cout << "No se pudo guardar el producto" << endl;
    }
}

void modificarProducto()
{
    ///Creamos obj
    Producto p;
    ///Creamos obj
    ProductosArchivo pa;

    int codigo;

    ///Buscamos el codigo del producto
    cout << "Ingrese codigo a modificar: ";
    cin >> codigo;

    ///Mandamos el valor y guardamos su posicion
    int pos = pa.buscar(codigo);

    ///Posicion, si es -1 no lo encontro
    if(pos != -1)
    {
        ///Leemos solo el producto antes de modificar
        p = pa.leer(pos);

        cout << "Datos del producto: "<< endl;
        mostrarProducto(p);


        cout << "MODIFICAR: " << endl;

        ///Agregamos los nuevos datos
        p = modificarProductoExistente(codigo);
        ///Y los guardamos en la posicion que recibimos en pa.buscar
        pa.guardar(pos, p);
    }
    else
    {
        cout << "El producto no se encuentra en el sistema." << endl;
    }

}

Producto modificarProductoExistente(int codAnterior)
{
    int codigo, stockMinimo, stockActual;
    float precio;
    string nombre;

    codigo = codAnterior;

    cout << "Ingrese stock minimo: ";
    cin >> stockMinimo;

    cout << "Ingrese stock actual: ";
    cin >> stockActual;

    cout << "Ingrese precio: ";
    cin >> precio;

    cout << "Ingrese nombre: ";
    cin.ignore();
    getline(cin, nombre);

    return Producto(codigo, stockActual, stockMinimo, precio, nombre );
}


void eliminarProducto()
{
    Producto p;
    ProductosArchivo pa;

    int codigo;

    cout << "Ingrese codigo a eliminar: ";
    cin >> codigo;

    int pos = pa.buscar(codigo);

    if(pos != -1)
    {
        p = pa.leer(pos);

        cout << "Datos del producto a eliminar: "<< endl;
        mostrarProducto(p);

        p.setEliminado(1);

        pa.guardar(pos, p);

    }
    else
    {
        cout << "El producto no se encuentra en el sistema." << endl;
    }

}

void ordenarAlfabeticamente()
{
    ProductosArchivo pa;
    Producto objProducto;

    int cantidad = pa.getCantidad();

    Producto *vectRegistros = new Producto[cantidad];

    if(vectRegistros == nullptr)
    {
        return;
    }

    int cont = 0;
    for(int i=0; i<cantidad; i++)
    {
        objProducto = pa.leer(i);
        if(objProducto.getEliminado() == 0)
        {
            vectRegistros[i] = objProducto;
            cont++;
        }
    }

    Producto aux;///Swap
    for (int i = 0; i < cont-1; i++)
    {

        for (int j = i+1; j < cont; j++)
        {
            if (strcmp(vectRegistros[i].getNombre().c_str(), vectRegistros[j].getNombre().c_str()) > 0)
            {
                aux = vectRegistros[i];
                vectRegistros[i] = vectRegistros[j];
                vectRegistros[j] = aux;
            }

        }
    }

    for (int i = 0; i < cont; i++)
    {
        cout << endl;
        vectRegistros[i].mostrarProducto();
    }

    delete []vectRegistros;

}

void mostrarProductoPorCodigo()
{

    Producto p;
    ProductosArchivo pa;

    int codigo;

    cout << "Ingrese codigo a buscar: ";
    cin >> codigo;

    int pos = pa.buscar(codigo);

    if(pos != -1)
    {

        p = pa.leer(pos);

        cout << "Datos del producto: "<< endl;
        mostrarProducto(p);
    }
    else
    {
        cout << "El producto no se encuentra en el sistema." << endl;
    }
}

void restaurarProductoPorCodigo()
{
        Producto p;
    ProductosArchivo pa;

    int codigo;

    cout << "Ingrese codigo a restaurar: ";
    cin >> codigo;

    int pos = pa.buscar(codigo);

    if(pos != -1)
    {
        p = pa.leer(pos);

        cout << "Datos restaurados: "<< endl;
        p.setEliminado(0);
        pa.guardar(pos, p);

        mostrarProducto(p);

    }
    else
    {
        cout << "El producto no se encuentra en el sistema." << endl;
    }
}

