/**********************************************
* Nome do projeto: Header com conversores de unidades
* Autor: EmbarcaTech CEPEDI - Grupo 7 (Subgrupo 4)
* Data de criação: 14/12/2024
* Descrição: [ADICIONAR DESCRIÇÃO DO PROJETO]
* Funcionalidades: [LISTAR AS FUNCIONALIDADES]
* Dependências: [ADICIONAR TODAS AS DEPENDÊNCIAS UTILIZADAS]
* Histórico de Revisões: {
*   - (14/12/2024) - Vitor Costa - Criou o header principal, com o menu de opções de conversão
*   - [DATA] - [NOME] - Adicionou/modificou [descrição da mudança]
* }
* Contribuidores: Vitor Almeida Costa, [ADICIONAR NOME AQUI]
* Líder do projeto: [ADICIONAR NOME]
 ***********************************************/

#define TONELADA   1
#define QUILOGRAMA 2
#define GRAMA      3


#include <string.h>

/********************************************** CONVERSOR DE UNIDADES DE COMPRIMENTO ***********************************************/

char exibirMenuConversaoMassa()
{
    int unidadeInicial = 0;
    printf("Escolha a unidade que deseja converter:\n");
    printf("1. Toneladas (T)\n");
    printf("2. Quilogramas (KG)\n");
    printf("3. Gramas (g)\n");
    printf("Digite a opcao desejada: ");
    scanf("%c", &unidadeInicial);
    return unidadeInicial;
}


