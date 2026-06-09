/**
ALUNO: Lucas Henrique Dutra de Oliveira
DATA: 03/06/2026
OBJ: funcao que acha maior valor do vetor
**/
#include<stdio.h>
int maiorVetor(int numeros[], int maiorValor, int contador);

int main(){
    int listaNumeros[5], x, maior, cont;

    maior=0;
    cont=0;
    for(x=0; x<5; x++){
        printf("Digite o %d numero: ", x);
        scanf("%d", &listaNumeros[x]);
        cont++;
    }
    maior=maiorVetor(listaNumeros, maior, cont);

    printf("o maior valor do vetor: %d", maior);

    return 0;
}
int maiorVetor(int numeros[], int maiorValor, int contador){
    for(int x=0; x<contador; x++){
        if(numeros[x]>maiorValor){
            maiorValor = numeros[x];
        }
    }
    return maiorValor;
}
