/**
 * @file main.c
 * @author Rui Alves (a15505@alunos.ipca.pt)
 * @brief Calcular as operações aritméticas.
 * @version 0.1
 * @date 2020-11-03
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<stdio.h>

/**
 * @brief Após a introdução de dois valores calcula e apresenta as operações aritméticas entre os mesmos.
 * 
 * @return int 
 */
int main(){

    //declaração das variáveis
    float primeiroValor, segundoValor;

    //introdução de valores
    puts("Introduza o primeiro valor");
    scanf("%f", &primeiroValor);
    
    puts("Introduza o segundo valor");
    scanf("%f", &segundoValor);

    //calculo e apresentação de valores
    printf("A soma dos valores é %.2f\n", primeiroValor + segundoValor);
    printf("A subtração dos valores é %.2f\n", primeiroValor - segundoValor);
    printf("A multiplicação dos valores é %.2f\n", primeiroValor * segundoValor);
    printf("A divisão dos valores é %.2f", primeiroValor / segundoValor);
    
    //pausa
    getchar();
    return 0;
}