#include <stdio.h>

/**
 * 1. Fazer um programa para
 *   a. receber do usuário um tempo em segundos, correspondente à duração de um
 *   evento qualquer (por ex. jogo de futebol)
 *   b. calcular e mostrar ao usuário o tempo equivalente em horas, minutos e
 *   segundos
 * 2. Fazer um programa para receber 3 valores inteiros do usuário e
 * mostrar a sua média (que pode não ser inteira).
 */

int main()
{
    int segundos;
    int horas;
    int minutos;

    printf("Informe a duração do evento em segundos:");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = segundos % 3600 / 60;
    segundos = segundos % 3600 % 60;

    printf("%dh %dm %ds", horas, minutos, segundos);

    return 0;
}