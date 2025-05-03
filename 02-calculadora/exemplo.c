#include <stdio.h>

int main() {
    int x = 10;
    float y = 20.0;

    printf("Divisao inteira: 10/3 = %d\n", x/3);
    printf("Divisao com float: 20.0/3 = %.3f\n", y/3);

    printf("Com typecast 10/3 = %.3f\n", (float)x/3);

    printf("\n valor de x: %d\n", x);
    printf("Endereco de x: %p\n", &x);
}