#include "ProductosArchivo.h"

ProductosArchivo::ProductosArchivo()
{
    ///Nombre dek archivo, lo usamos en los fopen
    _fileName = "productos.dat";
}

///Guardar un archivo
bool ProductosArchivo::guardar(const Producto &registro)
{
    bool result;
    ///
    FILE *pFile;  ///Enlace (direccon de memoria donde se encuentra)

    pFile = fopen(_fileName.c_str()/*tranforma a const char*/, "ab");///Abrimos

    if(pFile == nullptr) ///Comprobamos
    {
        return false;
    }
    ///Estructua basica

    result = fwrite(&registro, sizeof(Producto), 1, pFile) == 1;///Escribimos
    ///fwrite devuelve la cantidad de registros que puede guardar
    /// 1 se pudo guardar, el == es para que devuelva un true o false

    fclose(pFile);
    ///Tratar de no duplicar codigo

    return result;

    ///Alternativa Koko sin
    //int escribio=fwrite(&reg,sizeof(Alumno),1,pAlumno);
    //fclose(pAlumno);
    //return escribio;

}

///Leer un archivo
Producto ProductosArchivo::leer(int pos)
{
    ///
    FILE *pFile;

    Producto registro;///Creo un porducto para retornar

    pFile = fopen(_fileName.c_str(), "rb");///rb para leer

    if(pFile == nullptr)
    {
        return registro;///Devuelvo un producto
    }
    /// misma estructura

    ///Puntero File, el tamaño en byte que quiero moverme de cada registro (por eso multiplica por pos)
    ///SEEK_SET yo elijo la posicion
    fseek(pFile, sizeof(Producto)*pos, SEEK_SET);
    ///fseek mueve el cursor

    fread(&registro, sizeof(Producto), 1, pFile);///Leemos

    fclose(pFile);///Cerremaos

    return registro;///Retornamos
}

///Saber la cantidad de registros que tengo
int ProductosArchivo::getCantidad()
{
    int total, cantidad;

    ///
    FILE *pFile;
    pFile = fopen(_fileName.c_str(), "rb");///Abrimos y leemos

    if(pFile == nullptr)
    {
        return 0;
    }
    ///Estructura basica

    ///Le pasamos puntero, 0 por no nos movemos y SEEK_END te manda al final
    fseek(pFile, 0, SEEK_END);///Me voy al final de los registros

    total = ftell(pFile);///ftell te devuelve en que byte donde se encuentra el cursor
    ///Si la cantidad de bytes lo divido por el tamaño de un solo registro
    ///obtengo la cantidad de registro que tengo

    fclose(pFile);

    ///sizeof(Producto) devuelve el tamaño de un registro
    return total / sizeof(Producto);
}

///Le mandamos un array de objetos de Producto para leerlo todos juntos
bool ProductosArchivo::leerTodos(Producto registros[], int cantidad)
{
    bool result;
    ///
    FILE *pFile;

    pFile = fopen(_fileName.c_str(), "rb");

    if(pFile == nullptr)
    {
        return false;
    }
    ///Estructura basica
    ///Si lee la misma cantidad que "cantidad" devuelve true
    result = fread(registros, sizeof(Producto), cantidad, pFile) == cantidad;

    fclose(pFile);

    return result;
}

///Sobreescribimos
///Modificamos un registro
bool ProductosArchivo::guardar(int pos, const Producto &registro)
{
    bool result;
    ///
    FILE *pFile;

    pFile = fopen(_fileName.c_str(), "rb+");///rb+ permite moverme y sobreescribir

    if(pFile == nullptr)
    {
        return false;
    }
    ///Estructura basica

    ///Coloca el puntero en la posicion que le pasamos (tamaño de producto * posicion)
    fseek(pFile, sizeof(Producto) * pos, SEEK_SET);

    ///Escribimos
    result = fwrite(&registro, sizeof(Producto), 1, pFile) == 1;

    ///Cerramos
    fclose(pFile);

    ///Retorno true o false
    return result;
}

///Buscamos un producto en particular
int ProductosArchivo::buscar(int codigo)
{

    bool result;
    int pos = 0;
    ///Creamos obj para poder usar getCodigo, para comparar con el recibido por valor -codigo-
    Producto registro;

    ///
    FILE *pFile;

    pFile = fopen(_fileName.c_str(), "rb");

    if(pFile == nullptr)
    {
        return false;
    }
    ///Estructura basica

    ///Itera hasta que no haya más registros
    while(fread(&registro, sizeof(Producto), 1, pFile)==1)
    {
        ///Si hay una coincidencia, corta la ejecución y devuelve la posicion del contador = pos++;
        if(registro.getCodigo() == codigo)
        {
            break;
        }
        pos++;
    }

    ///Cerramos
    fclose(pFile);

    ///Si el registro es igual al codigo, salio cuando lo encontro y no cuando
    ///termino el registro por descarte
    if(registro.getCodigo() == codigo)
    {
        return pos;
    }
    else
    {
        return -1;
    }

}
