#include <iostream>
using namespace std;

 /*Se dispone de la información de los últimos 19 partidos de un futbolista. Por
cada partido se registró:
Número de partido
Minutos jugados
Tarjetas amarillas
Tarjetas rojas
Goles
Existe un registro para cada partido. Los mismos se encuentran ordenados por
número de partido. Se pide calcular e informar:

A) La cantidad de partidos que no jugó (partidos con minutos igual a cero)
B) La cantidad de partidos que jugó por completo (minutos >= 90)
C) El promedio de tarjetas recibidas por partido.
D) El número de partido en el que haya convertido mayor cantidad de goles.
Indicar también los goles convertidos.
E) La mejor racha de partidos convirtiendo goles. Se debe mostrar la mayor
cantidad de partidos consecutivos en los que haya convertido.
*/

int main (){

    int const TAM = 4;

    int numPartido, minutos, tarAmarilla, tarRojas, goles;
    int PA_cont = 0, PB_cont = 0, PC_acum = 0, PC_promedio, PD_goleMax = 0, PD_numPar;
    int PE_racha = 0, PE_rachaMax = 0;




    for(int i=0; i<TAM; i++)
    {

        cout << "NUMERO DE PARTIDO: ";
        cin >> numPartido;

        cout << "MINUTOS JUGADOS: ";
        cin >> minutos;

        cout << "TARJETAS ROJAS: ";
        cin >> tarRojas;

        cout << "TARJETAS AMARILLAS: ";
        cin >> tarAmarilla;

        cout << "GOLES: ";
        cin >> goles;

        ///PA
        if(minutos == 0) PA_cont++;
        ///PB
        if(minutos >= 90) PB_cont++;

        ///PC
        PC_acum += tarAmarilla;
        PC_acum += tarRojas;

        ///PD
        if(PD_goleMax == 0)
        {
            PD_goleMax = goles;
            PD_numPar = numPartido;
        }
        else if(goles > PD_goleMax)
        {
            PD_goleMax = goles;
            PD_numPar = numPartido;
        }

        ///PE
        if(goles > 0)
        {
            PE_racha++;

            if(PE_racha > PE_rachaMax)
            {
                PE_rachaMax = PE_racha;
            }
        }
        else
        {
            PE_racha = 0;
        }

    }

    ///PA
    cout << "CANTIDAD DE PARTIDOS QUE NO JUGO: " << PA_cont << endl;


    ///PB
    cout << "CANTIDAD DE PARTIDOS QUE JUGO POR COMPLETO: " << PB_cont << endl;

    ///PC
    PC_promedio = PC_acum / TAM;
    cout << "PROMEDIO DE TARJETAS: " <<PC_promedio << endl;


    ///PD
    cout << "NUM PARTIDO MAXIMO: " << PD_numPar << " CANT: " << PD_goleMax << endl;

    ///PE
    cout << "MAYOR RACHA: " << PE_rachaMax << endl;


	return 0;
}
