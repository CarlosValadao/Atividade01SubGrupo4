#include <stdio.h>

int unidadeInicial;

// Função para exibir o menu inicial
void exibirMenu() {
    

    printf("Escolha a unidade que deseja converter:\n");
    printf("1. Watt (W)\n");
    printf("2. QuiloWatts (kW)\n");
    printf("3. Horse Power (hp)\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &unidadeInicial);

}
int main() {

    float W;
    float kW;
    float hp;

    exibirMenu();

    switch (unidadeInicial) {
    case 1:
        printf("\nDigite o valor em W: ");
        scanf("%f", &W);

        kW = W/1000;
        hp = W/745.7;

        printf("\n%.3f W convertido para %.3f kW e %.3f hp", W, kW, hp);
        break;  
    case 2:
        printf("\nDigite o valor em kW: ");
        scanf("%f", &kW);

        W = kW*1000;
        hp = kW/0.7457;

        printf("\n%.3f kW convertido para %.3f W e %.3f hp", kW, W, hp);
        break;  
    case 3:
        printf("\nDigite o valor em hp: ");
        scanf("%f", &hp);

        W = hp*745.7;
        kW = hp*0.7457;

        printf("\n%.3f hp convertido para %.3f W e %.3f kW", hp, W, kW);
        break;  
    default:
        printf("\nErro");
        break;  

    }

    return 0;

}
