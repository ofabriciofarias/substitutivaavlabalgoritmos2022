/*

Um banco concederá um crédito especial aos seus clientes, variável de acordo com o
saldo médio do cliente no último ano. Faça um programa que receba digitado pelo
usuário seu saldo médio do ano anterior e calcule o valor do crédito de acordo com a
tabela abaixo. Mostre uma mensagem informando o saldo médio e o valor do crédito
ofertado


Caso o usuário digite um valor negativo, apresente uma mensagem de erro e informe
que não foi possível calcular o valor de crédito.

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
