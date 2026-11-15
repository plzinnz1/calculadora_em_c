#include <stdio.h>

int main() {
    char op[20];
    double n1, n2, resultado;

    while (1) {
        printf("==============================\n");
        printf("       Calculadora Simples\n");
        printf("==============================\n");
        printf("Selecione uma operação:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Opção: ");

        scanf("%19s", op);

        if (op[1] != '\0' || op[0] < '1' || op[0] > '5') {
            printf("Opção inválida. Digite um número inteiro entre 1 e 5.\n\n");
         continue;
        }

        if (op[0] == '5') {
            printf("Obrigado por usar a calculadora! Até a próxima.\n");
         break;
        }

         printf("Digite o primeiro número: ");
        if (scanf("%lf", &n1) != 1) {
            printf("Número inválido.\n");
         break;
        }

        printf("Digite o segundo número: ");
        if (scanf("%lf", &n2) != 1) {
         printf("Número inválido.\n");
          break;
        }

        if (op[0] == '1') {
            resultado = n1 + n2;
            printf("Resultado: %g + %g = %g\n", n1, n2, resultado);
        }else if (op[0] == '2') {
            resultado = n1 - n2;
            printf("Resultado: %g - %g = %g\n", n1, n2, resultado);
        }else if (op[0] == '3') {
            resultado = n1 * n2;
            printf("Resultado: %g * %g = %g\n", n1, n2, resultado);
        }else{
            if (n2 == 0) {
                printf("Erro: Divisão por zero não é permitida.\n");
            }else{
                resultado = n1 / n2;
                printf("Resultado: %g / %g = %g\n", n1, n2, resultado);
            }
        }

        break;
    }

    return 0;
}