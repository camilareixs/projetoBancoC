#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

void cadastrarCliente(clientedesc *Clientes) {
    if (Clientes -> qtd >= 1000) { 
    printf("Você ultrapassou o limite de clientes");
    return; }

    clientedesc NovoCliente;

printf("Digite o seu nome: \n");
fgets(&NovoCliente.nome, sizeof(nome), stdin);

printf("Digite seu CPF: \n");
fgets(&NovoCliente.cpf, sizeof(cpf), stdin);

printf("Qual seria seu tipo de conta?\n 
1 - Conta comum \n 
2 - Conta Plus com beneficios \n");
fgets(&NovoCliente.conta, sizeof(conta), stdin);

printf("Qual será o seu valor inicial?"); 
fgets(&NovoCliente.valorinicial, sizeof(valorinicial), stdin);

printf("Qual será sua senha de seguranca com até 10 digitos"); 
fgets(&NovoCliente.senha, sizeof(senha), stdin);

NovoCliente.saldoatual = NovoCliente.valorinicial;
Clientes->Clientes[Clientes->qtd] = NovoCliente;
Clientes->qtd++;
printf("Cliente cadastrado com sucesso.\n");

}



void Listarclientes(clientedesc *Clientes) {
    if (Clientes->qtd == 0) {
        printf("Nenhum cliente encontrado.\n");
        return;
    }

    printf("Aqui está a lista de todos os seus clientes:\n");

    for (int i = 0; i < Clientes->qtd; i++) {
        printf("Nome: %s\n", Clientes->Clientes[i].nome);
        printf("CPF: %ld\n", Clientes->Clientes[i].cpf);
        printf("Tipo de conta: %d\n", Clientes->Clientes[i].tipodeconta);
        printf("Valor inicial: %.2lf\n", Clientes->Clientes[i].valorinicial);
        printf("Saldo atual: %.2f\n\n", Clientes->Clientes[i].saldoatual);
    }
}

void ApagarCliente(totalclientes *TodosClientes, long cpf) {
    int index = -1;
    for (int i = 0; i < TodosClientes->qtd; i++) {
        if (TodosClientes->Clientes[i].cpf == cpf) {
            index = i;
            break;
        }
    }

    if (index != -1) {
       
        for (int i = index; i < TodosClientes->qtd - 1; i++) {
            TodosClientes->Clientes[i] = TodosClientes->Clientes[i + 1];
        }
        TodosClientes->qtd--;
        printf("Cliente removido com sucesso.\n");
    } else {
        printf("Cliente não encontrado.\n");
    }
}














}






 

