#include <stdio.h>

int main() {
    float peso, altura, resultado_imc;

    // Entrada de dados
    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura em m: ");
    scanf("%f", &altura);

    // Cálculo do IMC
    resultado_imc = peso / (altura * altura);

    // Saída formatada
    printf("Seu IMC é: %.2f\n", resultado_imc);

    return 0;
}