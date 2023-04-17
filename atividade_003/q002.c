/*
*Faça um programa que receba a idade de uma pessoa e se idade menor que
* 30 aparece a mensagem "Você é muito jovem". Caso idade maior que 30 anos,
* o programa não fará nada.  
*/

#include <stdio.h>

int main(){
    int Idade = 0;

    printf("digite sua idade : \n ");
    scanf("%d",&Idade);

    if (Idade<30){
        printf("VOCE E JOVEM ");
    }
    return 0 ;
}