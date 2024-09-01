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
    float saldo = 0;

public: // Aqui estou transformando em publico, ou seja, qualquer um pode acessar.
    void sacar (float saque);
    void depositar (float deposito);
    void DefinirNomeTitular (std::string Nome);
    void DefinirNumero (std::string Numero);
    void DefinirCpf(std::string CPF);

    //Mostrando dados
    std::string recuperaNome ();
    std::string recuperaNumero ();
    std::string recuperaCPF ();
    float recuperaSaldo();
};