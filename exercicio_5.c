/*
Faça um programa que calcule o aumento de um salário. Ele deve solicitar o valor do salário e a porcentagem do aumento. Exiba o valor do aumento e do salário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    float salario = 0, taxa_aumento = 0, salario_reajuste = 0;

    do{
        printf("\nNão informe valoress negativos!\nQual seu salário atual (R$):\n");
        scanf("%f", &salario);

    }while(salario < 0);

    do{
        printf("\nNão informe valoress negativos!\nQual a porcentagem do aumento:\n");
        scanf("%f", &taxa_aumento);

    }while(taxa_aumento < 0);

    salario_reajuste = salario + (salario * (taxa_aumento / 100));

    printf("\nVocê teve um aumento de %.2f o valor do seu salário será de R$ %.2f\n", taxa_aumento, salario_reajuste);

    return 0;
}