#include <stdio.h>

/**
 * 4. Fazer um programa que recebe 3 valores não inteiros do usuário e mostra o maior
 * deles, o menor deles e o valor intermediário.
 */

int main()
{
    int numeros[3];

    printf("Informe 3 números separados por espaço:");
    scanf("%d %d %d", &numeros[0], &numeros[1], &numeros[2]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (numeros[i] > numeros[j])
            {
                int temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    printf("Maior: %d\n", numeros[2]);
    printf("Intermediário: %d\n", numeros[1]);
    printf("Menor: %d\n", numeros[0]);

    return 0;
}