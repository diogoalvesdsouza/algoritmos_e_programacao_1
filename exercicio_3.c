/*
Escreva um programa que leia um valor em metros e o exiba convertido em milímetros.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    float entrada_metros = 0, convertido_mm = 0;
    int conversor = 1000;

    //Nesse exercício também não queremos que o usuário informe um valor menor ou igual a zero.
    while(entrada_metros <= 0){
        printf("\nO valor informado deve ser maior que zero!\nInforme o valor em metros:\n");
        scanf("%f", &entrada_metros);
    }
    
    // 1 metro é igual a 1000 milímetros.
    convertido_mm = entrada_metros * conversor;

    printf("O valor em milímetros é: %.2f\n", convertido_mm);

    return 0;
}