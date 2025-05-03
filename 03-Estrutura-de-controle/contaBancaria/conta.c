#include<stdio.h>

int main() 
{
    char operacao;

    printf("_____BEM VINDO A SUA CONTA_____\n");
    printf("QUAL OPERACAO DESEJA REALIZAR? \n");
    printf("a - CONSULTAR SALDO\n");
    printf("b - FAZER DEPOSITO\n");
    printf("c - FAZER SAQUE\n");
    scanf("%c", &operacao);

    switch (operacao)
    {
        case 'a':
            printf("Consultando Saldo...\n");
            break;
        case 'b':
            printf("Realizando Deposito... \n");
            break;
        case 'c':
            printf("Realizando Saque... \n");
            break;
        default:
            break;
    }

    return 0;
}