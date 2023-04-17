/*
* Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e 
*escrever a área do retângulo.
*/

#include <stdio.h>

void main(){

    float Base_triangulo ;
    float Altura_triangulo;

    printf("qual e altura do triangulo ?\n");
    scanf("%f",&Altura_triangulo);

    printf("qual e o tamanho da base do triangulo ?\n");
    scanf("%f",&Base_triangulo);

    float Area_triangulo = Base_triangulo*Altura_triangulo/2;

    printf("A area de um triangulo e %f\n",Area_triangulo);

}