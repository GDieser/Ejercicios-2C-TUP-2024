#pragma once
///Agregamos para usar los string
#include <string>
#include "Producto.h"

class ProductosArchivo{
public:
  ProductosArchivo();///Constructor

  bool guardar(const Producto &registro);

  bool guardar(int pos, const Producto &registro);

  int buscar(int codigo);

  Producto leer(int pos);///Le mandamos la posicion del archivo

  bool leerTodos(Producto registros[], int cantidad);

  int getCantidad();

private:
    ///Para asignar el nombre de los archivos
  std::string _fileName;
};
