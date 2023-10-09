#include <stdio.h>
#include <stdlib.h>
int main() {
    int escolha;
    


    while (1) {
        printf("\nEscolha uma opção:\n");
        printf("1. Novo Cliente\n");
        printf("2. Apagar Cliente\n");
        printf("3. Listar Cliente\n");
        printf("4. Debito\n");
        printf("5. Deposito\n");
        printf("6. Extrato\n");
        printf("7. Transferencia entre contas\n");
        printf("8. sair\n");
        printf("Digite o número da opção desejada: ");
// incluindo a opção escolhida na variavel escolha
        scanf("%d", &escolha);
// switch que de acordo com a variavel escolha define qual case irá executar
        switch (escolha) {
            case 1:
//case 1 Novo cliente
                NovoCliente(&novocliente);
                break;
            case 2:
// case 2 Apagar clientes
                ApagarCliente(ApagarCliente));
                break;
            case 3:
// case 3 Listar Clientes
                Listarclientes(listarclientes, "tarefas.bin");
                break;
            case 4:
// débito
                debito(debito);
                break;

            case 5:
// deposito
                deposito(deposito));
                break;
            case 6:
     // deposito
                extrato(extrato));
                break;


            case 7:
     // transferencia entre contras
                transferencia(transferencia));
                break;

            case 8:

// case 8 sair do programa com return 0
                printf("Que pena que escolheu sair. Até breve!\n");
                return 0; // Encerra o programa
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }
}