#include<stdio.h>

int dobraArray(int *arr, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        *(arr + i) = (*(arr + i)) * 2;
    }
    
}

int main()
{
    int valores[] = {2, 4, 12, 25, 40, 45, 50};

    int *ptr_valores = valores;
    int tamanho = sizeof(valores) / sizeof(valores[0]);

    for (int i = 0; i < tamanho; i++)
    {
        printf("Valor do index %d é %d\n", i, valores[i]);
    }
    
    printf("\n==================================\n");

    dobraArray(valores, tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        printf("Valor do index %d é %d\n", i, valores[i]);
    }

}