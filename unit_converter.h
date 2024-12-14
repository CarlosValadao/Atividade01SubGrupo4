void conv_comprimento(){

    int tipo;
    float comp;

    printf("Qual unidade você quer converter? \n");
    printf("1 - metro\n");
    printf("2 - centimetro\n");
    printf("3 - milimetro\n\n");
    printf("Sua opcao: ");
    scanf("%d", &tipo); //Usuário digita itemEscolhido
    fflush(stdin); //Limpa o buffer

    switch(tipo){
        case 1:{
            //converter metros para cm e mm
            printf("Digite o valor em metros: ");
            scanf("%f", &comp);
            fflush(stdin); //Limpa o buffer
            printf("Valor em cm: %.2f\n", (comp*100));
            printf("Valor em mm: %.2f\n\n", (comp*1000));
            break;
        }
        case 2:{
            //converter centimetro para m e mm
            printf("Digite o valor em centimetros: ");
            scanf("%f", &comp);
            fflush(stdin); //Limpa o buffer
            printf("Valor em m: %.2f\n", (comp/100));
            printf("Valor em mm: %.2f\n\n", (comp*10));
            break;
        }
        case 3:{
            //converter milimetros para m e cm
            printf("Digite o valor em milimetros: ");
            scanf("%f", &comp);
            fflush(stdin); //Limpa o buffer
            printf("Valor em m: %.2f\n", (comp/1000));
            printf("Valor em cm: %.2f\n\n", (comp/10));
            break;
        }
        default:{
            printf("Opcao invalida. \n");
            break;
        }
    } // Teste
}
