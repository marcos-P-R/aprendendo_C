#include<stdio.h>

void msgEnderecoInt(int array[], int tamanho);
void msgEnderecoChar(char array[], int tamanho);

int main()
{
    int numeros[5] = {10, 15, 20, 25, 30};

    int *p = numeros;

    printf("Primeiro Elemento %d\n", *p);
    printf("Terceiro Elemento %d\n", *(p + 2));
    printf("Quinto Elemento %d\n", *(p + 4));


    int inteiros[3] = {10, 20, 30};
    char caracteres[5] = {'A', 'B', 'C', 'D', 'E'};
    
    printf("Tamanho de int: %lu bytes\n", sizeof(int));
    printf("Tamanho de char: %lu bytes\n", sizeof(char));
    
    printf("\nEndereços dos inteiros:\n");
    msgEnderecoInt(inteiros, 3);
    
    printf("\nEndereços dos caracteres:\n");
    msgEnderecoChar(caracteres, 5);


    // ponteiros de ponteiros

    int valor = 140;
    int *ptr = &valor;
    int **ptr_ptr = &ptr;

    printf("\nValor: %d\n", valor);
    printf("Valor via *ptr: %d\n", *ptr);
    printf("Valor via **ptr_ptr: %d\n", **ptr_ptr);
    
    **ptr_ptr = 100;
    
    printf("Novo valor: %d\n", valor);

    return 0;
}

void msgEnderecoInt(int array[], int tamanho) {
    for (int i = 0; i < tamanho; i++)
    {
        printf("inteiros[%d]: %p\n", i, &array[i]);
    }
    
}

void msgEnderecoChar(char array[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("caracteres[%d]: %p\n", i, &array[i]);
    }
}
