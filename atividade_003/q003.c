/*
*. Faça um programa que entra com a idade de uma pessoa e se idade maior 
*que 70 anos, aparece a mensagem "Novos 50". Se idade maior que 21 anos, Adulto.
* Se idade menor que 21 anos, Jovem. 
*/

#include <stdio.h>

int main(){
    int Idade = 0 ;

    printf("digite sua idade : \n");
    scanf("%d",&Idade);


    if(Idade >= 70){
         printf("Novos 50");
    }else if (Idade >= 21) {
        printf("adulto");
    } else if (Idade < 21){
        printf("jovem");
    }
    return 0 ;
}
