#include <stdio.h>
int main()
{
    //1. Atribuição simples (=)
    int saldo = 100;
    printf("O saldo é: %d\n", saldo);

    //2. Atribuição de soma (+=)
    saldo += 50;
    printf("O saldo é: %d\n", saldo);

    //3. Atribuição de subtração (-=)
    saldo -= 20;
    printf("O saldo é: %d\n", saldo);

    //4. Atribuição de multiplicação (*=)
    saldo *= 2;
    printf("O saldo é: %d\n", saldo);

    //5. Atribuição de divisão (/=)
    saldo /= 4;
    printf("O saldo é: %d\n", saldo);

    return 0;
}
int main () 
{
    int a = 10;
    int b = 20;
    int c = 10;

    printf("Valores a serem testados: a = %d\n, b = %d\n e c = %d\n", a, b, c);

    //Igualdade (==); Diferença (!=);
    
    printf("a é igual a c? %d\n", a == c);
    printf("a é igual a b? %d\n", a == b);
    printf("a é diferente de b? %d\n", a != b);

    //Maior que (>); Menor que (<);

    printf("a é maior que b? %d\n", a > b);
    printf("a é menor que b? %d\n", a < b);

    //Maior ou Igual que (>=); Menor ou Igual que (<=);

    printf("a é menor ou igual a c? %d\n", a <= c);
    printf("b é menor ou igual a 30? %d\n", b >= 30);

    return 0;
}
int main()
{
    int idade = 20;
    int tem_convite = 1;
    int tem_acompanhante = 0;

    //1.Operedor (&&): Ambos verdadeiros 
    printf("Pode entrar sozinho? %d\n", idade >= 18 && tem_convite == 1);
    //2.Operador (||): Um dos dois precisa ser verdadeiro
    printf("Tem acesso a festa? %d\n", tem_convite == 1 || tem_acompanhante == 1);
    //3.Operador (!): Inverte o resultado
    printf("Está sem acompanhante? %d\n", !tem_acompanhante);
    //Exemplo de intervalo
    int n = 25;
    printf("O numero %d está entre 10 e 30? %d\n", n, 10 < n && 30 > n);
    return 0;
}
