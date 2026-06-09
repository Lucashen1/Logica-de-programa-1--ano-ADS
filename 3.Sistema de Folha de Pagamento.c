/**
ALUNO: Lucas Henrique Dutra de Oliveira
DATA: 03/06/2026
OBJ: sistema folha de pagamento
**/
#include<stdio.h>
float calcularSalarioBruto(float horas, float valorHoras);
float calcularDesconto(float salarioBruto);
float calcularSalarioLiquido(float salarioBruto, float valorDesconto);

int main(){
    float quantidadeHoras, precoHora;

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &quantidadeHoras);
    printf("Digite o valor da sua hora: ");
    scanf("%f", &precoHora);

    printf("Salario bruto: %.2f\n", calcularSalarioBruto(quantidadeHoras,precoHora));
    printf("INSS: %.2f\n", calcularDesconto(calcularSalarioBruto(quantidadeHoras,precoHora)));
    printf("Salario liquido: %.2f", calcularSalarioLiquido(calcularSalarioBruto(quantidadeHoras, precoHora),calcularDesconto(calcularSalarioBruto(quantidadeHoras,precoHora))));

    return 0;
}
float calcularSalarioBruto(float horas, float valorHoras){
    return horas*valorHoras;
}
float calcularDesconto(float salarioBruto){
    if(salarioBruto>3000){
        return salarioBruto*0.12;
    } else if(salarioBruto>1500){
        return salarioBruto*0.1;
    } else{
        return salarioBruto*0.08;
    }
}
float calcularSalarioLiquido(float salarioBruto, float valorDesconto){
    return salarioBruto - valorDesconto;
}
