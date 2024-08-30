#include "pch.h"
#include "conta.hpp"

//Metodos
void Conta::sacar (float saque) {//Em c++ o & é uma referencia, ou seja
    if (saque > saldo) {          // o valor da função chamada na main vai receber esse valor
        std::cout << "Operacao impossivel." << std::endl;
        return;
    }
    if (saque <= 0) {
        std::cout << "Operacao impossivel." << std::endl;
        return;
    }

    saldo -= saque;

}

void Conta::depositar(float deposito) {
    if (deposito <= 0) {
        std::cout << "Operacao impossivel." << std::endl;
        return;
    }

    saldo += deposito;
}