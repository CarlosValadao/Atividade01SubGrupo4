/**********************************************
* Nome do projeto: Conversor de Unidades em C
* Autor: EmbarcaTech CEPEDI - Grupo 7 (Subgrupo 4)
* Data de criação: 12/12/2024
* Descrição: Este projeto consiste em um programa em C que permite realizar a conversão de diversas unidades de medida.   Ele apresenta um menu interativo no terminal, onde o usuário pode escolher o tipo de unidade a ser convertido, como comprimento, massa, volume, temperatura, entre outros.
* Funcionalidades: O programa oferece as seguintes funcionalidades de conversão:
* - Unidades de comprimento (metros, centímetros, milímetros).
* - Unidades de massa (quilogramas, gramas, toneladas).
* - Unidades de volume (litros, mililitros, metros cúbicos).
* - Unidades de temperatura (Celsius, Fahrenheit, Kelvin).
* - Unidades de velocidade (km/h, m/s, mph).
* - Conversão de energia (watts, quilowatts, cavalos-vapor).
* - Unidades de área (metros quadrados, centímetros quadrados).
* - Unidades de tempo (segundos, minutos, horas).
* - Unidades de memória (bits, bytes, kilobytes, megabytes, gigabytes, terabytes).
* Dependências: Bibliotecas <stdio.h>, <string.h>, "unit_converter.h", <windows.h>
*                           e <unistd.h>
* Histórico de Revisões: {
*   - (12/12/2024) - Victor Samir - Criou o código principal, com o menu de opções de conversão
*   - (26/12/2024) - Victor Samir - Incluiu o arquivo .h com todas as funções e as adicionou a cada opção do switch
* }
* Contribuidores: Victor Samir Ribeiro dos Anjos, Vitor Almeida Costa, Elaine Garrido
* Líder do projeto: Carlos Valadão
 ***********************************************/

#include <stdio.h>
#include "unit_converter.h"

//Início do main
int main () {
    int itemEscolhido, continuar=1;//Variáveis de controle da execução do programa
    char opcao = 'S';//Mais controle

    //Menu de funcionalidades aparece enquanto a variável continuar for igual a 1
    do {
        //MENU DE FUNCIONALIDADES DO CONVERSOR
        printf("---------- CONVERSOR DE UNIDADES ----------\n\n");
        printf("Menu:\n");
        printf("1 - Unidades de comprimento(metro, centimetro, milimetro)\n");
        printf("2 - Unidades de massa (quilograma, grama, tonelada)\n");
        printf("3 - Unidades de volume (litro, mililitro, metros cubicos)\n");
        printf("4 - Unidades de temperatura (Celsius, Fahrenheit, Kelvin)\n");
        printf("5 - Unidades de velocidade (km/h, m/s, mph)\n");
        printf("6 - Watts (W), quilowatts (kW), cavalos-vapor (cv ou hp)\n");
        printf("7 - Unidades de area (metro quadrado, centimetro quadrado)\n");
        printf("8 - Unidades de tempo (segundos, minutos, horas)\n");
        printf("9 - Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB)\n");
        printf("0 - Finalizar execucao.\n\n");

        //Perguntando ao usuário qual item do menu ele deseja escolher
        printf("Escolha uma opcao do menu para realizar a conversao: ");
        scanf("%d", &itemEscolhido);//Usuário digita itemEscolhido
        fflush(stdin);//Limpa o buffer

        printf("\n");//Pula uma linha

        //Execução de acordo com o item escolhido
        switch (itemEscolhido) {
            //1 - Unidades de comprimento(metro, centímetro, milimetro)
            case 1:{
                //FUNÇÃO DE CONVERSÃO DE COMPRIMENTO
                conv_comprimento();
                break;
            }//fim case 1

            //2 - Unidades de massa (quilograma, grama, tonelada)
            case 2:{
                //FUNÇÃO DE CONVERSÃO DE MASSA
                conv_massa();
                break;
            }//fim case 2

            //3 - Unidades de volume (litro, mililitro, metros cubicos)
            case 3:{
                //FUNÇÃO DE CONVERSÃO DE VOLUME
                conv_volume();
                break;
            }//fim case 3

            //4 - Unidades de temperatura (Celsius, Fahrenheit, Kelvin)
            case 4:{
                //FUNÇÃO DE CONVERSÃO DE TEMPERATURA
                conv_temperatura();
                break;
            }//fim case 4

            //5 - Unidades de velocidade (km/h, m/s, mph)
            case 5:{
                //FUNÇÃO DE CONVERSÃO DE VELOCIDADE
                conv_velocidade();
                break;
            }//fim case 5

            //6 - Watts (W), quilowatts (kW), cavalos-vapor (cv ou hp)
            case 6:{
                //FUNÇÃO DE CONVERSÃO DE ENERGIA
                conv_energia();
                break;
            }//fim case 6

            //7 - Unidades de area (metro quadrado, centimetro quadrado)
            case 7:{
                //FUNÇÃO DE CONVERSÃO DE ÁREA
                conv_area();
                break;
            }//fim case 7

            //8 - Unidades de tempo (segundos, minutos, horas)
            case 8:{
                //FUNÇÃO DE CONVERSÃO DE TEMPO
                conv_tempo();
                break;
            }//fim case 8

            //9 - Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB)
            case 9:{
                //FUNÇÃO DE CONVERSÃO DE UNIDADES DE MEMÓRIA
                conv_memoria();
                break;
            }//fim case 9

            //0 - Finalizar execução
            case 0:{
                continuar = 0;
                printf("Obrigado por utilizar!\n\n");//Mensagem de obrigado
                break;
            }//fim case 0
            
            //Opção Invalida
            default:{
                printf("Opcao invalida! Digite uma opcao do menu.\n\n");//Caso o usuário não digite nenhuma opção do menu, terá que digitar novamente
                continue;
            }//fim default
        }//fim do switch
        sleep(5);

    } while (continuar != 0);// fim do-while

    return 0;//Execução bem sucedida

}//fim do main