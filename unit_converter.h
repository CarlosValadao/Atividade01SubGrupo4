/**********************************************
* Nome do projeto: Header com conversores de unidades
* Autor: EmbarcaTech CEPEDI - Grupo 7 (Subgrupo 4)
* Data de criação: 14/12/2024
* Descrição: [ADICIONAR DESCRIÇÃO DO PROJETO]
* Funcionalidades: [LISTAR AS FUNCIONALIDADES]
* Dependências: [ADICIONAR TODAS AS DEPENDÊNCIAS UTILIZADAS]
* Histórico de Revisões: {
*   - (14/12/2024) - Vitor Costa - Criou o header principal, com o menu de opções de conversão
*   - (26/12/2024) - Victor Samir - Adicionou as funções de massa, volume, temperatura, velocidade e memoria.
* }
* Contribuidores: Vitor Almeida Costa, Victor Samir Ribeiro dos Anjos
* Líder do projeto: [ADICIONAR NOME]
 ***********************************************/

/********************************************** CONVERSOR DE UNIDADES DE COMPRIMENTO ***********************************************/

// Função para exibir o menu inicial do conversor de comprimento
void exibirMenuComprimento() {
    printf("Escolha a unidade inicial:\n");
    printf("1. Metro (m)\n");
    printf("2. Centímetro (cm)\n");
    printf("3. Milímetro (mm)\n");
    printf("Digite a opção desejada: ");
}
//Conversor de unidade de comprimento

void conv_comprimento(){

    int opcaoInicial, opcaoDestino;
    float valor, resultado;

    // Exibe o menu e lê a unidade inicial
    exibirMenuComprimento();
    scanf("%d", &opcaoInicial);
    fflush(stdin);//Limpa o buffer

    // Valida a opção inicial
    if (opcaoInicial < 1 || opcaoInicial > 3) {
        printf("Opção inválida!\n");
        //return 1;
    }

    // Solicita o valor a ser convertido
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);
    fflush(stdin);//Limpa o buffer

    // Exibe o menu novamente para a unidade de destino
    printf("Escolha a unidade de destino:\n");
    printf("1. Metro (m)\n");
    printf("2. Centímetro (cm)\n");
    printf("3. Milímetro (mm)\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcaoDestino);
    fflush(stdin);//Limpa o buffer

    // Valida a opção de destino
    if (opcaoDestino < 1 || opcaoDestino > 3) {
        printf("Opção inválida!\n");
        //return 1;
    }

    // Processa a conversão com base nas opções escolhidas
    if (opcaoInicial == opcaoDestino) {	
        resultado = valor; // Mesma unidade, sem conversão
    } else if (opcaoInicial == 1) { // Metro para outras unidades
        if (opcaoDestino == 2) {
            resultado = valor * 100; // Metro para centímetro
        } else {
            resultado = valor * 1000; // Metro para milímetro
        }
    } else if (opcaoInicial == 2) { // Centímetro para outras unidades
        if (opcaoDestino == 1) {
            resultado = valor / 100; // Centímetro para metro
        } else {
            resultado = valor * 10; // Centímetro para milímetro
        }
    } else if (opcaoInicial == 3) { // Milímetro para outras unidades
        if (opcaoDestino == 1) {
            resultado = valor / 1000; // Milímetro para metro
        } else {
            resultado = valor / 10; // Milímetro para centímetro
        }
    }

    // Exibe o resultado
    printf("Resultado da conversão: %.2f\n", resultado);

}

/********************************************** CONVERSOR DE UNIDADES DE MASSA ***********************************************/

