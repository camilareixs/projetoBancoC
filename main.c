#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

void salvarClientes(totalclientes *Clientes) {
    FILE *arquivo = fopen("clientes.dat", "wb"); // Abra o arquivo para escrita binária

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para salvar os clientes :( \n");
        return;
    }

    if (fwrite(Clientes, sizeof(totalclientes), 1, arquivo) == 1) {
        fclose(arquivo); // Feche o arquivo após a gravação
        printf("Os Dados foram salvos com sucesso :)\n");
    } else {
        fclose(arquivo); // Feche o arquivo em caso de erro
        printf("Erro ao salvar os dados :( \n");
    }
}

void carregarClientes(totalclientes *Clientes) {
    FILE *arquivo = fopen("clientes.dat", "rb"); // Abra o arquivo para leitura binária

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para carregar os clientes.\n");
        return;
    }

    if (fread(Clientes, sizeof(totalclientes), 1, arquivo) == 1) {
        fclose(arquivo); // Feche o arquivo após a leitura
        printf("Dados carregados com sucesso!\n");
    } else {
        fclose(arquivo); // Feche o arquivo em caso de erro
        printf("Erro ao carregar os dados :( \n");
    }
}

int main() {
    totalclientes TodosClientes;
    TodosClientes.qtd = 0;

    carregarClientes(&TodosClientes); // Carregue os dados ao iniciar o programa

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
        printf("8. Sair\n");
        printf("Digite o número da opção desejada: ");

        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                NovoCliente(&TodosClientes);
                break;
            case 2:
                long cpf;
                printf("Digite o CPF do cliente a ser apagado: ");
                scanf("%ld", &cpf);
                ApagarCliente(&TodosClientes, cpf);
                break;
            case 3:
                Listarclientes(&TodosClientes);
                break;
            case 4:
                debito(&TodosClientes.Clientes);
                break;
            case 5:
                deposito(&TodosClientes.Clientes);
                break;
            case 6:
                extrato(&TodosClientes.Clientes);
                break;
            case 7:
                transferencia(&TodosClientes.Clientes);
                break;
            case 8:
                salvarClientes(&TodosClientes); // Salve os dados antes de sair
                printf("Que pena que escolheu sair. Até breve!\n");
                return 0;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    }
}
