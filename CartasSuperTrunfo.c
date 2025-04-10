#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado1[2], codCarta1[6], cidade1[100];
    int populacao1, NPturisticos1;
    float areakm41, pib1;

    char estado2[2], codCarta2[6], cidade2[100];
    int populacao2, NPturisticos2;
    float areakm42, pib2;

    printf("Digite uma sigla que represente um dos 26 estados + o distrito federal: \n");
    scanf(" %s", &estado1);

    printf("Adicione um código a carta(ex: RJ01 ou SP07): \n");
    scanf(" %s", &codCarta1);

    printf("Digite o nome de uma cidade dentro deste estado citado anteriormente: \n");
    scanf(" %s%*c", &cidade1);

    printf("Digite o número de habitantes desta cidade: \n");
    scanf(" %d%*c", &populacao1);

    printf("Digite a área da cidade em km²: \n");
    scanf(" %f", &areakm41);

    printf("Digite o PIB da da cidade: \n");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turisticos na cidade selecionada: \n");
    scanf(" %d", &NPturisticos1);

    printf("........................................................................................................... \n");

    printf("Digite uma sigla que represente um dos 26 estados + o distrito federal: \n");
    scanf(" %s", &estado2);
 
    printf("Adicione um código a carta(ex: RJ01 ou SP07): \n");
    scanf(" %s", &codCarta2);
 
    printf("Digite o nome de uma cidade dentro deste estado citado anteriormente: \n");
    scanf(" %s%*c", &cidade2);
 
    printf("Digite o número de habitantes desta cidade: \n");
    scanf(" %d%*c", &populacao2);
 
    printf("Digite a área da cidade em km²: \n");
    scanf(" %f", &areakm42);
 
    printf("Digite o PIB da da cidade: \n");
    scanf(" %f", &pib2);
 
    printf("Digite a quantidade de pontos turisticos na cidade selecionada: \n");
     scanf(" %d", &NPturisticos2);

    printf("----------------------------------------------------------------------------------------- \n");

    printf("Primeira carta: \nSigla do Estado: %s \nCod da carta: %s \nCidade: %s \nNúmero de habitantes: %d \nÁrea da cidade(em km²): %f \nPIB: %f \nNúmero de pontos turisticos: %d \n",
            estado1, codCarta1, cidade1, populacao1, areakm41, pib1, NPturisticos1);

    printf("----------------------------------------------------------------------------------------- \n");

    printf("Segunda carta: \nSigla do Estado: %s \nCod da carta: %s \nCidade: %s \nNúmero de habitantes: %d \nÁrea da cidade(em km²): %f \nPIB: %f \nNúmero de pontos turisticos: %d \n",
            estado2, codCarta2, cidade2, populacao2, areakm42, pib2, NPturisticos2);

    return 0;
}
