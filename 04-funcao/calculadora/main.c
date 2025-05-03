#include <stdio.h>
#include "operacoes.h"

int main() {
    float a = 10.5, b = 5.2;
    
    printf("Soma: %.2f\n", somar(a, b));
    printf("Subtração: %.2f\n", subtrair(a, b));
    printf("Multiplicação: %.2f\n", multiplicar(a, b));
    printf("Divisão: %.2f\n", dividir(a, b));
    
    return 0;
}