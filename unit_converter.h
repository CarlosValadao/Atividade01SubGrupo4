void comprimento(){

    int tipo;

        printf("Qual unidade você quer converter? ");
        printf("1 - metro");
        printf("2 - centímetro");
        printf("3 - milímetro");
        scanf("%d", &tipo);//Usuário digita itemEscolhido
        fflush(stdin);//Limpa o buffer

        switch(tipo){
            case 1:{
                //converter metros para cm e mm
                print("Valor em cm: %f", );
                break;
            }
            case 2:{
                //converter centimetro para m e mm
                print("Valor em cm: %f", );
                break;
            }
            case 1:{
                //converter milimetros para m e cm
                print("Valor em cm: %f", );
                break;
            }
    }

}
int main(){
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
