#include <stdio.h>

/**
 * 6. Fazer um programa que recebe duas notas parciais de um aluno (0 a 100) e informa se
 * ele está aprovado (média maior ou igual a 70), em exame final (média entre 40 e 69) ou
 * reprovado (média menor do que 40). Caso esteja em exame o programa deve pedir a
 * nota do exame (0 a 100) e informar se o aluno está aprovado (média mais nota do
 * exame maior ou igual a 100) ou reprovado (média mais nota do exame menor do que
 * 100).
 */

int main()
{
    float nota1;
    float nota2;
    float notafinal;

    printf("Informe as duas notas separadas por espaço:");
    scanf("%f %f", &nota1, &nota2);

    float media = (float)(nota1 + nota2) / 2;

    if (media >= 70)
        printf("Aluno aprovado.");
    else if (media < 40)
        printf("Aluno reprovado.");
    else
    {
        printf("Aluno em exame final.\nInforme a nota do exame:");
        scanf("%f", &notafinal);

        if (media + notafinal >= 100)
            printf("Aluno aprovado.");
        else
            printf("Aluno reprovado.");
    }
}