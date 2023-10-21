#ifndef FUNCOES_H
#define FUNCOES_H

//teste

// type def do truck irá informar o que será permitido dentro dele e a quantidade de caracteres
typedef struct {
    char nome[50]
    long cpf;
    int tipodeconta;
    double valorinicial;
    int senha;
    float saldoatual;

} 
clientedesc;

// define a quantidade maxima de clientes
typedef struct {
clientedesc Clientes[1000];
    int qtd;
}
totalclientes;

void NovoCliente(clientedesc *Clientes);
void ApagarCliente(clientedesc *Clientes);
void Listarclientes(clientedesc *Clientes);
void debito(clientedesc *Clientes);
void deposito(clientedesc *Clientes);
void extrato(clientedesc *Clientes);
void transferencia(clientedesc *Clientes);





#endif