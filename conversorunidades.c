#include <stdio.h>

int main() {
    float valor, resultado;
    char unidade_inicial, unidade_final;

    printf("Conversor de Unidades de Comprimento\n");

    // Menu de opções
    printf("Digite a unidade inicial (m, cm ou mm): ");
    scanf(" %c", &unidade_inicial);

    printf("Digite o valor: ");
    scanf("%f", &valor);

    printf("Digite a unidade final (m, cm ou mm): ");
    scanf(" %c", &unidade_final);

    // Conversões
    switch (unidade_inicial) {
        case 'm':
            if (unidade_final == 'cm') {
                resultado = valor * 100;
            } else if (unidade_final == 'mm') {
                resultado = valor * 1000;
            } else {
                printf("Unidade final inválida.\n");
                return 1;
            }
            break;
        case 'cm':
            if (unidade_final == 'm') {
                resultado = valor / 100;
            } else if (unidade_final == 'mm') {
                resultado = valor * 10;
            } else {
                printf("Unidade final inválida.\n");
                return 1;
            }
            break;
        case 'mm':
            if (unidade_final == 'm') {
                resultado = valor / 1000;
            } else if (unidade_final == 'cm') {
                resultado = valor / 10;
            } else {
                printf("Unidade final inválida.\n");
                return 1;
            }
            break;
        default:
            printf("Unidade inicial inválida.\n");
            return 1;
    }

    printf("%.2f %c = %.2f %c\n", valor, unidade_inicial, resultado, unidade_final);

    return 0;
}
