/*
*elabore um programa em c para verificação de situação eleitoral, onde será informada somente a 
idade do eleitor, considere as situações abaixo:

Menor que 0 não nasceu
0-15 não vota
16-17 opcional
18-65 obrigatório
exatamente 41- somente ganha prêmio e não vota!!!
> 65 opcional
exatamente 88 - somente ganha prêmio e não vota!!!

- Não utilizar os operadores lógicos || ou &&
- Utilizar somente estrutura if/else conforme apresentada abaixo
- Não utilizar switch/case
- Não utilizar a estrutura "else if"
*/
#include <stdio.h>

int main(){
    int Idade = 0 ;
    printf("digite sua idade ");
    scanf("%d",&Idade);
    
    if (Idade == 0 ){
        printf("nao naceu");
            }
    if(Idade <=14){
            printf("nao vota\n"); 
            }
    if(Idade <=17){
                printf("opicional\n");
            }
    if(Idade==41){
                printf("paravens vc ganhou o premio e nao vota!!\n");
            }
    if(Idade <=64){
                 printf("obrigatorio\n");
    }
    if (Idade == 65){
                 printf("opicional\n");
            }
    if(Idade==88){
                 printf("parabens vc ganhou o premio e nao vota!!\n");  
            }
             
    return 0;
}