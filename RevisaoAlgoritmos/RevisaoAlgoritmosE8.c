#include <stdio.h>

/**
 * 8. Escreva um programa para receber do usuário um mês (de 1 a 12) e um ano (de 0 D.C.
 * em diante) e mostrar o número de dias daquele mês daquele ano. Utilizar switch e levar
 * em consideração anos bissextos para o cálculo.
 */

int main()
{
    int mes;
    int ano;

    printf("Informe o mês:");
    scanf("%d", &mes);
    printf("Informe o ano:");
    scanf("%d", &ano);

    int dias;

    switch (mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        dias = 31;
        break;
    case 2:
        dias = (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) ? 29 : 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        dias = 30;
        break;
    default:
        printf("Mês inválido.");
        return 1;
    }

    printf("O mês %d do ano %d tem %d dias.", mes, ano, dias);

    return 0;
}