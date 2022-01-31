/*

Faça um programa em que usuário carregue um vetor A (15) de inteiros. Em seguida,
substitua todos os valores negativos digitados pelo usuário pelo valor 0. Ao final,
apresente o vetor A original e o vetor AModificado

*/

#include <stdio.h>

int main(){

    int i, tam = 15;
    int A[tam], AModificado[tam];


    printf("Digite os valores para as 15 posicoes do vetor A\n");
    for(i = 0; i < tam; i++){
        scanf("%d", &A[i]);
    }

    for(i = 0; i < tam; i++){
        if(A[i] < 0){
            AModificado[i] = 0;
        }else{
            AModificado[i] = A[i];
        }
   }

   for(i = 0; i < tam; i++){
        printf("A[%d]= %d      && AModificado[%d]= %d\n", (i+1), A[i], (i+1), AModificado[i]);
        }

return 0;
}
