# Banco em C++

Este é um projeto de um sistema de banco desenvolvido em C++ utilizando o paradigma de Programação Orientada a Objetos (POO). O sistema simula operações bancárias básicas, como criação de contas, depósitos, saques, transferências e consultas de saldo.

## Funcionalidades

- **Criação de Conta:** Permite criar novas contas bancárias com informações como nome do titular, número da conta e saldo inicial.
- **Depósito:** Realiza depósitos em uma conta existente.
- **Saque:** Realiza saques de uma conta, verificando se há saldo suficiente.
- **Transferência:** Permite a transferência de valores entre contas diferentes.
- **Consulta de Saldo:** Exibe o saldo atual da conta.

## Estrutura do Projeto

O projeto é estruturado em classes para representar os diferentes componentes do sistema bancário:

- **Conta:** Classe principal que representa uma conta bancária. Contém métodos para operações básicas como depósito, saque e transferência.
- **Banco:** Classe que gerencia um conjunto de contas, permitindo criar novas contas e realizar operações entre elas.
- **Cliente:** Classe que representa um cliente do banco, armazenando informações pessoais e as contas associadas.
