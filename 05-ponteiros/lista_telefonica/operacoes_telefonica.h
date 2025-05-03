#ifndef OPERACAO_LISTA_H
#define OPERACAO_LISTA_H

#define MAX_NOME 50
#define MAX_CONTATOS 100

typedef struct 
{
    char nome[MAX_NOME];
    char telefone[15];
} Contato;

void adicionarContato(Contato *lista, int *quantidade);
void buscarContato(Contato *lista, int quantidade, char *nomeBusca);
void listarContatos(Contato *lista, int quantidade);

#endif