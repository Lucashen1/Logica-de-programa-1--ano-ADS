/**
ALUNO: Lucas Henrique Dutra de Oliveira
DATA: 03/06/2026
OBJ: calculadora de IMC
**/
#include<stdio.h>
float calcularIMC(float peso, float altura);
void classificarIMC(float imc);

int main(){
    float valorPeso, valorAltura;

    printf("Digite seu peso: ");
    scanf("%f", &valorPeso);
    printf("Digite sua altura: ");
    scanf("%f", &valorAltura);

    classificarIMC(calcularIMC(valorPeso,valorAltura));

    return 0;
}
float calcularIMC(float peso, float altura){
    float valor = peso/(altura*altura);
    return valor;
}
void classificarIMC(float imc){
    printf("IMC: %.1f\n", imc);
    if(imc>18.5){
        printf("classificação: Peso normal.");
    } else if(imc>24.9){
        printf("classificação: sobrepeso.");
    } else if(imc>30){
        printf("classificação: Obesidade.");
    } else{
        printf("classificação: Abaixo do peso.");
    }
}
