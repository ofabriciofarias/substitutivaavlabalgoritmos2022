/*

Faça uma função que receba como argumentos, a altura (alt) e o sexo de uma pessoa e
retorne o seu peso ideal. A altura deve ser em float e o sexo do tipo inteiro, sendo 1
para masculino e 2 para feminino.
Se for masculino, calcule o peso ideal usando a fórmula peso ideal = 72.7 x alt – 58, e
Se for feminino, calcule o peso ideal = 62.1 x alt - 44.7.
Retorne para a função main o resultado e apresente ao usuário.

*/

#include <stdio.h>

float pesoIdeal(float alt, int sexo);

int main(){

    int s;
    float altura, r;

    printf("Digite o sexo da pessoa\n"
           "1 - Masculino\n"
           "2 - Feminino\n"
           "Selecione o sexo: ");
    scanf("%d", &s);

    printf("Digite a altura da pessoa: ");
    scanf("%f", &altura);


    r = pesoIdeal(altura, s);

    if(r == -1){
        printf("Desculpe. Nao foi possivel calcular o peso ideal\n");
    }else{
        printf("O peso ideal = %.2f para uma pessoa do sexo %d e altura %.2f\n", r, s, altura);
    }

    return 0;
}

float pesoIdeal(float alt, int sexo){
    int aux;

    if(sexo == 1){
        aux = 72.7 * alt - 58;
    }else if(sexo == 2){
        aux = 62.1 * alt - 44.7;
    }else{
        return -1;
    }

    return aux;
}
