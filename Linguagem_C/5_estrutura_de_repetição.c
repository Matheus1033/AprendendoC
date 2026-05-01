#include <stdio.h>
/*
int main()
{
    int i, limite;

    printf("Entre com o limite: ");
    scanf("%d", &limite);
    for (i = 2; i <= limite; i++)
        if (!(i % 2))
            printf("Valor: %d\n", i);
    return 0;
}
*/
int main()
{
    int i, limite;

    printf("Entre com o limite: ");
    scanf("%d", &limite);
    for (i = 2; i <= limite; i++) // ( 1 )
        if (!(i % 2))             // ( 2 )
            printf("Valor: %d\n", i);
    return 0;
}