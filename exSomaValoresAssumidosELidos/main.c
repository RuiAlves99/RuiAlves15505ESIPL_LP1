/**
 * @file main.c
 * @author Rui Alves (a15505@alunos.ipca.pt)
 * @brief Soma tres valores inicialmente assumidos e posteriormente lidos
 * @version 0.1
 * @date 2020-11-03
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<stdio.h>

//Assinatura de funções
int somaTresValores(int x, int y, int z);

/**
 * @brief 
 * 
 * @return int 
 */
int main(){

    int x = 3, y = 4, z = 6;

    printf("%d + %d + %d = %d\n", x, y, z, somaTresValores(x, y, z));

    puts("Introduza o primeiro valor");
    scanf("%d", &x);
    
    puts("Introduza o segundo valor");
    scanf("%d", &y);
    
    puts("Introduza o primeiro valor");
    scanf("%d", &z);

    printf("%d + %d + %d = %d\n", x, y, z, somaTresValores(x, y, z));
}

/**
 * @brief soma tres valores
 * 
 * @param x primeiro valor inteiro
 * @param y primeiro valor inteiro
 * @param z primeiro valor inteiro
 * @return int 
 */
int somaTresValores(int x, int y, int z){
    return (x + y + z);
}