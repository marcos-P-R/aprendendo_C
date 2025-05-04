#include<stdio.h>
#include "acoes_livraria.h"

void adicionarLivro(Livro *lista, int *quantidade)
{
    Livro *novoLivro = &lista[*quantidade];

    printf("Informe o Titulo do livro: \n");
    scanf(" %[^\n]", novoLivro -> titulo);

    printf("Informe o Autor do livro: \n");
    scanf(" %[^\n]", novoLivro -> autor);

    printf("Informe o ano de publicação do livro: \n");
    scanf(" %d", &novoLivro -> ano_publicado);

    (*quantidade)++;

    printf("Livro adicionado");
}

void listarLivros(Livro *lista, int quantidade)
{
    if(quantidade == 0)
    {
        printf("Lista de Livros vazia!\n");
        return;
    }

    for (int i = 0; i < quantidade; i++)
    {
        printf("%d. Titulo: %s \n", i + 1, lista[i].titulo);
        printf("    Autor: %s \n", lista[i].autor);
        printf("    Ano de lançamento: %d \n", lista[i].ano_publicado);
        printf("-------------------\n");
    }
    
}
