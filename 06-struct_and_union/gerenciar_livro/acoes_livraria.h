#ifndef ACTIONS_H
#define ACTIONS_H

#define MAX_TITULO 100
#define MAX_AUTOR 50
#define MAX_LIVROS 100

typedef struct
{
    char titulo[MAX_TITULO];
    char autor[MAX_AUTOR];
    int ano_publicado;
} Livro;

void adicionarLivro(Livro *lista, int *quantidade);
void listarLivros(Livro *lista, int quantidade);

#endif