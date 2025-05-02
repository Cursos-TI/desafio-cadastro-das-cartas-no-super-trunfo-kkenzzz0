#include <stdio.h> 
#include <string.h>

int main() {

    
    // variaveis
    char estado1[2], codCarta1[6], cidade1[100];
    int populacao1, NPturisticos1;
    float areakm41, pib1, densidadepopu1, ppcapita1;

    char estado2[2], codCarta2[6], cidade2[100];
    int populacao2, NPturisticos2;
    float areakm42, pib2, densidadepopu2, ppcapita2;


    // Perguntas de ambas as cartas
    printf("Digite uma sigla que represente um dos 26 estados + o distrito federal: \n");
     scanf("%s", estado1);

    printf("Adicione um código a carta(ex: RJ01 ou SP07): \n");
     scanf("%s", codCarta1);
     scanf("%*[^\n]%*c");

    printf("Digite o nome de uma cidade dentro deste estado citado anteriormente: \n");
     scanf("%*c");
     fgets(cidade1, sizeof(cidade1), stdin);  
     cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Digite o número de habitantes desta cidade: \n");
     scanf("%d", &populacao1);

    printf("Digite a área da cidade em km²: \n");
     scanf("%f", &areakm41);

    printf("Digite o PIB da da cidade: \n");
     scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos na cidade selecionada: \n");
     scanf("%d", &NPturisticos1);

    printf("........................................................................................................... \n");

    printf("Digite uma sigla que represente um dos 26 estados + o distrito federal: \n");
     scanf("%s", estado2);

    printf("Adicione um código a carta(ex: RJ01 ou SP07): \n");
     scanf("%s", codCarta2);
     scanf("%*[^\n]%*c");

    printf("Digite o nome de uma cidade dentro deste estado citado anteriormente: \n");
     scanf("%*c");
     fgets(cidade2, sizeof(cidade2), stdin);
     cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite o número de habitantes desta cidade: \n");
     scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²: \n");
     scanf("%f", &areakm42);

    printf("Digite o PIB da cidade: \n");
     scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos na cidade selecionada: \n");
     scanf(" %d", &NPturisticos2);


    // calcular densidade e pib p capita
    densidadepopu1 = (populacao1 / areakm41);
    densidadepopu2 = (populacao2 / areakm42);

    ppcapita1 = (pib1 / populacao1);
    ppcapita2 = (pib2 / populacao2);


    // super poderes
    float superpoderC1, superpoderC2;

    superpoderC1 = (populacao1 + areakm41 + pib1 + NPturisticos1 + ppcapita1 / 3);

    superpoderC2 = (populacao2 + areakm42 + pib2 + NPturisticos2 + ppcapita2 / 3);


    // resultados
    printf("----------------------------------------------------------------------------------------- \n");

    printf("Primeira carta: \nSigla do Estado: %s \nCod da carta: %s \nCidade: %s \nNúmero de habitantes: %d \nÁrea da cidade: %.2f km²\nPIB: %.2f \nNúmero de pontos turisticos: %d \nDensidade populacional: %.2f \nPIB per capita: %.2f reais\nSeu super poder é de:%.2f \n",
            estado1, codCarta1, cidade1, populacao1, areakm41, pib1, NPturisticos1, densidadepopu1, ppcapita1, superpoderC1 );

    printf("----------------------------------------------------------------------------------------- \n");

    printf("Segunda carta: \nSigla do Estado: %s \nCod da carta: %s \nCidade: %s \nNúmero de habitantes: %d \nÁrea da cidade: %.2f km²\nPIB: %.2f \nNúmero de pontos turisticos: %d \nDensidade populacional: %.2f \nPIB per capita: %.2f reais \nSeu super poder é de:%.2f \n",
            estado2, codCarta2, cidade2, populacao2, areakm42, pib2, NPturisticos2, densidadepopu2, ppcapita2, superpoderC2);

    printf("----------------------------------------------------------------------------------------- \n");


    // comparando
    int comparaPOPU, comparaArea, comparaPIB, comparaPT, comparaDensidadeP, comparaPPcapita, comparaSuperPoder;
    
    comparaPOPU = (populacao1 > populacao2);
    comparaArea = (areakm41 > areakm42);
    comparaPIB = (pib1 > pib2);
    comparaPT = (NPturisticos1 > NPturisticos2);
    comparaDensidadeP = ( densidadepopu1 < densidadepopu2);
    comparaPPcapita = (ppcapita1 > ppcapita2);
    comparaSuperPoder = (superpoderC1 > superpoderC2);


    printf("Comparação de Cartas: \nPopulação: %d \nÁrea: %d \nPIB: %d \nPontos Turísticos: %d \nDensidade Populacional: %d \nPIB per Capita: %d \nSuper Poder: %d \n",
            comparaPOPU, comparaArea, comparaPIB, comparaPT, comparaDensidadeP, comparaPPcapita, comparaSuperPoder);


    return 0;

}