/*
Escreva um programa que calcule o tempo de uma viagem de carro. Pergunte a distância a percorrer e a velocidade média esperada para a viagem.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    float velocidade = 0, distancia = 0, tempo = 0;

    /*
    formula Vm = d / t, logo t = d / Vm fisicamente podemos ter d e Vm negativos, mas para p programa apenas valores positivos8
    */

    while(distancia <= 0){
        printf("\nInforme valores positivos!\nDistância percorrida em Km: ");
        scanf(" %f", &distancia);
    }

    system("clear");

    while(velocidade <= 0){
        printf("\nInforme valores positivos!\nValocidade média em Km/h: ");
        scanf(" %f", &velocidade);
    }

    system("clear");

    tempo = distancia / velocidade;

    printf("Você percorreu uma distância de %.2f Km\nCom velocidade média de %.2f Km/h\nO tempo gasto nessa viagem foi de %.2f h\n", distancia, velocidade, tempo);

    return 0;
}