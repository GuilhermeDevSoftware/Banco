#pragma once
#include "pch.h"
#include <string>
#include <iostream>

//Atributos
class Conta { //Membro é qualquer coisa que pertence a definição de conta
private: // Por padrão é privado, só estou especificando
    std::string cpf;
    std::string numero;
    std::string nomeTitular;
    float saldo;

public: // Aqui estou transformando em publico, ou seja, qualquer um pode acessar.
    Conta(std::string cpf, std::string numero, std::string nomeTitular);
    void sacar (float saque);
    void depositar (float deposito);

    //Mostrando dados
    std::string recuperaNome () const;
    std::string recuperaNumero () const;
    std::string recuperaCPF () const;
    float recuperaSaldo () const;
};