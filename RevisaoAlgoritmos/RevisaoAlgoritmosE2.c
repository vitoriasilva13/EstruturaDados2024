#include <stdio.h>

/**
 * 2. Fazer um programa para receber 3 valores inteiros do usuário e
 * mostrar a sua média (que pode não ser inteira).
 */

int main()
{
    int numero;

    printf("Informe um número:");
    scanf("%d", &numero);

    if (numero % 2 > 0)
        printf("O número informado é ímpar.");
    else
        printf("O número informado é par.");

    return 0;
}