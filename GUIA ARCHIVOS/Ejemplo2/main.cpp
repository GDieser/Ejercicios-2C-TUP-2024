#include <iostream>
#include <cstring>

using namespace std;

class Producto
{
private:
    int _precio;
    int _stock;
    char _nombre[20];

public:
    Producto()
    {
        _precio = 0;
        _stock = 0;
        strcpy_s(_nombre, "NADA");
    }

    Producto(int precio, int stock, string nombre)
    {
        setPrecio(precio);
        setStock(stock);
        setNombre(nombre);
    }

    void setPrecio(int precio)
    {
        _precio = precio;
    }

    void setStock(int stock)
    {
        _stock = stock;
    }

    void setNombre(string nombre)
    {
        strcpy(_nombre, nombre.c_str());
    }

    int getPrecio() const
    {
        return _precio;
    }

    int getStock() const
    {
        return _stock;
    }

    string getNombre() const
    {
        return _nombre;
    }

};

Producto cargarDatos()
{
    string nombre;
    int stock;
    int precio;

    cout << "Producto: ";
    cin >> nombre;

    cout << "Precio: ";
    cin >> precio;

    cout << "Stock: ";
    cin >> stock;

    return Producto(precio, stock, nombre);
}


void mostrarDatos(Producto producto)
{
    cout << "Producto: " << producto.getNombre() << endl;

    cout << "Precio: " << producto.getPrecio() << endl;

    cout << "Stock: " << producto.getStock() << endl;

}

int main()
{
    Producto producto;
    FILE *pFile;





    int op;

    do
    {
        system("cls");
        cout << "---------MENU---------" << endl;
        cout << "1- AGREGAR PRODUCTO" << endl;
        cout << "2- LEER PRODUCTOS" << endl;
        cout << endl;
        cout << "0- SALIR" << endl;
        cin >> op;

        switch(op)
        {
        case 1:
            system("cls");
            producto = cargarDatos();

            pFile = fopen("prueba.dat", "ab");

            fwrite(&producto, sizeof(Producto), 1, pFile);

            fclose(pFile);
            system("pause");

            break;

        case 2:
            system("cls");

            pFile = fopen("prueba.dat", "rb");

            while(fread(&producto, sizeof(Producto), 1, pFile) == 1)
            {
                cout << endl;

                mostrarDatos(producto);
            }


            fclose(pFile);

            system("pause");

            break;

        case 0:
            system("cls");
            cout << "Adios!" << endl;
            system("pause");
            break;
        }

    }
    while(op != 0);





    return 0;
}
