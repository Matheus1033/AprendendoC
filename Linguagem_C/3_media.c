#include <stdio.h>

int main()
{
    float num1, num2, media;                 // declara as variáveis num1, num2 e media como float
    printf("Digite o primeiro número: ");    // solicita o primeiro valor
    scanf("%f", &num1);                      // atribui o valor lido à variável num1
    printf("Digite o segundo número: ");     // solicita o segundo valor
    scanf("%f", &num2);                      // atribui o valor lido à variável num2
    media = (num1 + num2) / 2;               // calcula a média
    printf("Valor da média: %.1f\n", media); // exibe o valor calculado

    return 0;
}
