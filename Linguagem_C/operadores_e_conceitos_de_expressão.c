#include <stdio.h>
int main()
{
    /*float r1, r2;
    r1 = 5 + 10 * 2;
    r2 = (5 + 10) * 2;
    printf("o resultado 1 é: %.2f\n O resultado 2 é: %.2f", r1, r2);*/
    float nota1 = 8.0;
    float nota2 = 6.0;
    float media_errada = nota1 + nota2 / 2;
    float media_certa = (nota1 + nota2) / 2;
    printf("A média errada é: %.1f\n", media_errada);
    printf("A média certa é: %.1f", media_certa);
    return 0;
}
