/*

Um banco conceder� um cr�dito especial aos seus clientes, vari�vel de acordo com o
saldo m�dio do cliente no �ltimo ano. Fa�a um programa que receba digitado pelo
usu�rio seu saldo m�dio do ano anterior e calcule o valor do cr�dito de acordo com a
tabela abaixo. Mostre uma mensagem informando o saldo m�dio e o valor do cr�dito
ofertado


Caso o usu�rio digite um valor negativo, apresente uma mensagem de erro e informe
que n�o foi poss�vel calcular o valor de cr�dito.

*/

#include <stdio.h>

int main(){

    float saldoMedio;

    printf("Digite o Saldo Medio do ano anterior: ");
    scanf("%f", &saldoMedio);

    if(saldoMedio >= 0 && saldoMedio <= 100)
        printf("Voce nao tem nenhum valor disponivel de credito!\n");
    else if(saldoMedio > 100 && saldoMedio <= 300)
        printf("Seu saldo para emprestimo eh de valor de 20%, o que representa = %f\n", (saldoMedio * 0.2));
    else if(saldoMedio > 300 && saldoMedio <= 500)
        printf("Seu saldo para emprestimo eh de valor de 30%, o que representa = %f\n", (saldoMedio * 0.3));
    else if(saldoMedio > 500)
        printf("Seu saldo para emprestimo eh de valor de 40%, o que representa = %f\n", (saldoMedio * 0.4));
    else
        printf("Erro, nao foi possivel calcular o valor do credito. Digite na proxima tentativa um valor positivo\n");

return 0;
}
