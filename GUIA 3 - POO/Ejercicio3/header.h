#pragma once

using namespace std;

class CuentaBancaria
{

private:///Atributos

    int numCuenta;
    float saldoActual;

public:///Metodos

    CuentaBancaria(int, float);

    void depositar(float monto);
    void retirar(float monto);
    float obtenerSaldo();

};

CuentaBancaria::CuentaBancaria(int _numCuenta, float _saldoActual)
    {
        numCuenta = _numCuenta;
        saldoActual = _saldoActual;
    }

void CuentaBancaria::depositar(float monto)
{
    saldoActual += monto;
}

void CuentaBancaria::retirar(float monto)
{
    if(saldoActual < monto) cout << "Saldo insuficiente." << endl;
    else saldoActual -= monto;
}

float CuentaBancaria::obtenerSaldo()
{
    return saldoActual;
}
