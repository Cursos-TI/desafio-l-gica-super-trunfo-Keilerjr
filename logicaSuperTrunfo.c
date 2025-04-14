#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    char c1Estado[4], c2Estado[4];
    char c1Codigo[5], c2Codigo[5];
    char c1Cidade[20], c2Cidade[20];
    unsigned long int c1Populacao, c2Populacao;
    float c1Area, c2Area;
    float c1PIB, c2PIB;
    unsigned int c1PontosTuristicos, c2PontosTuristicos;
    float c1Densidade, c2Densidade;
    float c1PIBperCapita, c2PIBperCapita;
    float c1SuperPoder, c2SuperPoder;
    char Vencedor[20];
    
    //Dados da carta 1

    printf("Insira os dados da primeira Carta\n");
    printf("Estado da carta, usando uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf("%3s", &c1Estado);

    printf("Codigo da carta, usando letra do estado seguida de um numero de 01 a 04 (ex: A01, B03):\n");
    scanf("%4s", &c1Codigo);

    printf("Cidade da carta:\n");
    scanf("%19s", &c1Cidade);

    printf("Numero de habitantes da cidade:\n");
    scanf("%lu", &c1Populacao);

    printf("Area da cidade em quilometros quadrados:\n");
    scanf("%f", &c1Area);

    printf("Produto Interno Bruto da cidade:\n");
    scanf("%f", &c1PIB);

    printf("Quantidade de pontos turisticos na cidade:\n");
    scanf("%u", &c1PontosTuristicos);

    //Calculo da densidade, PIB per capita e Super Poder
    c1Densidade = (float)c1Populacao / c1Area;
    c1PIBperCapita = (float)(c1PIB * 1e9) / c1Populacao;

    c1SuperPoder = (float)(c1Populacao + c1Area + c1PIB + c1PontosTuristicos + c1PIBperCapita) / c1Densidade;

    //Dados da carta 2

    printf("Insira os dados da segunda Carta\n");
    printf("Estado da carta, usando uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf("%3s", &c2Estado);

    printf("Codigo da carta, usando letra do estado seguida de um numero de 01 a 04 (ex: A01, B03):\n");
    scanf("%4s", &c2Codigo);

    printf("Cidade da carta:\n");
    scanf("%19s", &c2Cidade);

    printf("Numero de habitantes da cidade:\n");
    scanf("%lu", &c2Populacao);

    printf("Area da cidade em quilometros quadrados:\n");
    scanf("%f", &c2Area);

    printf("Produto Interno Bruto da cidade:\n");
    scanf("%f", &c2PIB);

    printf("Quantidade de pontos turisticos na cidade:\n");
    scanf("%u", &c2PontosTuristicos);

    //Calculo da densidade, PIB per capita e Super Poder
    c2Densidade = (float)c2Populacao / c2Area;
    c2PIBperCapita = (float)(c2PIB * 1e9) / c2Populacao;

    c2SuperPoder = (float)(c2Populacao + c2Area + c2PIB + c2PontosTuristicos + c2PIBperCapita) / c2Densidade;

    //Exibindo dados da carta 1

    printf("***Carta 1:***\n");
    printf("Estado: %s \n", c1Estado);
    printf("Codigo: %s \n", c1Codigo);
    printf("Nome da cidade: %s \n", c1Cidade);
    printf("Populacao: %u \n", c1Populacao);
    printf("Area: %.2f km²\n", c1Area);
    printf("PIB: %.2f bilhoes de reais\n", c1PIB);
    printf("Numero de pontos turisticos: %u \n", c1PontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", c1Densidade);
    printf("PIB per Capita: %.2f reais\n", c1PIBperCapita);
    printf("Super Poder: %.2f\n\n", c1SuperPoder);

    //Exibindo dados da carta 2

    printf("***Carta 2:***\n");
    printf("Estado: %s \n", c2Estado);
    printf("Codigo: %s \n", c2Codigo);
    printf("Nome da cidade: %s \n", c2Cidade);
    printf("Populacao: %u \n", c2Populacao);
    printf("Area: %.2f km²\n", c2Area);
    printf("PIB: %.2f bilhoes de reais \n", c2PIB);
    printf("Numero de pontos turisticos: %u\n", c2PontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", c2Densidade);
    printf("PIB per Capita: %.2f reais\n", c2PIBperCapita);
    printf("Super Poder: %.2f\n\n", c2SuperPoder);

    if (c1SuperPoder > c2SuperPoder) {
        printf("Cidade 1 tem poder maior.\n");
        printf("A cidade 1 venceu!");
    } else {
        printf("Cidade 2 tem poder maior.\n");
        printf("A cidade 2 venceu!");
    };

    return 0;
}
