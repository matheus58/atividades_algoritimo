/*
* Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa 
*pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias
*/

void main(){
    int Anos;
    int Meses;
    int dias ;
    int Total_dias;

    printf("digite quantos anos de vida voce tem\n"); 
    scanf("%d",&Anos);

    printf("quantos mese\n");
    scanf("%d",&Meses); 

    printf( "e dias \n");
    scanf("%d",&dias);


    Total_dias = (Anos*360)+(Meses*30)+dias;

    printf("voce tem %d de vida \n",Total_dias);

}