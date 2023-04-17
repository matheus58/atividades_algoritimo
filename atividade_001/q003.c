/*
*Faça um programa que calcule a quantidade necessária de latas de tinta para pintar uma parede.
* O programa pergunta as medidas de largura e altura da parede em metros e escreve quantas latas
* de tinta serão necessárias para pintá-la. Considere que o consumo de tinta é de 300 ml por metro
* quadrado e a quantidade de tinta por lata é de 2 litros.
*/

void main(){

    float Altura_parede ;
    float Largura_parede ;


    printf("digite em metros \n");

    printf("Digite a altura da sua parede :\n");  
    scanf("%f", &Altura_parede);

    printf("digite a largura da sua parede :\n");
    scanf("%f",&Largura_parede);
    
    float Area_parede = Altura_parede*Largura_parede;

    float Latas = (Area_parede*300)/2000;

    printf("%0.2f\n",Latas);
    
}