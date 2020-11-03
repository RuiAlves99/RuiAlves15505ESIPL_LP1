/**
 * @file main.c
 * @author Rui Alves (a15505@alunos.ipca.pt)
 * @brief Soma três valores positivos
 * @version 0.1
 * @date 2020-11-03
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<stdio.h>


/**
 * @brief Soma três valores positivos
 * 
 * @return int 
 */
int main(){

    int i = 0, x, somaValores = 0;

    //Soma valores apenas se estes forem positivos
    do{
        puts("Introduza um valor positivo");
        scanf("%d", &x);
        if(x > 0){
            i++;
            somaValores += x;
        }
        else{
            puts("Valor inválido");
        }
    }while(i < 3);


    //Apresenta o resultado da soma
    printf("A soma dos valores é %d", somaValores);

    getchar();
    return 0;
}