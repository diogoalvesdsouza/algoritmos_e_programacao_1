/*
Escreva um programa que converta uma temperatura digitada em °C em °F. A fórmula para essa conversão é:
F = 9 * C / 5 + 32
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    float temperatura_c = 0, temperatura_f = 0;

    printf("Informe a temperatura em °C: ");
    scanf(" %f", &temperatura_c);

    temperatura_f = 9 * temperatura_c / 5 + 32;

    printf("\nA temperatura em °F é %2.f\n", temperatura_f);

    return 0;
}