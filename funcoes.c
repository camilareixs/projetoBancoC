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












}