//Conversor de unidades de massa
void conv_massa() {
    int tipo;

    printf("Opcoes: \n");
    printf("1 - Quilograma\n");
    printf("2 - Grama\n");
    printf("3 - Tonelada\n");
    printf("Qual unidade voce quer converter? ");
    scanf("%d", &tipo);//Usuário digita itemEscolhido
    fflush(stdin);//Limpa o buffer

    switch(tipo){
        case 1:{
            float valorPedido, valorKg, valorGrama, valorTonelada;
            //Pedindo o valor em quilogramas
            printf("Digite o valor em Quilogramas(kg): ");
            scanf("%f", &valorPedido);
            fflush(stdin);
            valorKg = valorPedido;

            //Convertendo o valor para grama e tonelada
            valorGrama = valorKg * 1000.00;
            valorTonelada = valorKg / 1000.00;

            //Imprimindo os resultados
            printf("%.0fkg = %.4fg\n", valorKg, valorGrama);
            printf("%.0fkg = %.4ft\n", valorKg, valorTonelada);
            break;
        }
        case 2:{
            float valorPedido, valorKg, valorGrama, valorTonelada;
            //Pedindo o valor em gramas
            printf("Digite o valor em Gramas(g): ");
            scanf("%f", &valorPedido);
            fflush(stdin);
            valorGrama = valorPedido;

            //Convertendo o valor para quilograma e tonelada
            valorKg = valorGrama / 1000.00;
            valorTonelada = valorKg / 1000.00;

            //Imprimindo os resultados
            printf("%.0fg = %.4fkg\n", valorGrama, valorKg);
            printf("%.0fg = %.4ft\n", valorGrama, valorTonelada);
            
            break;
        }
        case 3:{
            float valorPedido, valorKg, valorGrama, valorTonelada;
            //Pedindo o valor em toneladas
            printf("Digite o valor em Toneladas(t): ");
            scanf("%f", &valorPedido);
            fflush(stdin);
            valorTonelada = valorPedido;

            //Convertendo o valor para quilograma e grama
            valorKg = valorTonelada * 1000.00;
            valorGrama = valorKg * 1000.00;

            //Imprimindo os resultados
            printf("%.0ft = %.4fkg\n", valorTonelada, valorKg);
            printf("%.0ft = %.4ft\n", valorTonelada, valorGrama);
            break;
        }
        default:{
            printf("Opcao invalida!\n");
            break;
        }
    }

}


/********************************************** CONVERSOR DE UNIDADES DE VOLUME ***********************************************/

//Conversor de unidades de volume
void conv_volume(){
    int tipo;

    printf("Opcoes: \n");
    printf("1 - Litro\n");
    printf("2 - Mililitro\n");
    printf("3 - Metros Cubicos\n");
    printf("Qual unidade voce quer converter? ");
    scanf("%d", &tipo);//Usuário digita itemEscolhido
    fflush(stdin);//Limpa o buffer

    switch(tipo){
        case 1:{
            float valorPedido, valorLitro, valorMl, valorMetroC;
            //Pedindo o valor em litros
            printf("Digite o valor em Litros(l): ");
            scanf("%f", &valorPedido);
            fflush(stdin);
            valorLitro = valorPedido;

            //Convertendo o valor para mililitro e metro cubico
            valorMl = valorLitro * 1000.00;
            valorMetroC = valorLitro / 1000.00;

            //Imprimindo os resultados
            printf("%.0fl = %.4fml\n", valorLitro, valorMl);
            printf("%.0fl = %.4fm³\n", valorLitro, valorMetroC);
            break;
        }//fim do case 1
        case 2:{
            float valorPedido, valorLitro, valorMl, valorMetroC;
            //Pedindo o valor em mililitros
            printf("Digite o valor em Mililitros(ml): ");
            scanf("%f", &valorPedido);
            fflush(stdin);
            valorMl = valorPedido;

            //Convertendo o valor para litro e metro cubico
            valorLitro = valorMl / 1000.00;
            valorMetroC = valorLitro / 1000.00;

            //Imprimindo os resultados
            printf("%.0fml = %.4fl\n", valorMl, valorLitro);
            printf("%.0fml = %.4fm³\n", valorMl, valorMetroC);
            
            break;
        }//fim do case 2
        case 3:{
            float valorPedido, valorLitro, valorMl, valorMetroC;
            //Pedindo o valor em metro cubico
            printf("Digite o valor em Metros Cubicos(m³): ");
            scanf("%f", &valorPedido);
            fflush(stdin);
            valorMetroC = valorPedido;

            //Convertendo o valor para mililitro e litro
            valorLitro = valorMetroC * 1000.00;
            valorMl = valorLitro * 1000.00;

            //Imprimindo os resultados
            printf("%.0fm³ = %.4fml\n", valorMetroC, valorMl);
            printf("%.0fm³ = %.4fl\n", valorMetroC, valorLitro);
            break;
        }//fim do case 3
        default:{
            printf("Opcao invalida!\n");
            break;
        }
    }
}

