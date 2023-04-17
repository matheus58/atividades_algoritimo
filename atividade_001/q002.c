/*
*Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área. 
*/

#include <stdio.h>

int main(){
    float Raio_circulo ;

    printf("qual e o raio do circolo a ser caulado a area ? \n");
    scanf("%f",&Raio_circulo);

    float Area_circulo = 3.141 * (Raio_circulo * Raio_circulo);

    printf("%f\n",Area_circulo);

    return  0;
}
