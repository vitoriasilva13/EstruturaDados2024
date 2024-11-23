#include <stdio.h>

/**
 * 5. Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois
 * números reais. O programa deve retornar o resultado da operação recebida sobre estes
 * dois números.
 */

int main()
{
    char operacao;
    float numero1;
    float numero2;

    printf("Informe a operação (+, -, / ou *):");
    scanf(" %c", &operacao);
    printf("Informe o primeiro número:");
    scanf("%f", &numero1);
    printf("Informe o segundo número:");
    scanf("%f", &numero2);

    switch (operacao)
    {
    case '+':
        printf("Resultado: %.2f", numero1 + numero2);
        break;
    case '-':
        printf("Resultado: %.2f", numero1 - numero2);
        break;
    case '/':
        printf("Resultado: %.2f", numero1 / numero2);
        break;
    case '*':
        printf("Resultado: %.2f", numero1 * numero2);
        break;
    default:
        printf("Operação inválida.");
    }

    return 0;
}