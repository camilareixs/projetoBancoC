#ifndef FUNCAO_H
#define FUNCAO_H


typedef struct {
    char nome[50];
    long cpf;
    int tipodeconta;
    double valorinicial;
    char senha[11];  // Alterado para array de caracteres para senhas
    float saldoatual;
} clientedesc;

typedef struct {
    clientedesc Clientes[1000];
    int qtd;
} totalclientes;

void NovoCliente(totalclientes *Clientes);  // Protótipo da função corrigido
void ApagarCliente(totalclientes *TodosClientes, long cpf);  // Protótipo da função corrigido
void Listarclientes(totalclientes *TodosClientes); // Corrigido o protótipo da função igido
void debito(clientedesc *Clientes);
void deposito(clientedesc *Clientes);
void extrato(clientedesc *Clientes);
void transferencia(clientedesc *Clientes);

#endif
