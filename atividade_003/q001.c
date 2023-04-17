/*
*Programa que calcule a média de 5 notas de um aluno. 
*/

#include <stdio.h>

int main(){
    int i = 0 ;
    float  Nota = 0 ;

    for (i = 0 ;i<5 ;i++){
        int aux = Nota;
     
        printf("%f\n",Nota);
        printf("digite a nota %d",i+1);
        scanf("%f",&Nota);
        
        Nota = aux + Nota;
    }
    float Nota_Final = Nota/ 5;

    printf ("sua nota final e %0.2f",Nota_Final);

    return 0 ;
}