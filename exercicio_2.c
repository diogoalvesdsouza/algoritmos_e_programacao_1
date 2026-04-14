/*
Desenvolva um programa que calcular o consumo médio de um automóvel em km/l, dado que o usuário deve informar a distância total percorrida e o volume de combustível consumido para um determinado trajeto.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

    float distancia = 0, volume = 0, consumo = 0;

    /*
    Nesse caso não quero que o usuário informe valores negativos ou iguais a zero tanto para a distância como para o volume, por isso até que ele informe um número positivo o programa ficara solicitando um novo valor.
    */

    do{
        printf("Informe a distância percorrida no trajeto (o valor deve se maior que zero):\n");
        scanf("%f", &distancia);

    }while(distancia <= 0); 

    system("clear"); //Se for no windows usar system("cls");

    do{
        printf("Informe o volume de combustível consumido no trajeto (o valor deve se maior que zero):\n");
        scanf("%f", &volume);

    }while(volume <= 0);

    system("clear");

    consumo = distancia / volume;

    printf("Nesse trajeto seu consumo médio foi de %.2f km por litro(s).\n\n", consumo);
    
    return 0;
}