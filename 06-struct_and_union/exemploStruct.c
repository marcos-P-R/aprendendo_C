#include<stdio.h>

struct Produto
{
    char nome[50];
    float valor;
    int quantidade;
    char sku[10];
};

union Notas
{
    char titulo[50];
    char nota[150];
    int id;
};



int main()
{
    struct Produto produto01 = {"Caderno", 12.5, 3, "v-123"};

    struct Produto *ptr_produto = &produto01;

    printf("Nome via ponteiro: %s\n", ptr_produto->nome);
    printf("Valor via ponteiro: %.2f\n", ptr_produto->valor);
    printf("Quantidade via ponteiro: %d\n", ptr_produto->quantidade);
    printf("SKU via ponteiro: %s\n", ptr_produto->sku);

    printf("Nome via ponteiro (alternativo): %s\n", (*ptr_produto).nome);
    printf("Valor via ponteiro (alternativo): %.2f\n", (*ptr_produto).valor);
    printf("Quantidade via ponteiro (alternativo): %d\n", (*ptr_produto).quantidade);
    printf("SKU via ponteiro (alternativo): %s\n", (*ptr_produto).sku);

    printf("================= UNION ==========================\n");

    union Notas notas;

    notas.id = 1;
    printf("Valor inteiro: %d\n", notas.id);

    printf("Valor caractere: %s\n", notas.titulo);
}