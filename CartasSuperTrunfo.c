#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

        char estado1[2], codCarta1[6], cidade1[100];
        int populacao1, NPturisticos1;
        float areakm41, pib1, densidadepopu1, ppcapita1;

        char estado2[2], codCarta2[6], cidade2[100];
        int populacao2, NPturisticos2;
        float areakm42, pib2, densidadepopu2, ppcapita2;


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
     
        printf("Digite o PIB da cidade: \n");
         scanf(" %f", &pib2);
     
        printf("Digite a quantidade de pontos turisticos na cidade selecionada: \n");
         scanf(" %d", &NPturisticos2);

        
        // calcular densidade e pib p capita
        densidadepopu1 = (populacao1 / areakm41);
        densidadepopu2 = (populacao2 / areakm42);

        ppcapita1 = (pib1 / populacao1);
        ppcapita2 = (pib2 / populacao2);
        

        // perguntas e resultados
        printf("----------------------------------------------------------------------------------------- \n");

        printf("Primeira carta: \nSigla do Estado: %s \nCod da carta: %s \nCidade: %s \nNúmero de habitantes: %d \nÁrea da cidade(em km²): %.2f km²\nPIB: %.2f \nNúmero de pontos turisticos: %d \nDensidade populacional: %.2f \nPIB per capita: %.2f reais\n",
                estado1, codCarta1, cidade1, populacao1, areakm41, pib1, NPturisticos1, densidadepopu1, ppcapita1 );

        printf("----------------------------------------------------------------------------------------- \n");

        printf("Segunda carta: \nSigla do Estado: %s \nCod da carta: %s \nCidade: %s \nNúmero de habitantes: %d \nÁrea da cidade(em km²): %.2f km²\nPIB: %.2f \nNúmero de pontos turisticos: %d \nDensidade populacional: %.2f \nPIB per capita: %.2f reais \n",
                estado2, codCarta2, cidade2, populacao2, areakm42, pib2, NPturisticos2, densidadepopu2, ppcapita2);
        
        printf("----------------------------------------------------------------------------------------- \n");

        return 0;

    }