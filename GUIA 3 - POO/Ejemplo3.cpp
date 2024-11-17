#include <iostream>
using namespace std;

/*
La cuenta corriente de una famosa cantante ha registrado 14 movimientos durante la semana pasada.
Por cada movimiento se registró: - Número de movimiento - Día - Tipo ('E' - Extracción / 'D' - Depósito)
- Importe Existe un registro por movimiento. Se desea calcular e informar: - El saldo final de la cuenta.
- El porcentaje de movimientos de extracción y el porcentaje de depósito. - El depósito de mayor importe
indicando también día y número de movimiento. - La cantidad de movimientos del día 10.
*/

class Registros
{
private:

    int _saldo = 0;
    int _numMovimiento;
    int _dia;
    int _importe;
    char _tipo;

public:
    Registros();
    Registros(int saldo, int numMovimiento, int dia, int importe, char tipo);

    void ingresarMovimento();
    void cargar();
    void mostrar();


};

Registros::Registros(){}

Registros::Registros(int saldo, int numMovimiento, int dia, int importe, char tipo)
{
    _saldo = saldo;
    _numMovimiento = numMovimiento;
    _dia = dia;
    _importe = importe;
    _tipo = tipo;

}

void Registros::cargar()
{
    cout << "-------MENU-------" << endl;
    cout << endl;
    cout << "Numero de movimiento: ";
    cin >> _numMovimiento;
    cout << "Dia: ";
    cin >> _dia;
    cout << "Tipo: D - Deposito, E - Extraccion ";
    cin >> _tipo;
    cout << "Importe: ";
    cin >> _importe;
    _saldo += _importe;
    cout << endl;
}

void Registros::mostrar()
{

    system("cls");
    cout << "-------RESUMEN DE CUENTA-------" << endl;
    cout << endl;
    cout << "SALDO DE LA CUENTA: " << _saldo << endl;
    ///PB
   /* cout << "PORCENTAJE DE MOVIMIENTOS: " << endl;
    cout << endl;
    cout << "EXTRACCIONES: " << porcentaje2 << "%" << endl;
    cout << "DEPOSITOS: " << porcentaje1 << "%" << endl;
    cout << endl;
    ///PC
    cout << "MAYOR IMPORTE DEPOSITADO: " << depositoMax << endl;
    cout << "DIA: " << diaMax << endl;
    cout << "NUMERO DE MOVIMIENTO: " << numMovMax << endl;
    cout << endl;
    ///PD
    cout << "CANTIDAD DE MOVIMIENTOS DIA 10: " << contDia10 << endl;
    cout << endl;
    cout << "--------------------------------" << endl;*/

}



int main ()
{
    int contDia10 = 0;
    int movDep = 0, movExt = 0;
    int depositoMax = 0, diaMax, numMovMax;
    int porcentaje1, porcentaje2;

    Registros objReg;

    objReg.cargar();
    objReg.mostrar();


    /*for(int i=0; i<14; i++)
    {


        if(tipo == 'd' || tipo == 'D')
        {
            saldo += importe;
            movDep++;

            if(depositoMax == 0)
            {
                depositoMax = importe;
                numMovMax = numMovimiento;
                diaMax = dia;
            }
            else if(importe > depositoMax)
            {
                depositoMax = importe;
                numMovMax = numMovimiento;
                diaMax = dia;
            }
        }
        else if(tipo == 'e' || tipo == 'E')
        {
            saldo -= importe;
            movExt++;
        }


        if(dia == 10) contDia10++;

    }
    */

    return 0;
}
