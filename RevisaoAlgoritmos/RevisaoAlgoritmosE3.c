#include <stdio.h>

/**
 * 3. Fazer um programa para receber valores inteiros X, Y e Z do usuário e determinar se
 * estes valores podem formar os lados de um triângulo. Em caso afirmativo, informar se o
 * triângulo é equilátero, isósceles ou escaleno.
 */

int main()
{
    int x;
    int y;
    int z;

    printf("Informe o valor de X:");
    scanf("%d", &x);
    printf("Informe o valor de Y:");
    scanf("%d", &y);
    printf("Informe o valor de Z:");
    scanf("%d", &z);

    if (x + y > z && x + z > y && y + z > x)
    {
        if (x == y && y == z)
            printf("Triângulo equilátero.");
        else if (x == y || x == z || y == z)
            printf("Triângulo isósceles.");
        else
            printf("Triângulo escaleno.");
    }
    else
        printf("Os valores informados não formam um triângulo.");

    return 0;
}