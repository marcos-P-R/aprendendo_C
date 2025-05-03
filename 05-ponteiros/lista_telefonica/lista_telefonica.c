#include<stdio.h>
#include<stdlib.h>
#include "operacoes_telefonica.h"

int main()
{
    Contato lista_contatos[MAX_CONTATOS];
    int quantidade = 0;
    int opcao;
    char nome_da_busca[MAX_NOME];

    do
    {
        printf("\n===== AGENDA TELEFÔNICA =====\n");
        printf("1. Adicionar contato\n");
        printf("2. Buscar contato\n");
        printf("3. Listar todos os contatos\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch (opcao)
        {
            case 1:
                adicionarContato(lista_contatos, &quantidade);
                break;
            case 2:
                printf("Informe o nome para ser consultado na lista: ");
                scanf(" %[^\n]", nome_da_busca);
                buscarContato(lista_contatos, quantidade, nome_da_busca);
                break;
            case 3:
                listarContatos(lista_contatos, quantidade);
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
