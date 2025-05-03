#include <stdio.h>

int main() {
    int numero01, numero02;
    int soma, subtracao, multiplicacao;
    float divisao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero01);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero02);

    soma = numero01 + numero02;
    subtracao = numero01 - numero02;
    multiplicacao = numero01 * numero02;

    printf("\n -----------Resultador ------------ \n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);

    if (numero02 != 0) {
        divisao = (float)numero01 / numero02;
        printf("Divisao: %.2f\n", divisao);
    } else {
        printf("Nao e possivel dividir por zero \n");
    }

    return 0;
}