#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

struct Conta {
    string cpf;
    string numero;
    string nome;
    float saldo;
};

void sacar(Conta &conta, float saque) { //Em c++ o & é uma referencia, ou seja
    if (saque > conta.saldo) {          // o valor da função chamada na main vai receber esse valor
        cout << "Operacao impossivel." << endl;
        return;
    }
    if (saque <= 0) {
        cout << "Operacao impossivel." << endl;
        return;
    }

    conta.saldo -= saque;
}

void deposito(Conta &conta, float deposito) {
    if (deposito <= 0) {
        cout << "Operacao impossivel." << endl;
        return;
    }
    
    conta.saldo += deposito;
}

int main()
{
    Conta pessoa1;
    pessoa1.cpf = "421.111.445-6";
    pessoa1.numero = "123.456.789";
    pessoa1.nome = "Guilherme";
    pessoa1.saldo = 250.55;

    deposito(pessoa1, 345.45);

    cout << fixed<< setprecision(2) <<"O saldo de " << pessoa1.nome << " e : " << pessoa1.saldo << endl;

    return 0;
}
