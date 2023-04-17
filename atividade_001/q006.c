/*
*Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de 
*reajuste. Calcular e escrever o valor do novo salário.
*/

void main(){
    float Salario_mensal=0;
    float Porcentual_de_ajuste = 0;

    printf("digite o seu salari mensal ?\n");
    scanf("%f",&Salario_mensal);

    printf("qual e o percentual de ajuste do seu salario?\n");
    scanf("%f",&Porcentual_de_ajuste);

    float Novo_salari = (Salario_mensal/100)*Porcentual_de_ajuste+Salario_mensal;

    printf("seu novo salario e de %0.2f\n",Novo_salari);
}