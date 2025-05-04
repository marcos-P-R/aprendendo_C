#include<stdio.h>

void encurtador_string(char *arr, int tamanho_para_encurtar)
{
    *(arr + tamanho_para_encurtar) = '\0';
}

int main()
{
    char mensagem[] = "Esta é uma string longa.";

    char *ptr = mensagem;

    printf("%s\n", mensagem);

    printf("Caracteres: ");

    encurtador_string(ptr, 10);

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    printf("\n");

    return 0;
    
}