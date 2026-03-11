/*
Lista 1 - Exercício 1) Desenvolva uma programa que peça 4 notas para o usuário e cálcule a média do mesmo. O programa deve verificar se a média foi menor que 6 para informar que o usúario foi reprovado e maior ou igual a 6 para informar que foi aprovado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    float nota_1 = 0, nota_2 = 0, nota_3 = 0, nota_4 = 0;
    float soma = 0, media = 0;

    printf("Informe a Primeira Nota:\n");
    scanf("%f", &nota_1);
    printf("Informe a Segunda Nota:\n");
    scanf("%f", &nota_2);
    printf("Informe a Terceira Nota:\n");
    scanf("%f", &nota_3);
    printf("Informe a Quarta Nota:\n");
    scanf("%f", &nota_4);

    soma = nota_1 + nota_2 + nota_3 + nota_4;
    media = soma / 4;

    printf("Você foi %s, sua média é %f.\n\n", media >= 6 ? "Aprovado" : "Reprovado", media);

    return 0;
}