/********************************************** CONVERSOR DE UNIDADES DE TEMPERATURA ***********************************************/

//Conversor de unidades de temperatura
void conv_temperatura(){
    int tipo;

    printf("Opcoes: \n");
    printf("1 - Celsius\n");
    printf("2 - Farenheit\n");
    printf("3 - Kelvin\n");
    printf("Qual unidade voce quer converter? ");
    scanf("%d", &tipo);//Usuário digita itemEscolhido
    fflush(stdin);//Limpa o buffer

    switch(tipo){
        case 1:{
            float valorPedido, valorCelsius, valorFarenheit, valorKelvin;
            //Pedindo o valor em Celsius
            printf("Digite o valor em Celsius(°C): ");
            scanf("%f", &valorPedido);
            fflush(stdin);
            valorCelsius = valorPedido;

            //Convertendo o valor para Farenheit e Kelvin
            valorFarenheit = (valorCelsius * 1.8) + 32;
            valorKelvin = valorCelsius + 273.15;

            //Imprimindo os resultados
            printf("%.0f°C = %.4f°F\n", valorCelsius, valorFarenheit);
            printf("%.0f°C = %.4fK\n", valorCelsius, valorKelvin);
            break;
        }//fim do case 1
        case 2:{
            float valorPedido, valorCelsius, valorFarenheit, valorKelvin;
            //Pedindo o valor em litros
            printf("Digite o valor em Farenheit(°F): ");
            scanf("%f", &valorPedido);
            fflush(stdin);
            valorFarenheit = valorPedido;

            //Convertendo o valor para celsius e kelvin
            valorCelsius = (valorFarenheit - 32) / 1.8;
            valorKelvin = valorCelsius + 273.15;

            //Imprimindo os resultados
            printf("%.0f°F = %.4f°C\n", valorFarenheit, valorCelsius);
            printf("%.0f°F = %.4fK\n", valorCelsius, valorKelvin);
            
            break;
        }//fim do case 2
        case 3:{
            float valorPedido, valorCelsius, valorFarenheit, valorKelvin;
            //Pedindo o valor em Kelvin
            printf("Digite o valor em Kelvin(K): ");
            scanf("%f", &valorPedido);
            fflush(stdin);
            valorKelvin = valorPedido;

            //Convertendo o valor para celsius e farenheit
            valorCelsius = valorKelvin - 273.15;
            valorFarenheit = (valorCelsius * 1.8) + 32;

            //Imprimindo os resultados
            printf("%.0fK = %.4f°C\n", valorKelvin, valorCelsius);
            printf("%.0fK = %.4f°F\n", valorKelvin, valorFarenheit);
            break;
        }//fim do case 3
        default:{
            printf("Opcao invalida!\n");
            break;
        }
    }
}

/********************************************** CONVERSOR DE UNIDADES DE VELOCIDADE ***********************************************/

