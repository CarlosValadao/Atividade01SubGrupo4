# Conversor de Unidades em C

## Descrição do Projeto
Este projeto consiste em um programa em C que permite realizar a conversão de diversas unidades de medida. Ele apresenta um menu interativo no terminal, onde o usuário pode escolher o tipo de unidade a ser convertido, como comprimento, massa, volume, temperatura, entre outros.

## Funcionalidades
O programa oferece as seguintes funcionalidades de conversão:
1. Unidades de comprimento (metros, centímetros, milímetros).
2. Unidades de massa (quilogramas, gramas, toneladas).
3. Unidades de volume (litros, mililitros, metros cúbicos).
4. Unidades de temperatura (Celsius, Fahrenheit, Kelvin).
5. Unidades de velocidade (km/h, m/s, mph).
6. Conversão de energia (watts, quilowatts, cavalos-vapor).
7. Unidades de área (metros quadrados, centímetros quadrados).
8. Unidades de tempo (segundos, minutos, horas).
9. Unidades de memória (bits, bytes, kilobytes, megabytes, gigabytes, terabytes).

## Estrutura do Código
- **Menu interativo**: Apresenta ao usuário as opções disponíveis.
- **Switch-case**: Implementa as funcionalidades de acordo com a escolha do usuário.
- **Controle de execução**: Permite ao usuário realizar várias conversões antes de sair do programa.

## Dependências
- Ambiente de desenvolvimento configurado com suporte a C.
- Biblioteca padrão `<stdio.h>` para entrada e saída de dados.
- (Opcional) Outras bibliotecas específicas para funções avançadas de conversão.

## Como Executar
1. Clone este repositório no seu computador.
2. Compile o código com o compilador GCC ou qualquer outro compatível:
   ```bash
   gcc -o conversor conversor.c
   ./conversor
   ```
3. Siga as instruções exibidas no terminal para realizar as conversões.

## Histórico de Revisões
- **12/12/2024** - *Victor Samir*: Criou o código principal com o menu de opções de conversão.
- **13/12/2024** - *Elaine Garrido*: Criou o código Conversor de Unidades de comprimento.
- **14/12/2024** - *Elaine Garrido*: Alterou o Conversor de unidades de comprimento para V2.
- (Adicione novas revisões conforme necessário)

## Contribuidores
- **Victor Samir Ribeiro dos Anjos**
- **Elaine Pereira Garrido**
- **Fernando Soares de Santana**
- (Adicione outros contribuintes)

## Líder do Projeto
- (Adicione o nome do líder do projeto)

---

### Observações
- Este README inicial pode ser ampliado e modificado à medida que o projeto evoluir.
- Adicione instruções específicas para dependências ou ferramentas adicionais, se necessário.
=======
Criamos um programa em C que permita ao usuário escolher entre as unidades de medida (metro, centímetro e milímetro) e realizar a conversão entre elas.

Estrutura do programa:
  Início: Apresenta um menu com as opções de unidades e solicita a entrada do usuário.
  Entrada: O usuário informa o valor e a unidade inicial.
  Processamento: Realiza a conversão utilizando as relações entre as unidades.
  Saída: Exibe o resultado da conversão.
