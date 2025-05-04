#ifndef PROCESSO_H
#define PROCESSO_H

#define MAX_NOME_PROCESSO 50
#define MAX_PROCESSO 10

typedef struct
{
    int pid;
    char name[MAX_NOME_PROCESSO];
    char status[20];
} Processo;

void listarProcessos(Processo *arr, int quantidade);
void filtrarProcessos(Processo *arr, int quantidade, char *filtro);
int matarProcesso(Processo *arr, int *quantidade, int pidKill);

#endif