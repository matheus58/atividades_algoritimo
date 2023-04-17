/*
*O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do
* distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do
* distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de 
*fábrica de um carro, calcular e escrever o custo final ao consumidor;
*/

/*
*Preço	A partir de R$ 166.790 (Ford Ranger XL Cabine Simples 2.2 Diesel MT 4×4 2022);
*/

void main(){

    const float Valor_distribuidor = 28.00;
    float Valor_consumidor = 0 ;
    const float Valor_impostos = 45.00 ;
    float Valor_fabrica = 0 ;

    printf("digite o valor de fabrica de um carro :\n");
    scanf("%f",&Valor_fabrica);
    Valor_fabrica = Valor_fabrica/100;
    Valor_consumidor = (Valor_fabrica*Valor_distribuidor)+(Valor_fabrica*Valor_distribuidor)+(Valor_fabrica*100);

    printf("%0.2f\n",Valor_consumidor);
}