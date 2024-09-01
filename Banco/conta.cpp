#include "pch.h"
#include "conta.hpp"

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

void Conta::DefinirNomeTitular(std::string Nome) {
    nomeTitular = Nome;
}

void Conta::DefinirNumero(std::string Numero) {
    numero = Numero;
}

void Conta::DefinirCpf(std::string CPF) {
    cpf = CPF;
}

std::string Conta::recuperaNome() {
    return nomeTitular;
}

std::string Conta::recuperaNumero() {
    return numero;
}

float Conta::recuperaSaldo() {
    return saldo;
}

std::string Conta::recuperaCPF() {
    return cpf;
}