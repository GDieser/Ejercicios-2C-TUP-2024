#pragma once
#include "Casa.h"
#include "Casa_quinta.h"
#include "Departamento.h"
#include "Local.h"
#include "Terreno.h"

using namespace std;

Casa cargarCasa(Casa objCasa);

Casa_quinta cargarCasaQuinta(Casa_quinta objCasaQuinta);

Departamento cargarDepartamento(Departamento obj);

Local cargarLocal(Local objLocal);

Terreno cargarTerreno(Terreno objTerreno);

void mostrarMenu();

void agregarTipoInmueble();
