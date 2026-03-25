#include <stdio.h>
int main()
{
    int idade;
    printf("Qual sua idade?");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 10) {
        printf("Você faz parte da classe das crianças!");
    } else if (idade >= 11 && idade <= 17) {
        printf("Você faz parte da classe dos adolescentes!");
    } else if (idade >= 18 && idade <= 30) {
        printf("Você faz parte da classe dos adultos");
    } else {
        printf("Você faz parte da classe dos idosos");
    }
    return 0;
}
