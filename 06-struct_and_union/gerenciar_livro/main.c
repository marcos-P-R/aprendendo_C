#include<stdio.h>
#include "acoes_livraria.h"

int main()
{
    Livro livros[MAX_LIVROS];
    int quantidade = 0;
    int opcao;

    do
    {
        printf("\n===== Livraria =====\n");
        printf("1. Adicionar Livro\n");
        printf("2. Listar todos os Livros\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                adicionarLivro(livros, &quantidade);
                break;
            case 2:
                listarLivros(livros, quantidade);
                break;
            case 0:
                printf("Saindo ... \n");
                break;
            default:
                printf("Opção invalida! \n");
        }
    } while (opcao != 0);

    return 0;
}