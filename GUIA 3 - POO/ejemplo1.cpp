#include <iostream>

using namespace std;

class Examen{
  private:
    int dia, mes, anio, nota;
    char apellido[50], nombre[50], materia[50];
  public:
    void cargar(){
      cout << "Apellido: ";
      cin >> apellido;
      cout << "Nombre: ";
      cin >> nombre;
      cout << "Materia: ";
      cin >> materia;
      cout << "Fecha (DD MM AAAA): ";
      cin >> dia >> mes >> anio;
      cout << "Calificación: ";
      cin >> nota;
    }
    void mostrar(){
      cout << endl << apellido << ", " << nombre << " - " << dia <<
      "/" << mes << "/" << anio << " - Calificación: " << nota;
    }
};

int main(){
  Examen reg;
  reg.cargar();
  reg.mostrar();
  return 0;
}
