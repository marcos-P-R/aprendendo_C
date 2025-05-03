#include<stdio.h>

int* encontrar_Maior(int *arr, int tamanho)
{
    if (tamanho <= 0) return NULL;

    int *maior = &arr[0];

    for (int i = 1; i < tamanho; i++)
    {
        if (arr[i] > *maior)
        {
            maior = &arr[i];
        }
    }

    return maior;
}

int main()
{
    int numeros[] = {50, 12, 91, 27, 32, 15};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    int *resultado = encontrar_Maior(numeros, tamanho);

    if (resultado != NULL)
    {
        printf("O maior valor é: %d\n", *resultado);
        printf("Está na posição: %ld\n", resultado - numeros);
    }

    return 0;
}