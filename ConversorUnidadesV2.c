//Atualização do conversor de unidade de comprimento

#include <stdio.h>
#include <string.h>

// Função para exibir o menu inicial
void exibirMenu() {
    printf("Escolha a unidade inicial:\n");
    printf("1. Para Metro digite (mt)\n");
    printf("2. Para Centímetro digite (cm)\n");
    printf("3. Para Milímetro digite (mm)\n");
    printf("Digite a opção desejada: ");
}

// Função principal
int main() {
    char opcaoInicial[4];
    char opcaoDestino[4];
    float valor, resultado;

    // Exibe o menu e lê a unidade inicial
    exibirMenu();
    scanf("%3s", opcaoInicial); // Limita a entrada para evitar estouro de buffer

    // Valida a opção inicial
    if (strcmp(opcaoInicial, "mt") != 0 && strcmp(opcaoInicial, "cm") != 0 && strcmp(opcaoInicial, "mm") != 0) {
        printf("Opção inválida!\n");
        return 1;
    }

    // Solicita o valor a ser convertido
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    // Exibe o menu novamente para a unidade de destino
    printf("Escolha a unidade de destino:\n");
    printf("1. Para Metro digite (mt)\n");
    printf("2. Para Centímetro digite (cm)\n");
    printf("3. Para Milímetro digite (mm)\n");
    printf("Digite a opção desejada: ");
    scanf("%3s", opcaoDestino);

    // Valida a opção de destino
    if (strcmp(opcaoDestino, "mt") != 0 && strcmp(opcaoDestino, "cm") != 0 && strcmp(opcaoDestino, "mm") != 0) {
        printf("Opção inválida!\n");
        return 1;
    }

    // Processa a conversão com base nas opções escolhidas
    if (strcmp(opcaoInicial, opcaoDestino) == 0) {
        resultado = valor; // Mesma unidade, sem conversão
    } else if (strcmp(opcaoInicial, "mt") == 0) { // Metro para outras unidades
        if (strcmp(opcaoDestino, "cm") == 0) {
            resultado = valor * 100; // Metro para centímetro
        } else {
            resultado = valor * 1000; // Metro para milímetro
        }
    } else if (strcmp(opcaoInicial, "cm") == 0) { // Centímetro para outras unidades
        if (strcmp(opcaoDestino, "mt") == 0) {
            resultado = valor / 100; // Centímetro para metro
        } else {
            resultado = valor * 10; // Centímetro para milímetro
        }
    } else if (strcmp(opcaoInicial, "mm") == 0) { // Milímetro para outras unidades
        if (strcmp(opcaoDestino, "mt") == 0) {
            resultado = valor / 1000; // Milímetro para metro
        } else {
            resultado = valor / 10; // Milímetro para centímetro
        }
    }

    // Exibe o resultado
    printf("Resultado da conversão: %.2f\n", resultado);

    return 0;
}
