/*
Escreva um programa que pergunte a quantidade de Km percorridos por um carro alugado pelo usuário, assim como a quantidade de dias pelos quais o carro foi alugado. Calcule o preço a pagar, sabendo que o carro custa R$ 60,00 por dia e R$ 0,15 por Km rodado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int dias = 0;
    float quilometros = 0, preco = 0, valor_do_dia = 60, valor_por_km = 0.15;
    //Não vou receber valores iguais ou menores que zero.

    while(quilometros <= 0){
        printf("\nQuantos quilômetros foram percorridos: ");
        scanf(" %f", &quilometros);

    }

    while(dias <= 0){
        printf("\nPor quantos dias o carro foi alugado: ");
        scanf(" %d", &dias);

    }

    preco = valor_do_dia * dias + valor_por_km * quilometros;

    printf("\nquantidade de quilômetros percorrida: %.2f\nQuantidade de dias alugados: %d\nPreço total R$: %.2f\n", quilometros, dias, preco);

    return 0;
}