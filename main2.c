#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char op[20];
    char resp;
    int escolha;
    double n1, n2, resultado;

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

        scanf("%19s", op);

        int valido = 1;
        for (int i = 0; op[i] != '\0'; i++){
            if (!isdigit((unsigned char)op[i])){
                valido = 0;
            }
        }

        if (!valido){
            printf("Opção inválida. Digite um número inteiro entre 1 e 5.\n");
        continue;
        }

        escolha = atoi(op);

        if (escolha < 1 || escolha > 5){
            printf("Opção inválida. Digite um número entre 1 e 5.\n");
        continue;
        }

        if (escolha == 5){
            printf("Até a próxima!\n");
        break;
        }

        printf("Digite o primeiro número: ");
        if (scanf("%lf", &n1) != 1) {
            printf("Número inválido.\n");
            while (getchar() != '\n') {}
        }else{
            printf("Digite o segundo número: ");
            if (scanf("%lf", &n2) != 1) {
                printf("Número inválido.\n");
                while (getchar() != '\n') {}
            }else if (escolha == 1){
                resultado = n1 + n2;
                printf("Resultado: %g + %g = %g\n", n1, n2, resultado);
            }else if (escolha == 2){
                resultado = n1 - n2;
                printf("Resultado: %g - %g = %g\n", n1, n2, resultado);
            }else if (escolha == 3){
                resultado = n1 * n2;
                printf("Resultado: %g * %g = %g\n", n1, n2, resultado);
            }else{
                if (n2 == 0){
                    printf("Erro: divisão por zero não é permitida.\n");
                }else{
                    resultado = n1 / n2;
                    printf("Resultado: %g / %g = %g\n", n1, n2, resultado);
                }
            }
        }

        do {
            printf("Deseja realizar outra operação? (s/n): ");
            scanf(" %c", &resp);
            resp = tolower((unsigned char)resp);

            if (resp != 's' && resp != 'n'){
                printf("Resposta inválida. Digite s ou n.\n");
            }
        } while (resp != 's' && resp != 'n');

        if (resp == 'n') {
            printf("Até a próxima!\n");
        break;
        }
    }

    return 0;
}