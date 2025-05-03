#include<stdio.h>

void mensagem(int numero, int *pont);
void trocarLugar(int *a, int *b);

int main()
{
    int numero = 10;
    int *pont;

    pont = &numero;

    mensagem(numero, pont);

    *pont = 150;

    mensagem(numero, pont);


    int y = 5, x = 10;

    printf("\nAntes: x = %d, y = %d\n", x, y);
    trocarLugar(&x, &y);
    printf("Depois: x = %d, y = %d\n", x, y);

}

void mensagem(int numero, int *pont)
{
    printf("Valor de numero %d\n", numero);
    printf("Endereço de numero %p\n", &numero);
    printf("valor de pont (endereco) %p\n", pont);
    printf("valor apontado pelo ponteiro pont %d\n", *pont);
}

void trocarLugar(int *a, int *b)
{
    int temporaria = *a;
    *a = *b;
    *b = temporaria;
}
