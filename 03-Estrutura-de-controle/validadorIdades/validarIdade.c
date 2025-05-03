#include<stdio.h>

int main() {
    int idade;

    printf("Validando Idade...\n");
    printf("Informe a sua idade: ");

    scanf("%d", &idade);

    if(idade < 0) {
        printf("Idade invalida \n");
    } else if (idade < 18) {
        printf("Menor de idade, idade invalida! \n");
    } else if (idade < 60) {
        printf("Adulto, idade valida! \n");
    } else {
        printf("O senhor tem a idade valida e o conhecimento de muitas coisas \n");
    }

    return 0;
}