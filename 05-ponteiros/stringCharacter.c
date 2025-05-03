#include<stdio.h>

int main()
{
    char mensagem[] = "Ola, Mundo";

    char *ptr = mensagem;

    printf("%s\n", mensagem);

    printf("Caracteres: \n");

    while (*ptr != '\0')
    {
        printf("%c \n", *ptr);
        ptr++;
    }

    printf("\n");

    return 0;
    
}