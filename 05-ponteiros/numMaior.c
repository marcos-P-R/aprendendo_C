#include<stdio.h>

int encontrar_Maior(int *arr, int tamanho)
{
    if (tamanho <= 0) return 0;

    int maior = *arr;

    for (int i = 1; i < tamanho; i++)
    {
        if (*(arr + i) > maior)
        {
            maior = *(arr + i);
        }
    }

    return maior;
}

int main()
{
    int numeros[] = {50, 12, 91, 27, 32, 15};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    int resultado = encontrar_Maior(numeros, tamanho);

    if (resultado != 0)
    {
        printf("O maior valor é: %d\n", resultado);
    }

    return 0;
}