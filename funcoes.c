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

char input[11];
printf("Digite seu CPF: \n");
fgets(input, sizeof(input), stdin);
NovoCliente.cpf = atol(input);

printf("Qual seria seu tipo de conta?\n 
1 - Conta comum \n 
2 - Conta Plus com beneficios \n");
char inputconta[1];
fgets(inputconta, sizeof(inputconta), stdin);
NovoCliente.tipodeconta = atoi(inputconta);

printf("Qual será o seu valor inicial?"); 
char valorinicialc[11];
fgets(valorinicialc, sizeof(valorinicialc), stdin);
NovoCliente.valorinicial = atof(valorinicialc);


printf("Qual será sua senha de seguranca com até 10 digitos"); 
char senhac[10];
fgets(senhac, sizeof(senhac), stdin);
NovoCliente.senha = atoi(senhac)

}



void MostarClientes(clientedesc *Clientes){
    if (*Clientes == 0){
        printf("Nenhum cliente encontrado.\n");
        return;}

    struct clientedesc Listarclientes;

    rewind(arquivo);
    printf("Aqui está a lista de todos os seus clientes:\n");
// Lê e exibe as informações de todas as tarefas no arquivo
    while (fread(&clientedesc, sizeof(struct Clientes), 1, arquivo) == 1) {
    printf("Nome: %c\n", clientedesc.nome);
    printf("CPF: %l\n", clientedesc.cpf);
    printf("Tipo de conta: %i\n", clientedesc.tipodeconta);
    printf("Valor inicial: %d\n", clientedesc.valorinicial);
    printf("\n");
}    
}
















}






 

