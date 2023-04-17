/*
* Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
* o número digitado ao quadrado e raiz quadrada do número digitado.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int Numero = 0 ;
    printf("DIGITE UM NUMERO : \n");
    scanf("%d",&Numero);

    if (Numero > 0 ){
        double Pow = pow(Numero,2);
        double raiz = sqrt(Numero);
        printf(" Numero : %d \n Quadrado : %f \n Raiz quadrada : %f \n",Numero,Pow,raiz
        );
    }else {
        printf("numero negativo ");
    }
    return 0 ;
}