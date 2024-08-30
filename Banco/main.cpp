#include "pch.h"
#include <iostream>
#include <iomanip>
#include "conta.hpp"

using namespace std;

int main()
{
    Conta pessoa1;
    pessoa1.cpf = "421.111.445-6";
    pessoa1.numero = "123.456.789";
    pessoa1.nome = "Guilherme";
    pessoa1.saldo = 300;

    pessoa1.depositar(3000);
    pessoa1.sacar(250);

    cout << "O saldo de " << pessoa1.nome << " e : " << pessoa1.saldo << endl;

    return 0;
}
