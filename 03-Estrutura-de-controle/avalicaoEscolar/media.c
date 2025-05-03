#include<stdio.h>

int main()
{
    int comando;
    do
    {
        float nota01, nota02, nota03;

        printf("Verificando Media Do Aluno\n");
        printf("Qual foi sua nota na primeira avaliação? ");
        scanf("%f", &nota01);
        printf("Qual foi sua nota na segunda avalidação? ");
        scanf("%f", &nota02);
        printf("Qual foi sua nota na avaliação final? ");
        scanf("%f", &nota03);
    
        float media = (nota01 + nota02 + nota03) / 3;
    
        printf("A media do aluno foi %.2f\n", media);
    
        media > 7 ? printf("Aprovado!\n\n") : printf("Reprovado!\n\n");

        printf("--------------------------------------\n");
        printf("1 - Verificar media de outro aluno \n");
        printf("0 - Para sair\n");
        scanf("%d", &comando);
    } while (comando != 0);
    

    return 0;
}