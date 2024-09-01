#include "pch.h"
#include "conta.hpp"

using namespace std;

void exibiSaldo(const Conta &conta) {
    cout << "Saldo R$" << conta.recuperaSaldo() << endl;
}

int main()
{
    Conta pessoa1 ("123.456.789-10", "12542-6", "Ronaldo");

    pessoa1.depositar(400);
    pessoa1.sacar(100.00);

    cout << "Nome: " << pessoa1.recuperaNome() << endl;
    cout << "Numero: " << pessoa1.recuperaNumero() << endl;
    exibiSaldo(pessoa1);
    cout << "CPF: " << pessoa1.recuperaCPF() << endl;

    return 0;
}
