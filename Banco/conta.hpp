#pragma once
#include "pch.h"
#include <string>
#include <iostream>

//Atributos
struct Conta {
    std::string cpf;
    std::string numero;
    std::string nome;
    float saldo;

    void sacar (float saque);
    void depositar (float deposito);
};