//Conversor de unidades de velocidade
void conv_velocidade(){
    int tipo;

    printf("Opcoes: \n");
    printf("1 - Quilometros por hora\n");
    printf("2 - Metros por segundo\n");
    printf("3 - Milhas por hora\n");
    printf("Qual unidade voce quer converter? ");
    scanf("%d", &tipo);//Usuário digita itemEscolhido
    fflush(stdin);//Limpa o buffer

    switch (tipo) {
        case 1:{
            float valorPedido, valorKmH, valorMS, valorMPH;
            //Pedindo o valor em km/h
            printf("Digite o valor em km/h: ");
            scanf("%f", &valorPedido);
            fflush(stdin);
            valorKmH = valorPedido;

            //Convertendo para m/s e mph
            valorMS = valorKmH / 3.6;
            valorMPH = valorKmH / 1.609;

            //Imprimindo os resultados
            printf("%.0fkm/h = %.4fm/s\n", valorKmH, valorMS);
            printf("%.0fkm/h = %.4fmph\n", valorKmH, valorMPH);

            break;
        }//fim do case 1
        case 2:{
            float valorPedido, valorKmH, valorMS, valorMPH;
            //Pedindo o valor em m/s
            printf("Digite o valor em m/s: ");
            scanf("%f", &valorPedido);
            fflush(stdin);
            valorMS = valorPedido;

            //Convertendo para km/h e mph
            valorKmH = valorMS * 3.6;
            valorMPH = valorKmH / 1.609;

            //Imprimindo os resultados
            printf("%.0fm/s = %.4fkm/h\n", valorMS, valorKmH);
            printf("%.0fm/s = %.4fmph\n", valorMS, valorMPH);

            break;
        }//fim do case 2
        case 3:{
            float valorPedido, valorKmH, valorMS, valorMPH;
            //Pedindo o valor em mph
            printf("Digite o valor em mph: ");
            scanf("%f", &valorPedido);
            fflush(stdin);
            valorMPH = valorPedido;

            //Convertendo para km/h e m/s
            valorKmH = valorMPH * 1.609;
            valorMS = valorKmH * 3.6;

            //Imprimindo os resultados
            printf("%.0fkm/h = %.4fm/s\n", valorKmH, valorMS);
            printf("%.0fkm/h = %.4fmph\n", valorKmH, valorMPH);
            break;
        }//fim do case 3
        default:{
            printf("Opcao Invalida!\n");
            break;
        }//fim do default
    }
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
    //Constantes de conversão
    const double bits_por_byte = 8;
    const double bytes_por_kb = 1024;
    const double kb_por_mb = 1024;
    const double mb_por_gb = 1024;
    const double gb_por_tb = 1024;

    double valor, bits;
    int opcao;

    //Menu de opcoes e coleta de dados
    printf("Opcoes: \n");
    printf("1 - Bits\n");
    printf("2 - Bytes\n");
    printf("3 - Kilobytes\n");
    printf("4 - Megabytes\n");
    printf("5 - Gigabytes\n");
    printf("6 - Terabytes\n");
    printf("Qual unidade voce quer converter? ");
    scanf("%d", &opcao);

    //Recebe o valor a ser convertido
    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    //Calcula o valor em bits com base na unidade escolhida
    switch (opcao) {
    case 1:{
        //bits
        bits = valor;
        break;
    }//fim do case 1
    case 2:{
        //bytes
        bits = valor * bits_por_byte;
        break;
    }//fim do case 2
    case 3:{
        //kilobytes
        bits = valor * bits_por_byte * bytes_por_kb;
        break;
    }//fim do case 3
    case 4:{
        //megabytes
        bits = valor * bits_por_byte * bytes_por_kb * kb_por_mb;
        break;
    }//fim do case 4
    case 5:{
        //gigabytes
        bits = valor * bits_por_byte * bytes_por_kb * kb_por_mb * mb_por_gb;
        break;
    }//fim do case 5
    case 6:{
        //terabytes
        bits = valor * bits_por_byte * bytes_por_kb * kb_por_mb * mb_por_gb * gb_por_tb;
        break;
    }//fim do case 6
    default:
        printf("Opcao invalida!\n");
    }
}