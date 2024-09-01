#include "pch.h"
#include <iostream>
#include <string>
#include "conta.hpp"

using namespace std;

int main()
{
    Conta pessoa1;

    pessoa1.depositar(3000);
    pessoa1.sacar(250.45);
    pessoa1.DefinirNomeTitular("Guilherme");
    pessoa1.DefinirCpf("4555.555.51");
    pessoa1.DefinirNumero("152121");

    cout << "Nome: " << pessoa1.recuperaNome() << endl;
    cout << "Numero: " << pessoa1.recuperaNumero() << endl;
    cout << "SALDO: " << pessoa1.recuperaSaldo() << endl;
    cout << "CPF: " << pessoa1.recuperaCPF() << endl;

    return 0;
}
