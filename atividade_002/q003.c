/*
*  Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.
*/

#include <stdio.h>
void main(){
    int n = 0;

    printf("Digite um numero :");
    scanf("%d",&n);

    if( n % 2 == 0){
        printf("o numero %d par \n",n);
    }else{
        printf("o numero %d e impar \n",n);
    }
}