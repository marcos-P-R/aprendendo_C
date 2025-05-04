#include <stdio.h>
#include <string.h>
#include "processos.h"

#define MAX_PROCESSOS 10

void inicializarProcessos(Processo *lista, int *quantidade)
{
    if (*quantidade < MAX_PROCESSOS) {
        lista[*quantidade].pid = 123;
        strcpy(lista[*quantidade].name, "navegador");
        strcpy(lista[*quantidade].status, "EXECUTANDO");
        (*quantidade)++;
    }
    if (*quantidade < MAX_PROCESSOS) {
        lista[*quantidade].pid = 456;
        strcpy(lista[*quantidade].name, "editor");
        strcpy(lista[*quantidade].status, "EXECUTANDO");
        (*quantidade)++;
    }
    if (*quantidade < MAX_PROCESSOS) {
        lista[*quantidade].pid = 789;
        strcpy(lista[*quantidade].name, "terminal");
        strcpy(lista[*quantidade].status, "DORMINDO");
        (*quantidade)++;
    }
    if (*quantidade < MAX_PROCESSOS) {
        lista[*quantidade].pid = 721;
        strcpy(lista[*quantidade].name, "antivirus");
        strcpy(lista[*quantidade].status, "EXECUTANDO");
        (*quantidade)++;
    }
    if (*quantidade < MAX_PROCESSOS) {
        lista[*quantidade].pid = 279;
        strcpy(lista[*quantidade].name, "mp3");
        strcpy(lista[*quantidade].status, "EXECUTANDO");
        (*quantidade)++;
    }
}

int main()
{
    Processo listaDeProcessos[MAX_PROCESSOS];
    int quantidade = 0;
    int opcao, pidKill;
    char filtro[MAX_NOME_PROCESSO];

    inicializarProcessos(listaDeProcessos, &quantidade);

    do
    {
        printf("\n===== Monitor de Processos Simplificado =====\n");
        printf("1. Listar Processos\n");
        printf("2. Filtrar Processos por Nome\n");
        printf("3. Matar Processo (por PID)\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                listarProcessos(listaDeProcessos, quantidade);
                break;
            case 2:
                printf("Digite o nome (ou parte do nome) para filtrar: ");
                scanf(" %[^\n]", filtro);
                filtrarProcessos(listaDeProcessos, quantidade, filtro);
                break;
            case 3:
                printf("Digite o PID do processo para matar: ");
                scanf("%d", &pidKill);
                matarProcesso(listaDeProcessos, &quantidade, pidKill);
                break;
            case 0:
                printf("Saindo do monitor de processos.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}