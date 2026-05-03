/*
Escreva um programa para calcular a redução do tempo de vida de um fumante. Pergunte a quantidade de cigarros fumados por dia e quantos anos ele já fumou. Considere que um fumante perde 10 min de vida a cada cigarro, e calcule quantos dias de vida um fumante perderá. Exiba o total em dias.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int quantidade_de_cigarros = 0, anos_fumando = 0;
    float tempo_perdido_min = 0, tempo_perdido_dia = 0;

    tempo_perdido_min = 10 * quantidade_de_cigarros;
    tempo_perdido_dia = tempo_perdido_min / 1440;

    return 0;
}