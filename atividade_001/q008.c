/*
*Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo 
*por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das 
*vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele 
*vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro 
*vendido. Calcule e escreva o salário final do vendedor.
*/
#include <stdio.h>

void main(){
    int Num_Carros_vendidos = 0 ;
    int ValorV_total = 0 ;
    int Valor_Salario = 0 ;
    int Valor_P_carros_v = 0 ;
    const int Valor_comisao = 5 ;

    printf("digite o numero de carroas vendidos no mes ?\n");
    scanf("%d",&Num_Carros_vendidos);
    printf("qual foi o valor total das vendas ?\n");
    scanf("%d",&ValorV_total);
    printf("qual e o seu salario fixo ?\n");
    scanf("%d",&Valor_Salario);
    printf("qual e a porcentagem comoisao por carro vendido ?\n");
    scanf("%d",&Valor_P_carros_v);

    //porcentagem individual por venda :
    int Porcentagem_venda = (ValorV_total/100)*Valor_P_carros_v;
    //porcentagem por carro vendido :
    int Pcarro = ((ValorV_total/Num_Carros_vendidos)/100)*Valor_comisao;
    
    
    int Salario_final = Valor_Salario + Pcarro + Porcentagem_venda ;

    printf("**************SALARIO**************** \n");
    printf("Comisao por venda : %d \nComisao fixa do mes : %d \nSalario final : %d \n ",Pcarro,Porcentagem_venda,Salario_final);

}