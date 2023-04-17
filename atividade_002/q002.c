/*
* Faça um programa que leia dois números e mostre o maior deles.
* Se, por acaso, os dois números forem iguais, imprima a mensagem     “Números iguais”.
*/
#include <stdio.h>

void main(){
    float a = 0;
    float b = 0;

    printf("****************DESCUBRA QUAL NUMERO E MAIOR****************** \n");
    printf("digite um numero :");
    scanf("%f",&a);
    printf("digite outro numero :");
    scanf("%f",&b);

    if(a>b){
        printf("O numero %0.2f e maior \n",a);
    }else if(a==b){
        printf("os numeros sao iguais\n ");
    }else{
        printf("o numero %0.2f maior\n",b);
    }
}