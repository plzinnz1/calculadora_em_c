#include <stdio.h>
#include <ctype.h>

int main() {
    int opcao;
    double n1, n2, resultado;
    char resposta;

    while (1) {
        printf("==============================\n");
        printf("       Calculadora Simples\n");
        printf("==============================\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Opção: ");

              if (scanf("%d", &opcao) != 1) {
             printf("Entrada inválida. Digite um número de 1 a 5.\n");
            while(getchar() != '\n') {
            }
             continue;
        }

          if (opcao == 5) {
            printf("Até a próxima!\n");
        break;
        }

         if (opcao < 1 || opcao > 5) {
            printf("Opção inválida. Escolha um número de 1 a 5.\n");
        continue;
        }

        printf("Digite dois números: ");

          if (scanf("%lf %lf", &n1, &n2) != 2) {
            printf("Entrada inválida. Digite dois números.\n");
            while(getchar() != '\n') {
            }
        continue;
        }

        switch (opcao) {
            case 1:
                resultado = n1 + n2;
                printf("Resultado: %g + %g = %g\n", n1, n2, resultado);
            break;

            case 2:
                resultado = n1 - n2;
                printf("Resultado: %g - %g = %g\n", n1, n2, resultado);
            break;

            case 3:
                resultado = n1 * n2;
                printf("Resultado: %g * %g = %g\n", n1, n2, resultado);
            break;

            case 4:
                if (n2 == 0) {
                    printf("Erro: divisão por zero não é permitida.\n");
                }else{
                    resultado = n1 / n2;
                    printf("Resultado: %g / %g = %g\n", n1, n2, resultado);
                }
                break;
        }

         printf("Deseja fazer outra operação? (s/n): ");
        scanf(" %c", &resposta);
        resposta = tolower(resposta);

        if (resposta != 's') {
            printf("Até a próxima!\n");
        break;
        }

        printf("\n");
    }

    return 0;
}