#include<stdio.h>
#include<string.h>
#include "operacoes_telefonica.h"

void adicionarContato(Contato *lista, int *quantidade)
{
    if(*quantidade >= MAX_CONTATOS) {
        printf("Lista cheia!\n");
        return;
    }

    Contato *novoContato = &lista[*quantidade];

    printf("Infome o Nome: \n");
    scanf(" %[^\n]", novoContato -> nome);

    printf("Informe o seu Numero de Telefone: \n");
    scanf(" %[^\n]", novoContato -> telefone);

    (*quantidade)++;
    printf("Contato adicionado com sucesso");
}

void buscarContato(Contato *lista, int quantidade, char *nomeBusca)
{
    int encontrado = 0;

    for (int i = 0; i < quantidade; i++)
    {
        if(strstr(lista[i].nome, nomeBusca) != NULL)
        {
            printf("Contato encontrado \n");
            printf("Nome: %s\n", lista[i].nome);
            printf("Telefone: %s\n", lista[i].telefone);
            printf("-------------------\n");
            encontrado = 1;
        }
    }

    if(!encontrado) {
        printf("Nenhum contato encontrado com '%s'.\n", nomeBusca);
    }
}

void listarContatos(Contato *lista, int quantidade)
{
    if(quantidade == 0)
    {
        printf("Lista de contatos vazia!\n");
        return;
    }

    for (int i = 0; i < quantidade; i++)
    {
        printf("%d. Nome: %s\n", i+1, lista[i].nome);
        printf("   Telefone: %s\n", lista[i].telefone);
        printf("-------------------\n");
    }
    
}
