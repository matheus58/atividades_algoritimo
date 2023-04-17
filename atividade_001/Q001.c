/*
*Faça um programa em que o usuário digite o custo de uma determinada
* mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas eventuais
*(também solicitadas pelo teclado). Para concluir, o programa pergunta qual o valor de
*venda e indica a percentagem de lucro da mercadoria;
*/

#include <stdio.h>

void main (){

    int Nome_produto = 0 ;//variavel para escolher o produto ;
    float Preco_produto = 0 ;
    float Preco_frete = 0 ;
    float Preco_eventuais = 0 ;
    float Preco_venda = 0 ;



    printf("digite o valor de uma dessas mercadorias:\n");
    //mercadorias
    printf("digite o numero na a frente para selecionar a mercadoria \n");
    printf("banana 1 \n cap nudos 2 \n chocolate 3 \n fejao 4 \n arros 5 \n");
    scanf("%d",&Nome_produto);

    switch (Nome_produto)
    {
    case 1:
        //Digitar o preco do produto :
        printf("digite o custo dessa mercadoria:");
        scanf("%f",&Preco_produto);
        //Custo do frete:
        printf("digite custo do valor do frete :");
        scanf("%f",&Preco_frete);
        //custos eventuais:
        printf("digite o valor de alguma despesa eventuais: ");
        scanf("%f",&Preco_eventuais);
        //preço de venda
        printf("digite o valor de revenda :");
        scanf("%f",&Preco_venda);
        break;
    case 2:
        //Digitar o preco do produto :
        printf("digite o custo dessa mercadoria:");
        scanf("%f",&Preco_produto);
        //Custo do frete:
        printf("digite custo do valor do frete :");
        scanf("%f",&Preco_frete);
        //custos eventuais:
        printf("digite o valor de alguma despesa eventuais :");
        scanf("%f",&Preco_eventuais);
        //preço de venda
        printf("digite o valor de revenda :");
        scanf("%f",&Preco_venda);
        break;

    case 3:
        //Digitar o preco do produto :
        printf("digite o custo dessa mercadoria:");
        scanf("%f",&Preco_produto);
        //Custo do frete:
        printf("digite custo do valor do frete :");
        scanf("%f",&Preco_frete);
        //custos eventuais:
        printf("digite o valor de alguma despesa eventuais: ");
        scanf("%f",&Preco_eventuais);
        //preço de venda
        printf("digite o valor de revenda :");
        scanf("%f",&Preco_venda);
        break;
    case 4:
        //Digitar o preco do produto :
        printf("digite o custo dessa mercadoria:");
        scanf("%f",&Preco_produto);
        //Custo do frete:
        printf("digite custo do valor do frete :");
        scanf("%f",&Preco_frete);
        //custos eventuais:
        printf("digite o valor de alguma despesa eventuais: ");
        scanf("%f",&Preco_eventuais);
        //preço de venda
        printf("digite o valor de revenda :");
        scanf("%f",&Preco_venda);
        break;
    case 5:
        //Digitar o preco do produto :
        printf("digite o custo dessa mercadoria:");
        scanf("%f",&Preco_produto);
        //Custo do frete:
        printf("digite custo do valor do frete :");
        scanf("%f",&Preco_frete);
        //custos eventuais:
        printf("digite o valor de alguma despesa eventuais :");
        scanf("%f",&Preco_eventuais);        //preço de venda
        printf("digite o valor de revenda :");
        scanf("%f",&Preco_venda);
        break;
    default:
        printf("voce nao escolheu nenhum dos valore");
        break;
    }
    // porcentagem de lucro :
    float Porcentagem_lucro = ((Preco_produto+Preco_eventuais+Preco_frete)/Preco_venda)* 100;

    printf("o lucro final foi de %0.0f %% \n",Porcentagem_lucro);
    printf("bola \n");

	return 0 ;

}
