#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));

    int numero_secreto = rand() % 100 + 1;
    int palpite = 0;
    int tentativa = 0;
    int max_tentativa = 5;

    printf("Bem-vindo ao Jogo de Adivinhação!\n");
    printf("Tente adivinhar o número entre 1 e 100.\n");

    do
    {
        if(tentativa < max_tentativa) {
            printf("\nTentativa %d de %d\n", tentativa, max_tentativa);
            printf("Digite seu palpite: ");
            scanf("%d", &palpite);
            tentativa++;

            if(palpite < 1 || palpite > 100)
            {
                printf("Por favor, digite um número entre 1 e 100!\n");
                continue;
            }

            if (palpite < numero_secreto) {
                printf("Seu palpite é MENOR que o número secreto!\n");
            } else if (palpite > numero_secreto) {
                printf("Seu palpite é MAIOR que o número secreto!\n");
            } else {
                printf("\nPARABÉNS! Você acertou em %d tentativas!\n", tentativa);
                break;
            }
        } else {
            printf("\nSuas tentativas acabaram! O número secreto era: %d\n", numero_secreto);
            break;
        }

    } while (palpite != numero_secreto);

    return 0;    
}