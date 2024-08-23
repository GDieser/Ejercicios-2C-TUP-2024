#include <iostream>
using namespace std;

/*
Una persona desea registrar los gastos realizados durante un mes. Ha definido que los gastos se
pueden categorizar en:

ID de Categoría   Nombre de categoría
    1                 Servicios
    2                 Alimentación
    3                 Limpieza
    4                 Transporte
    5                 Educación
    6                 Salud
    7                 Ocio
    8                 Impuestos
    9                 Vestimenta
    10                Inversiones

Por cada gasto registrado se ingresa el siguiente registro:
- Día (número entero)
- ID de Categoría de gasto (número entero entre 1 y 10)
- Importe del gasto (número real)

La información no se encuentra agrupada ni ordenada. No se sabe de antemano cuántos
registros de gastos habrá. El fin de la carga de información se indica con un día igual a cero.

Calcular e informar:
A) La categoría de gasto que mayor dinero se haya destinado y cuál es dicha categoría.

B) Por cada categoría de gasto, el nombre de la categoría y el total acumulado en concepto
de gastos del mes.

C) La cantidad de categorías de gasto que no hayan registrado movimientos.

D) Por cada día, la cantidad de gastos que se hayan registrado. Sólo mostrar aquellos registros
de días que hayan registrado gastos.

*/

void ingresosDatos(int dia, int IDcategoria, int importe, int vecCat[], int tam, int vecDia[], int d);

int calcularMayorGasto(int vecCat[], int tam);

void mostrarGastos(int vecCat[], int tam);

int main ()
{
    int const tam = 10, d = 31;
    int dia, IDcategoria, importe;
    int vecCategoria[tam] {};
    int vecDia[d]{};

    int PA_MayorGasto;

    ingresosDatos(dia, IDcategoria, importe, vecCategoria, tam, vecDia, d);

    ///PA
    PA_MayorGasto = calcularMayorGasto(vecCategoria, tam);

    cout << "La categoria con mayores gastos fue : #" << PA_MayorGasto << " ";

    switch(PA_MayorGasto)
    {
    case 1:
        cout << "Servicios" << endl;
        break;
    case 2:
        cout << "Alimentacion" << endl;
        break;
    case 3:
        cout << "Limpieza" << endl;
        break;
    case 4:
        cout << "Transporte" << endl;
        break;
    case 5:
        cout << "Educacion" << endl;
        break;
    case 6:
        cout << "Salud" << endl;
        break;
    case 7:
        cout << "Ocio" << endl;
        break;
    case 8:
        cout << "Ipuestos" << endl;
        break;
    case 9:
        cout << "Vestimenta" << endl;
        break;
    case 10:
        cout << "Inversion" << endl;
        break;

    default:
        break;
    }
    cout << endl;

    ///PB
    mostrarGastos(vecCategoria, tam);

    ///PC

    cout << "Las categorias que no registraron movimientos: " << endl;

    for(int i=0; i<tam; i++)
    {
        if(vecCategoria[i] == 0)
        {
            cout << " ID #" << i+1 << endl;
        }
    }

    ///PD
    cout << endl;
    for(int y=0; y<d; y++)
    {
        if(vecDia[y] > 0)
        {
            cout << "-- El dia " << y+1 << " registro: $" << vecDia[y] << endl;
        }
    }


    return 0;
}


void ingresosDatos(int dia, int IDcategoria, int importe, int vecCat[], int tam, int vecDia[], int d)
{
    cout << "Ingrese dia: " << endl;
    cin >> dia;

    while(dia != 0)
    {

        cout << "Ingrese ID de Categoria (1 a 10): " << endl;
        cin >> IDcategoria;

        cout << "Ingrese importe de gasto: " << endl;
        cin >> importe;

        vecCat[IDcategoria - 1] += importe;

        vecDia[dia-1] += importe;

        cout << "Ingrese dia: " << endl;
        cin >> dia;
    }
}

int calcularMayorGasto(int vecCat[], int tam)
{
    int mayor = 0, IDMayor;

    for(int x=0; x < tam; x++)
    {
        if(vecCat[x] > mayor)
        {
            mayor = vecCat[x];
            IDMayor = x + 1;
        }
    }

    return IDMayor;
}

void mostrarGastos(int vecCat[], int tam)
{

    cout << "---El total acumulado para cada categoria es:" << endl;
    cout << endl;

    for(int x=0; x<tam; x++)
    {
        switch(x+1)
        {
        case 1:
            cout<< "#" << x+1 <<" Servicios: $" << vecCat[x]<< endl;
            break;
        case 2:
            cout<< "#" << x+1 <<" Alimentacion: $" << vecCat[x]<< endl;
            break;
        case 3:
            cout<< "#" << x+1 <<" Limpieza: $" << vecCat[x]<< endl;
            break;
        case 4:
            cout<< "#" << x+1 <<" Transporte: $" << vecCat[x]<< endl;
            break;
        case 5:
            cout<< "#" << x+1 <<" Educacion: $" << vecCat[x]<< endl;
            break;
        case 6:
            cout<< "#" << x+1 <<" Salud: $" << vecCat[x]<< endl;
            break;
        case 7:
            cout<< "#" << x+1 <<" Ocio: $" << vecCat[x]<< endl;
            break;
        case 8:
            cout<< "#" << x+1 <<" Ipuestos: $" << vecCat[x]<< endl;
            break;
        case 9:
            cout<< "#" << x+1 <<" Vestimenta: $" << vecCat[x]<< endl;
            break;
        case 10:
            cout<< "#" << x+1 <<" Inversion: $" << vecCat[x]<< endl;
            break;

        default:
            break;
        }
    }
}