int exibirMenu() {
    int unidadeInicial = 0;
    printf("Escolha a unidade que deseja converter:\n");
    printf("1. Watt (W)\n");
    printf("2. QuiloWatts (kW)\n");
    printf("3. Horse Power (hp)\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &unidadeInicial);
    return unidadeInicial;
}

void converter_energia() {

    float W;
    float kW;
    float hp;
    int unidadeInicial = 0;

    unidadeInicial = exibirMenu();

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
}

// Função para exibir o menu inicial do conversor de comprimento
void exibirMenuComprimento() {
    printf("Escolha a unidade inicial:\n");
    printf("1. Para Metro digite (mt)\n");
    printf("2. Para Centímetro digite (cm)\n");
    printf("3. Para Milímetro digite (mm)\n");
    printf("Digite a opção desejada: ");
}

//Conversor de unidade de comprimento
void conv_comprimento(){

    char opcaoInicial[4];
    char opcaoDestino[4];
    float valor, resultado;

    // Exibe o menu e lê a unidade inicial
    exibirMenuComprimento();
    scanf("%3s", opcaoInicial); // Limita a entrada para evitar estouro de buffer
    fflush(stdin);//Limpa o buffer

    // Valida a opção inicial
    if (strcmp(opcaoInicial, "mt") != 0 && strcmp(opcaoInicial, "cm") != 0 && strcmp(opcaoInicial, "mm") != 0) {
        printf("Opção inválida!\n");
        //return 1;
    }

    // Solicita o valor a ser convertido
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);
    fflush(stdin);//Limpa o buffer

    // Exibe o menu novamente para a unidade de destino
    printf("Escolha a unidade de destino:\n");
    printf("1. Para Metro digite (mt)\n");
    printf("2. Para Centímetro digite (cm)\n");
    printf("3. Para Milímetro digite (mm)\n");
    printf("Digite a opção desejada: ");
    scanf("%3s", opcaoDestino);
    fflush(stdin);//Limpa o buffer

    // Valida a opção de destino
    if (strcmp(opcaoDestino, "mt") != 0 && strcmp(opcaoDestino, "cm") != 0 && strcmp(opcaoDestino, "mm") != 0) {
        printf("Opção inválida!\n");
        //return 1;
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

}

/********************************************** CONVERSOR DE UNIDADES DE MASSA ***********************************************/

float ton2grams(float ton) { return ton*1000000; };

float ton2kilograms(float ton) { return ton*1000; };

float kilograms2ton(float kilograms) { return kilograms/1000; };

float kilograms2grams(float kilograms) { return kilograms*1000; };

float grams2ton(float grams) { return grams/1000000; };

float grams2kilograms(float grams) { return grams/1000; };

//Conversor de unidades de massa
void conv_massa(){
    char unidadeInicial = 0;
    float massToConvert, convertedMass1, convertedMass2;

    unidadeInicial = exibirMenuConversaoMassa();
    printf("Digite o valor a ser convertido: \n");
    scanf("%f", &massToConvert);

    switch (unidadeInicial)
    {
    case TONELADA:
        convertedMass1 = ton2grams(massToConvert);
        convertedMass2 = ton2kilograms(massToConvert);
        printf("%.2fT equivale a %.2fg e %.2fKG\n", massToConvert, convertedMass1, convertedMass2);
        break;
    case QUILOGRAMA:
        convertedMass1 = kilograms2grams(massToConvert);
        convertedMass2 = kilograms2ton(massToConvert);
        printf("%.2fKG equivale a %.2fg e %.2fT\n", massToConvert, convertedMass1, convertedMass2);
        break;
    case GRAMA:
        convertedMass1 = grams2kilograms(massToConvert);
        convertedMass2 = grams2ton(massToConvert);
        printf("%.2fg equivale a %.2fKG e %.2fT\n", massToConvert, convertedMass1, convertedMass2);
        break;
    default:
        printf("Escolha errada\n");
        break;
    }
}

/********************************************** CONVERSOR DE UNIDADES DE VOLUME ***********************************************/

//Conversor de unidades de volume
void conv_volume(){
    
}

/********************************************** CONVERSOR DE UNIDADES DE TEMPERATURA ***********************************************/

//Conversor de unidades de temperatura
void conv_temperatura(){
    
}

/********************************************** CONVERSOR DE UNIDADES DE VELOCIDADE ***********************************************/

//Conversor de unidades de velocidade
void conv_velocidade(){
    
}

/********************************************** CONVERSOR DE UNIDADES DE ENERGIA ***********************************************/

// Função para exibir o menu inicial do conversor de unidades de energia
void exibirMenuEnergia() {

    printf("Escolha a unidade que deseja converter:\n");
    printf("1. Watt (W)\n");
    printf("2. QuiloWatts (kW)\n");
    printf("3. Horse Power (hp)\n");
    printf("Digite a opcao desejada: ");

}
//Conversor de unidades de energia
void conv_energia(){

    float W;
    float kW;
    float hp;

    int unidadeInicial;

    exibirMenuEnergia();
    scanf("%d", &unidadeInicial);
    fflush(stdin);//Limpa o buffer

    switch (unidadeInicial) {
    case 1:
        printf("\nDigite o valor em W: ");
        scanf("%f", &W);
        fflush(stdin);//Limpa o buffer

        kW = W/1000;
        hp = W/745.7;

        printf("\n%.3f W convertido para %.3f kW e %.3f hp\n", W, kW, hp);
        break;  
    case 2:
        printf("\nDigite o valor em kW: ");
        scanf("%f", &kW);
        fflush(stdin);//Limpa o buffer

        W = kW*1000;
        hp = kW/0.7457;

        printf("\n%.3f kW convertido para %.3f W e %.3f hp\n", kW, W, hp);
        break;  
    case 3:
        printf("\nDigite o valor em hp: ");
        scanf("%f", &hp);
        fflush(stdin);//Limpa o buffer

        W = hp*745.7;
        kW = hp*0.7457;

        printf("\n%.3f hp convertido para %.3f W e %.3f kW\n", hp, W, kW);
        break;  
    default:
        printf("\nErro");
        break;  

    }
}

/********************************************** CONVERSOR DE UNIDADES DE AREA ***********************************************/

//Conversor de unidades de area
void conv_area(){

    float valor, resultado;
    int direcao;

    printf("Converter:\n");
    printf("1 - Metros quadrados para centimetros quadrados\n");
    printf("2 - Centimetros quadrados para metros quadrados\n");
    printf("Escolha a direcao da conversao (1 ou 2): ");
    scanf("%d", &direcao);
    fflush(stdin);

    if (direcao == 1) {
        printf("Digite o valor em metros quadrados: ");
        scanf("%f", &valor);
        fflush(stdin);
        resultado = valor * 10000;
        printf("%.2f metros quadrados equivalem a %.2f centimetros quadrados.\n", valor, resultado);
    } else if (direcao == 2) {
        printf("Digite o valor em centimetros quadrados: ");
        scanf("%f", &valor);
        fflush(stdin);
        resultado = valor / 10000;
        printf("%.2f centimetros quadrados equivalem a %.2f metros quadrados.\n", valor, resultado);
    } else {
        printf("Direcao de conversao invalida.\n");
    }
}

/********************************************** CONVERSOR DE UNIDADES DE TEMPO ***********************************************/

//Conversor de unidades de tempo
void conv_tempo(){

    int tipo;
    float valor, tempo, seg, min, horas;

    printf("Qual unidade voce quer converter? \n");
    printf("1 - segundos\n");
    printf("2 - minutos\n");
    printf("3 - horas\n\n");
    printf("Sua opcao: ");
    scanf("%d", &tipo); //Usuário digita itemEscolhido
    fflush(stdin); //Limpa o buffer

    switch(tipo){
        case 1:{
            //converter metros para cm e mm
            printf("Digite o tempo em segundos: ");
            scanf("%f", &valor);
            fflush(stdin); //Limpa o buffer
            tempo = valor;
            horas = (int)(tempo / 3600);  // Calcula o número de horas
            tempo = (int)tempo % 3600;    // Resto dos segundos após calcular as horas
            min = (int)(tempo / 60);      // Calcula o número de minutos
            seg = (int)tempo % 60;        // Calcula o número de segundos restantes
            printf("\n%.2f segundos = %.0f h %.0f min %.0f s\n\n", valor, horas, min, seg);
            break;
        }
        case 2:{
            //converter centimetro para m e mm
            printf("Digite o tempo em minutos: ");
            scanf("%f", &valor);
            fflush(stdin); //Limpa o buffer
            tempo = valor * 60;
            horas = (int)(tempo / 3600);  // Calcula o número de horas
            tempo = (int)tempo % 3600;    // Resto dos segundos após calcular as horas
            min = (int)(tempo / 60);      // Calcula o número de minutos
            seg = (int)tempo % 60;        // Calcula o número de segundos restantes
            printf("\n%.2f minutos = %.0f h %.0f min %.0f s\n\n", valor, horas, min, seg);
            break;
        }
        case 3:{
            //converter milimetros para m e cm
            printf("Digite o tempo em horas: ");
            scanf("%f", &valor);
            fflush(stdin); //Limpa o buffer
            tempo = valor * 3600;
            horas = (int)(tempo / 3600);  // Calcula o número de horas
            tempo = (int)tempo % 3600;    // Resto dos segundos após calcular as horas
            min = (int)(tempo / 60);      // Calcula o número de minutos
            seg = (int)tempo % 60;        // Calcula o número de segundos restantes
            printf("\n%.2f horas = %.0f h %.0f min %.0f s\n\n", valor, horas, min, seg);
            break;
        }
        default:{
            printf("Opcao invalida. \n");
            break;
        }
    }
}

/********************************************** CONVERSOR DE UNIDADES DE MEMÓRIA ***********************************************/

//Conversor de unidades de dados
void conv_memoria(){
    
}
