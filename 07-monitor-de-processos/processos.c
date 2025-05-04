#include<stdio.h>
#include<string.h>
#include "processos.h"

Processo processList[MAX_PROCESSO];

int quantidadeProcessos = 0;

void listarProcessos(Processo *arr, int quantidade)
{
    if(quantidade == 0) {
        printf("Não há processos em execução...");
        return;
    }

    printf("Lista de processos ...");

    for (int i = 0; i < quantidade; i++)
    {
        printf("PID: %d, NOME: %s, STATUS: %s\n", arr[i].pid, arr[i].name, arr[i].status);

    }

    printf("=========================================");
}

void filtrarProcessos(Processo *arr, int quantidade, char *filtro)
{
    int encontrados = 0;

    printf("Processos contendo '%s': \n", filtro);

    for (int i = 0; i < quantidade; i++)
    {
        if (strstr(arr[i].name, filtro) != NULL)
        {
            printf("PID: %d, NOME: %s, STATUS: %s\n", arr[i].pid, arr[i].name, arr[i].status);
            encontrados++;
        }
    }

    if(encontrados == 0) {
        printf("Nenhum processo encontrado com o filtro '%s'.\n", filtro);
    }

    printf("=========================================");
}

int matarProcesso(Processo *arr, int *quantidade, int pidKill)
{
    for (int i = 0; i < *quantidade; i++)
    {
        if(arr[i].pid == pidKill)
        {
            printf("Processo PID %d ('%s') terminado.\n", arr[i].pid, arr[i].name);

            for (int j = i; j < *quantidade - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            (*quantidade)--;
            return 1;
        }
    }
    printf("PID %d não encontrado.\n", pidKill);
    return 0;
}