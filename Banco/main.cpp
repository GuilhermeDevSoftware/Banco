#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

struct Conta {
    string cpf;
    string numero;
    string nome;
    float saldo;

    void sacar( float saque) { //Em c++ o & é uma referencia, ou seja
        if (saque > saldo) {          // o valor da função chamada na main vai receber esse valor
            cout << "Operacao impossivel." << endl;
            return;
        }
        if (saque <= 0) {
            cout << "Operacao impossivel." << endl;
            return;
        }

        saldo -= saque;
    }

    void deposito( float deposito) {
        if (deposito <= 0) {
            cout << "Operacao impossivel." << endl;
            return;
        }

        saldo += deposito;
    }
};


int main()
{
    Conta pessoa1;
    pessoa1.cpf = "421.111.445-6";
    pessoa1.numero = "123.456.789";
    pessoa1.nome = "Guilherme";
    pessoa1.saldo = 300;

    pessoa1.deposito(150);
    pessoa1.sacar(150);

    cout << fixed<< setprecision(2) <<"O saldo de " << pessoa1.nome << " e : " << pessoa1.saldo << endl;

    return 0;
}
