#pragma once


class DetalleRutina
{
public:
    DetalleRutina();

    DetalleRutina(int *idEjercicios);

    int *getIdEjercicios();

    void setIdEjercicios(int *idEjercicios);


private:

    int _idEjercicios[5];

};
