#ifndef FUNCOES_H
#define FUNCOES_H

// type def do truck irá informar o que será permitido dentro dele e a quantidade de caracteres
typedef struct {
    char nome[50]
    long cpf;
    int tipodeconta;
    double valorinicial;
    int senha;

} 
clientedesc;
// define a quantidade maxima de clientes
typedef struct {
    Clientes Clientes[1000];
    int qtd;
}
totalclientes




#endif