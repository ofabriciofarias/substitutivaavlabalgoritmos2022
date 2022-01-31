/*
Dada a distância D do robô até o início da quadra, onde está a cesta, a regra é a seguinte:
• Se D ≤ 800, a cesta vale 1 ponto;
• Se 800 < D ≤ 1400, a cesta vale 2 pontos;
• Se 1400 < D ≤ 2000, a cesta vale 3 pontos.
A organização da OIBR precisa de ajuda para automatizar o placar do jogo. Dado o valor da
distância D, você deve escrever um programa para calcular o número de pontos do lançamento.

*/

#include <stdio.h>

int main(){

    int D;

    scanf("%d", &D);


    if(D >= 0 && D <= 800){
        printf("1\n");
    }else if(D > 800 && D <= 1400){
        printf("2\n");
    }else if(D > 1400 && D <= 2000){
        printf("3\n");
    }else{
        printf("Entrada invalida\n");
    }

return 0;
}
