#include <stdio.h>

int main() {

    // Definindo variáveis
    char estado1, estado2;
    char codigocarta1[4], codigocarta2[4];
    char cidade1[21], cidade2[21];
    int populacaocidade1, populacaocidade2, numpturisticoscid1, numpturisticoscid2, item_comparacao1, item_comparacao2;
    int resultado1 = 0, resultado2 = 0, empate1 = 0, empate2 = 0;
    float areacidade1, areacidade2, pibcidade1, pibcidade2;

    //variaveis que vão ser calculadas
    float densidade_populacional1, densidade_populacional2, pib_percapita1, pib_percapita2;

    // Lendo dados da carta 1
    
    printf("Digite a letra do estado 1: \n");
    scanf(" %c", &estado1);
    printf("Digita Código da carta 1: \n");
    scanf("%3s", codigocarta1);
    printf("Digite nome da cidade 1: \n");
    scanf(" %20[^\n]", cidade1);
    printf("Digite população da cidade 1: \n");
    scanf("%d", &populacaocidade1);
    printf("Digite a área em Km2 da cidade 1: \n");
    scanf("%f", &areacidade1);
    printf("Digite PIB da cidade 1 em bilhões de reais: \n");
    scanf("%f", &pibcidade1);
    printf("Digite Número de pontos turísticas da cidade 1: \n");
    scanf("%d", &numpturisticoscid1);

    // Lendo dados da carta 2
    
    printf("Digite a letra do estado 2: \n");
    scanf(" %c", &estado2);
    printf("Digita Código da carta 2: \n");
    scanf("%3s", codigocarta2);
    printf("Digite nome da cidade 2: \n");
    scanf(" %20[^\n]", cidade2);
    printf("Digite população da cidade 2: \n");
    scanf("%d", &populacaocidade2);
    printf("Digite a área em Km2 da cidade 2: \n");
    scanf("%f", &areacidade2);
    printf("Digite PIB da cidade 2 em bilhões de reais: \n");
    scanf("%f", &pibcidade2);
    printf("Digite Número de pontos turísticas da cidade 2: \n");
    scanf("%d", &numpturisticoscid2);

         
    // Calculando densidade populacional das cidades
    densidade_populacional1 = populacaocidade1 / areacidade1;
    densidade_populacional2 = populacaocidade2 / areacidade2;

    // Calculando PIB per capita das cidades
    pib_percapita1 = (pibcidade1 / populacaocidade1) * 1000000;
    pib_percapita2 = (pibcidade2 / populacaocidade2) * 1000000;

    // Imprimindo na tela a informação digitada da carta 1

    printf("\n--- Carta 1: ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacaocidade1);
    printf("Área: %.2f Km2\n", areacidade1);
    printf("PIB: %.2f bilhões de reais\n", pibcidade1);
    printf("Número de Pontos Turísticos: %d\n", numpturisticoscid1);
    printf("Densidade Populacional: %.2f habitantes/Km2\n", densidade_populacional1);
    printf("PIB per Capita: %.2f mil reais\n", pib_percapita1);

    // Imprimindo na tela a informação digitada da carta 2

    printf("\n--- Carta 2 ---:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacaocidade2);
    printf("Área: %.2f Km2\n", areacidade2);
    printf("PIB: %.2f bilhões de reais\n", pibcidade2);
    printf("Número de Pontos Turísticos: %d\n", numpturisticoscid2);
    printf("Densidade Populacional: %.2f habitantes/Km2\n", densidade_populacional2);
    printf("PIB per capita: %.2f mil reais\n", pib_percapita2);

    // Menu para escolha do primeiro atributo de comparação

    printf("\n--- Escolha qual primeiro atributo comparar as cartas ---\n");
    printf("1. População\n");
    printf("2. Área em m2\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("\n");
    scanf("%d", &item_comparacao1);

    // Comparando o atributo selecionado

    switch (item_comparacao1)
    {
    case 1:
        printf("\n--- Comparação entre as cartas ---:\n");
        printf("\nComparação da População:\n");
        printf("Carta 1 - %s - População: %d\n", cidade1, populacaocidade1);
        printf("Carta 2 - %s - População: %d\n", cidade2, populacaocidade2);

        resultado1 = populacaocidade1 > populacaocidade2 ? 1 : 0;
        empate1 = populacaocidade1 == populacaocidade2 ? 1 : 0;

        break;
    
    case 2:
        printf("\nComparação da Área:\n");
        printf("Carta 1 - %s - Área: %.2f Km2\n", cidade1, areacidade1);
        printf("Carta 2 - %s - Área: %.2f Km2\n", cidade2, areacidade2);

        resultado1 = areacidade1 > areacidade2 ? 1 : 0;
        empate1 = areacidade1 == areacidade2 ? 1 : 0;

        break;
        
    case 3:
    printf("\nComparação do PIB:\n");
    printf("Carta 1 - %s - PIB: %.2f bilhões de reais\n", cidade1, pibcidade1);
    printf("Carta 2 - %s - PIB: %.2f bilhões de reais\n", cidade2, pibcidade2);

    resultado1 = pibcidade1 > pibcidade2 ? 1 : 0;
    empate1 = pibcidade1 == pibcidade2 ? 1 : 0;
    
    break;

    case 4:
    printf("\nComparação do número de Pontos Turísticos:\n");
    printf("Carta 1 - %s - Pontos Turísticos: %d\n", cidade1, numpturisticoscid1);
    printf("Carta 2 - %s - Pontos Turísticos: %d\n", cidade2, numpturisticoscid2);

    resultado1 = numpturisticoscid1 > numpturisticoscid2 ? 1 : 0;
    empate1 = numpturisticoscid1 == numpturisticoscid2 ? 1 : 0;

    break;

    case 5:
    printf("\nComparação da Densidade Populacional:\n");
    printf("Carta 1 - %s - Densidade Populacional: %.2f habitantes/Km2\n", cidade1, densidade_populacional1);
    printf("Carta 2 - %s - Densidade Populacional: %.2f habitantes/Km2\n", cidade2, densidade_populacional2);

    resultado1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
    empate1 = densidade_populacional1 == densidade_populacional2 ? 1 : 0;

    break;

    case 6:
    printf("\nComparação do PIB per Capita:\n");
    printf("Carta 1 - %s - PIB per Capita: %.2f mil reais\n", cidade1, pib_percapita1);
    printf("Carta 2 - %s - PIB per Capita: %.2f mil reais\n", cidade2, pib_percapita2);

    resultado1 = pib_percapita1 > pib_percapita2 ? 1 : 0;
    empate1 = pib_percapita1 == pib_percapita2 ? 1 : 0;

    break;
    }

// Menu para escolha do segundo atributo de comparação

    printf("\n--- Escolha qual segundo atributo comparar as cartas ---\n");
    printf("1. População\n");
    printf("2. Área em m2\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("\n");
    scanf("%d", &item_comparacao2);

    if (item_comparacao2 == item_comparacao1) {

        printf("Você escolheu o mesmo atributo!\n");
    
    } else {

        switch (item_comparacao2)
        {
        case 1:
            printf("\n--- Comparação entre as cartas ---:\n");
            printf("\nComparação da População:\n");
            printf("Carta 1 - %s - População: %d\n", cidade1, populacaocidade1);
            printf("Carta 2 - %s - População: %d\n", cidade2, populacaocidade2);

            resultado2 = populacaocidade1 > populacaocidade2 ? 1 : 0;
            empate2 = populacaocidade1 == populacaocidade2 ? 1 : 0;

            break;
    
        case 2:
            printf("\nComparação da Área:\n");
            printf("Carta 1 - %s - Área: %.2f Km2\n", cidade1, areacidade1);
            printf("Carta 2 - %s - Área: %.2f Km2\n", cidade2, areacidade2);

            resultado2 = areacidade1 > areacidade2 ? 1 : 0;
            empate2 = areacidade1 == areacidade2 ? 1 : 0;

            break;
        
        case 3:
            printf("\nComparação do PIB:\n");
            printf("Carta 1 - %s - PIB: %.2f bilhões de reais\n", cidade1, pibcidade1);
            printf("Carta 2 - %s - PIB: %.2f bilhões de reais\n", cidade2, pibcidade2);

            resultado2 = pibcidade1 > pibcidade2 ? 1 : 0;
            empate2 = pibcidade1 == pibcidade2 ? 1 : 0;


            break;

        case 4:
            printf("\nComparação do número de Pontos Turísticos:\n");
            printf("Carta 1 - %s - Pontos Turísticos: %d\n", cidade1, numpturisticoscid1);
            printf("Carta 2 - %s - Pontos Turísticos: %d\n", cidade2, numpturisticoscid2);

            resultado2 = numpturisticoscid1 > numpturisticoscid2 ? 1 : 0;
            empate2 = numpturisticoscid1 == numpturisticoscid2 ? 1 : 0;

            break;

        case 5:
            printf("\nComparação da Densidade Populacional:\n");
            printf("Carta 1 - %s - Densidade Populacional: %.2f habitantes/Km2\n", cidade1, densidade_populacional1);
            printf("Carta 2 - %s - Densidade Populacional: %.2f habitantes/Km2\n", cidade2, densidade_populacional2);

            resultado2 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
            empate2 = densidade_populacional1 == densidade_populacional2 ? 1 : 0;

            break;

        case 6:
            printf("\nComparação do PIB per Capita:\n");
            printf("Carta 1 - %s - PIB per Capita: %.2f mil reais\n", cidade1, pib_percapita1);
            printf("Carta 2 - %s - PIB per Capita: %.2f mil reais\n", cidade2, pib_percapita2);

            resultado2 = pib_percapita1 > pib_percapita2 ? 1 : 0;
            empate2 = pib_percapita1 == pib_percapita2 ? 1 : 0;

            break;
        }

        //printf("%d\n", resultado1);
        //printf("%d\n", resultado2);
        //printf("%d\n", empate1);
        //printf("%d\n", empate2);

        if (resultado1 && resultado2) {

            printf("A carta 1 venceu!\n");

        } else if ((resultado1 != resultado2) || (empate1 && empate2)) {

            printf("O resultado foi empate!\n");

        } else {

            printf("A carta 2 venceu!\n");
        }
    }     

return 0;
}