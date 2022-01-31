/*

Foi feita uma pesquisa entre os quarenta mil e vinte e quatro (40024) habitantes da
cidade de Cametá para coletar os seguintes dados: sexo (0-feminino, 1-masculino),
idade e altura. Faça um algoritmo que leia as informações coletadas e mostre as
seguintes informações:
a) média da idade do grupo;
b) média da altura das mulheres;
c) média da idade dos homens;
d) média da altura dos homens;
e) média da idade das mulheres.
Nota: Caso o usuário adicione um valor de sexo diferente dos aceitos, informe o erro
e solicite uma adição válida.
Nota2: Caso o usuário adicione uma altura ou idade negativa, informe ao usuário do
erro e solicite uma adição válida.

*/

#include <stdio.h>


int main(){

    int sexo, idade, somaSexoF = 0, somaIdadeF = 0, contF = 0;
    int somaSexoM = 0, somaIdadeM = 0, contM = 0;
    float altura, somaAlturaM = 0, somaAlturaF = 0;
    int pop = 0, popMax = 40024;

    while(pop < popMax){
        //Corresponde ao sexo
        do{
            printf("Digite o sexo (0 - Feminino, 1 - Masculino): ");
            scanf("%d", &sexo);

            if(sexo != 1 && sexo != 0){
                printf("Erro, digite uma entrada valida\n");
            }else if(sexo == 0){
                somaSexoF = somaSexoF + sexo;
                printf("Entrada Valida!\n");

                //Corresponde a idade
                do{
                    printf("Digite sua Idade: ");
                    scanf("%d", &idade);

                    if(idade < 0){
                        printf("Erro, digite uma Idade valida\n");
                    }else{
                        somaIdadeF = somaIdadeF + idade;
                        printf("Entrada Valida!\n");
                    }
                }while(idade < 0);

                //Corresponde a altura
                do{
                    printf("Digite sua altura: ");
                    scanf("%f", &altura);

                        if(altura < 0.0){
                            printf("Erro, digite uma altura valida\n");
                        }else{
                                somaAlturaF = somaAlturaF + altura;
                                printf("Entrada Valida!\n");
                            }
                }while(altura < 0);

                contF = contF + 1;

            }else if(sexo == 1){
                somaSexoM = somaSexoM + sexo;
                printf("Entrada Valida!\n");

                //Corresponde a idade
                do{
                    printf("Digite sua Idade: ");
                    scanf("%d", &idade);

                    if(idade < 0){
                        printf("Erro, digite uma Idade valida\n");
                    }else{
                        somaIdadeM = somaIdadeM + idade;
                        printf("Entrada Valida!\n");
                    }
                }while(idade < 0);

                //Corresponde a altura
                do{
                    printf("Digite sua altura: ");
                    scanf("%f", &altura);

                        if(altura < 0.0){
                            printf("Erro, digite uma altura valida\n");
                        }else{
                                somaAlturaM = somaAlturaM + altura;
                                printf("Entrada Valida!\n");
                            }
                }while(altura < 0);

                contM = contM + 1;
            }

        }while(sexo != 1 && sexo != 0);
        pop = pop + 1;
    }

    //Calculo as medias e apresento ao usuario
    //a) média da idade do grupo;
    float mediaIdadeGrupo = 0.0;
    mediaIdadeGrupo = (float) (somaIdadeF + somaIdadeM)/(contF + contM);
    printf("A media das idades do grupo eh de %.2f\n", mediaIdadeGrupo);

    //b) média da altura das mulheres;
    float mediaAlturaF = 0.0;
    if(contF != 0){
        mediaAlturaF = (float) somaAlturaF/contF;
        printf("A media de altura das mulheres = %.2f\n", mediaAlturaF);
    }else{
        printf("Impossivel calcular a media por falta de mulheres cadastradas\n");
    }

    //c) média da idade dos homens;
    float mediaIdadeM = 0.0;
    if(contM != 0){
        mediaIdadeM = (float) somaIdadeM/contM;
        printf("A media da idade dos homens = %.2f\n", mediaIdadeM);
    }else{
        printf("Impossivel calcular a media de idade dos homens cadastrados\n");
    }

    //d) média da altura dos homens;
    float mediaAlturaM = 0.0;
    if(contM != 0){
        mediaAlturaM = (float) somaAlturaM/contM;
        printf("A media de altura das homens = %.2f\n", mediaAlturaM);
    }else{
        printf("Impossivel calcular a media por falta de homens cadastradas\n");
    }

    //e) média da idade das mulheres.
    float mediaIdadeF = 0.0;
    if(contF != 0){
        mediaIdadeF = (float) somaIdadeF/contF;
        printf("A media da idade dos mulheres = %.2f\n", mediaIdadeF);
    }else{
        printf("Impossivel calcular a media de idade dos mulheres cadastrados\n");
    }

return 0;
}
