/*
*Faça um programa que leia o salário de um trabalhador e o valor da   prestação de um 
*empréstimo. Se a prestação, for maior que 20% do salário, imprima: “Empréstimo não concedido.”,
*caso contrário, imprima: “Empréstimo concedido.”
*/

#include <stdio.h>

void main(){
    float Salario = 0;
    float Valor_imprestimo = 0;
    printf("Digite o quanto voce ganha por mes :");
    scanf("%f",&Salario);
    printf("digite  o valor da prestasao do imprestimo :");
    scanf("%f",&Valor_imprestimo);

    if((Salario /100)*20 < Valor_imprestimo ){
        printf("Empréstimo não concedido\n");
    }else{
        printf("Empréstimo concedido");
    }
}