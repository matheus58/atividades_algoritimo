/*
 * Elabore um programa de uma calculadora onde o usuário informará o primeiro valor, a operação e
 * o segundo valor, deverão serem implementadas as funções le_valida_n1, le _valida_n2,
 * le_valida_operador, soma, subtracao, multiplicacao, divisao
 * (considerar o tratamento da divisão por zero).
 *       Também deverão serem desenvolvidos os procedimentos cabecalho, rodape e a cada operação
 * realizada a tela deverá ser limpa reapresentando o cabeçalho e rodapé a
 * cada operação realizada.
 *      O resultado deverá ser apresentado na  tela conforme o exemplo abaixo  com a
 *opção "Deseja continuar" sendo apresentada ao final:
 *
 * +-----------------------------------+
 * |            SUPER CALC             |
 * +-----------------------------------+
 * |          O resultado da           |
 * |          soma 10+10 eh            |
 * |                20                 |
 * +-----------------------------------+
 * |          Copyright 2023           |
 * +-----------------------------------+
 * |      Deseja continuar? (S/N):     |
 * +-----------------------------------+
 */

#include <stdio.h>

int Valor_1(int* n1);
int Valor_2(int* n2);
char Operador(char* O);

int main() {
    int v1 = 0, v2 = 0;
    char p;
    int resultado = 0;
    char para;

    do {
        Valor_1(&v1);
        Valor_2(&v2);
        Operador(&p);

        switch (p) {
            case '+':
                resultado = v1 + v2 ;
                break;
            case '-':
                resultado = v1 - v2;
                break;
            case '/':
                resultado = v1 / v2 ;
                break;
            case '*':
                resultado = v1 * v2;
                break;
            default:
                printf("operação inválida\n");
                continue;
        }

        printf("+-------------------------------+\n");
        printf("|          SUPER CALL           |\n");
        printf("+-------------------------------+\n");
        printf("|     O resultado da operação   |\n");
        printf("|        de   %d %c %d          |\n", v1, p, v2);
        printf("|        é   %d                 |\n", resultado);
        printf("+-------------------------------+\n");
        printf("|    Deseja continuar (s/n)     |\n");
        printf("+-------------------------------+\n");
        scanf(" %c", &para); // removi o \n que estava antes do %c
        

    } while (para == 's');

    return 0;
}

int Valor_1(int* n1) {
    int verificador = -1;
    char text;

    do {
        printf("Digite o primeiro Valor:\n");
        verificador = scanf("%d", n1);
        do {
            text = getchar();
        } while (text != '\n');
    } while (verificador == 0);

    return *n1;
}

int Valor_2(int* n2) {
    int verificador = -1;
    int text;

    do {
        printf("Digite o segundo valor:\n");
        verificador = scanf("%d", n2);
        do {
            text = getchar();
        } while (text != '\n');
    } while (verificador == 0);

    return *n2;
}

char Operador(char* O) {
    int verificador = -1;
    int text;

    do {
        printf("Digite a operação que deseja fazer (+, -, *, /):\n");
        verificador = scanf(" %c", O); // removi o \n que estava antes do %c

    } while (verificador == -1);

    return *O;
}
