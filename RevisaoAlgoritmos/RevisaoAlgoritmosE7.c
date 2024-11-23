#include <stdio.h>

/**
 * 7. Escreva um programa que receba a velocidade máxima em uma avenida e a velocidade
 * com que um motorista estava dirigindo nela. Calcule a multa que o motorista vai
 * receber, considerando que são pagos R$ 5,00 por cada km/h que estiver acima da
 * velocidade permitida (considere apenas números inteiros). Se a velocidade do motorista
 * estiver dentro do limite, o programa deve informar que não há multa.
 */

int main()
{
    float velocidadeMax;
    float velocidadeMotorista;

    printf("Informe a velocidade máxima permitida na avenida:");
    scanf("%f", &velocidadeMax);
    printf("Informe em que o motorista estava dirigindo:");
    scanf("%f", &velocidadeMotorista);

    if (velocidadeMotorista <= velocidadeMax)
        printf("Motorista está dentro do limite.");
    else
    {
        float multa = (int)(velocidadeMotorista - velocidadeMax) * 5;
        printf("O valor da multa por excesso de velocidade é de %.2f", multa);
    }

    return 0;
}