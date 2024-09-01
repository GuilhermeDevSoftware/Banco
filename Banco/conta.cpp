#include "pch.h"
#include "conta.hpp"

Conta::Conta(std::string cpf, std::string numero, std::string nomeTitular) :
cpf(cpf), 
numero(numero), 
nomeTitular(nomeTitular), 
saldo(0)
{
}

//Metodos
void Conta::sacar (float saque) {
    if (saque > saldo) {          
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

std::string Conta::recuperaNome() const{
    return nomeTitular;
}

std::string Conta::recuperaNumero() const{
    return numero;
}

float Conta::recuperaSaldo () const{
    return saldo; // Saldo manipulado do depositar e sacar
}

std::string Conta::recuperaCPF() const{
    return cpf;
}