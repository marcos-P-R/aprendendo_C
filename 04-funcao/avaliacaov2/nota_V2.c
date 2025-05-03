#include<stdio.h>

// prototipo de funções
void saudacao();

void mediaAvaliacao(float notas[]);

void menu(int *comando);

int main() {
    int comando;
    
    do
    {
        float notas[3];
        saudacao();
        printf("Verificando Media Do Aluno\n");
        printf("Qual foi sua nota na primeira avaliação? ");
        scanf("%f", &notas[0]);
        printf("Qual foi sua nota na segunda avalidação? ");
        scanf("%f", &notas[1]);
        printf("Qual foi sua nota na avaliação final? ");
        scanf("%f", &notas[2]);

        mediaAvaliacao(notas);

        menu(&comando);
        
    } while (comando != 0);
    
    return 0;
}

void saudacao()
{
    printf("____ Calculo de media de aluno ______\n");
    printf("|-----------------------------------|\n");
}

void mediaAvaliacao(float notas[])
{
    float soma;

    for(int i = 0; i < 3; i++) {
        soma += notas[i];
    }

    float media = soma/ 3;

    printf("\nA media do aluno foi %.2f\n", media);
    
    media > 7 ? printf("Aprovado!\n\n") : printf("Reprovado!\n\n");
}

void menu(int *comando) {
    printf("\n|--------------------------------------|\n");
    printf("1 - Verificar media de outro aluno \n");
    printf("0 - Para sair\n");
    scanf("%d", comando);
}