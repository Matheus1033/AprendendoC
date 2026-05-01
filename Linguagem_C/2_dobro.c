// 1. Documentação de uma única linha (Usado para comentários pequenos)

/* Documentação de múltiplas linhas (Usado para comentários maiores)
Programa para calcular o dobro de um valor qualquer
*/

/* 2. Diretiva de compilação (Avisa ao compilador para carregar as funções prontas armazenadas no arquivo (biblioteca) stdio.h
 */
#include <stdio.h> //contém funções de entrada/saída como printf e scanf

// 3. Definição de uma constante usando o #define)
#define DOBRO 2 // Atribui o valor 2 a uma constante chamada DOBRO

// 4. Função principal e obrigatória main
int main()
{

    // 5. Definição de duas variáveis do tipo inteiro
    int valor, valor_total;

    // 6. Instruções com o que e como o programa deve fazer

    // A função printf exibe na tela o valor entre aspas
    printf("Digite o valor: ");

    /* A função scanf lê o número digitado na tela e o armazena na variável valor  */
    scanf("%d", &valor);

    /* A variável valor_total recebe o número armazenado na variável valor multiplicado pelo número atribuído à constante DOBRO
     */
    valor_total = valor * DOBRO; // Uso da variável e da constante

    /* A função printf exibe na tela o valor entre aspas, mas antes substitui o formatador %d pelo valor da variável valor_total  */
    printf("O dobro do valor digitado é: %d\n", valor_total);

    // 7. Retorno
    return 0; // Indica que o programa terminou com sucesso
}