/*
Escreva um programa que leia a quantidade de dias, horas, minutos e segundos do usuário. Calcule o total em segundos
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int dias = 0, horas = 0, minutos = 0, segundos = 0;
    int total_segundos = 0;

    //Como o tempo não é negativo não vamos aceitar números negativos, mas o zero será aceito
    do{
        printf("Informe a quantidade de dias:\n");
        scanf("%i", &dias); 

        if(dias < 0){
            printf("Você deve informar um valor maior ou igual a zero!\n");
        }

    }while(dias < 0);

    do{
        printf("Informe a quantidade de horas:\n");
        scanf("%i", &horas);

        if(horas < 0){
            printf("Você deve informar um valor maior ou igual a zero!\n");
        }

    }while(horas < 0);

    do{
        printf("Informe a quantidade de minutos:\n");
        scanf("%i", &minutos);
        
        if(minutos < 0){
            printf("Você deve informar um valor maior ou igual a zero!\n");
        }

    }while(minutos < 0);

    do{
        printf("Informe a quantidade de segundos:\n");
        scanf("%i", &segundos);
        
        if(segundos < 0){
            printf("Você deve informar um valor maior ou igual a zero!\n");
        }

    }while(segundos < 0);

    system("clear");

    /*
    dia - * 24 * 60 * 60
    hora - * 60 * 60
    minuto - * 60
    */

    total_segundos = dias * 86400;
    total_segundos += horas * 3600;
    total_segundos += minutos * 60;
    total_segundos += segundos;

    printf("\nVocê informou!\nDias: %i\nHoras: %i\nMinutos: %i\nSegundos: %i\nIsso equivale a um total de %i segundos\n", dias, horas, minutos, segundos, total_segundos);

    return 0;
}