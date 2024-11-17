#include <iostream>
#include "Herramienta.h"
#include "Martillo.h"
#include "Destornillador.h"
#include "Taladro.h"
#include "TaladroPercutor.h"

using namespace std;

int main()
{
    Herramienta objHerr(1.5, 25);
    objHerr.mostrarInformacion();

    cout << endl;
    cout << "------------------------" << endl;
    cout << endl;

    Martillo objMar("Martillo", 2.5, 35.5);
    objMar.setTipoCaebza("Bola");
    objMar.mostrarInformacion();

    cout << endl;
    cout << "------------------------" << endl;
    cout << endl;

    Destornillador objDes("Destornillador", 0.5, 15.5);
    objDes.setTipoPunta("Estrella");
    objDes.mostrarInformacion();

    cout << endl;
    cout << "------------------------" << endl;
    cout << endl;

    Taladro objTal("Taladro", 2.5, 35.6);
    objTal.setPotencia(2500);
    objTal.mostrarInformacion();

    cout << endl;
    cout << "------------------------" << endl;
    cout << endl;

    TaladroPercutor objTal2("Ta.Percutor", 4.5, 55.7);
    objTal2.setGolpesPorMinuto(1250);
    objTal2.mostrarInformacion();

    cout << endl;
    cout << "------------------------" << endl;
    cout << endl;

    return 0;
}
