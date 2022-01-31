/*

Faça um programa que receba uma matriz A(4,4) digitada pelo usuário via o teclado.
Em seguida, some e apresente ao usuário o resultado da soma de todos os elementos
das linhas 1, 2 e 3 da matriz

*/

#include <stdio.h>

int main(){

    int i, j, tam = 4;
    int A[tam][tam];
    int soma = 0;

    for(i = 0; i < tam; i++){
            for(j = 0; j < tam; j++){
                printf("A[%d][%d] = ", (i+1), (j+1));
                scanf("%d", &A[i][j]);
            }
    }

    for(i = 0; i < tam; i++){
            for(j = 0; j < tam; j++){
                //Opcao Compacta
                if(i == 0 || i == 1 || i == 2)
                    soma = soma + A[i][j];
                /*
                //Opcao Expandida
                if(i == 0){
                    soma = soma + A[i][j];
                }
                if(i == 1){
                    soma = soma + A[i][j];
                }
                if(i == 2){
                    soma = soma + A[i][j];
                }
                */
            }
    }

    printf("A soma de todos os elementos das linhas 1, 2 e 3 = %d\n", soma);


return 0;
}
