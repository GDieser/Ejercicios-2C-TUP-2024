#pragma once


class Cadena
{
    public:

        Cadena(const char *texto);///No es necesario aclarar el valor por defecto acá
        ~Cadena();

        void mostrar();

        int getTamanio();
        const char *getP();

        bool operator==(Cadena cad);
        bool operator!=(Cadena cad);
        bool operator>(Cadena cad);
        bool operator<(Cadena cad);

        void operator=(Cadena cad);
        void operator=(std::string str);
        void operator=(const char *cadena);

        void operator+=(Cadena cad);
        void operator+=(std::string str);
        void operator+=(const char *cadena);

        Cadena operator+(Cadena cad);
        Cadena operator+(std::string str);
        Cadena operator+(const char *cadena);

    private:

        char *_p;
        int _tam;
};


