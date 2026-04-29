/*
Faça um programa que solicite o preço de uma mercadoria e o percentual de desconto. exiba o valor do desconto e o preço a pagar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    float preco = 0, desconto = 0, preco_final = 0;

    //O não vamos receber preço e percentual de desconto menores ou iguais a zero.
    while(preco <= 0){
        printf("\nNão informe valores negativos ou nulo.\nPreço do produto (R$): ");
        scanf(" %f", &preco);

    }

    system("clear");

    while(desconto <= 0){
        printf("\nNão informe valores negativos ou nulo.\nDesconto (%%): ");
        scanf(" %f", &desconto);

    }

    system("clear");

    preco_final = preco - (preco * (desconto / 100));

    printf("\nO desconto aplicado foi de %.2f%% valor final do produto é R$ %.2f\n", desconto, preco_final);
    
    return 0;
}