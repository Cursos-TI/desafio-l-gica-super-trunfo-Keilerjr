#include <stdio.h>

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
    int atributoAComparar;
    
    //Dados da carta 1

    printf("### Insira os dados da primeira Carta ###\n\n");
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

    printf("\n### Insira os dados da segunda Carta ###\n\n");
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

    printf("\n*** Carta 1: ***\n");
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

    printf("\n*** Carta 2: ***\n");
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

    //Menu da comparacao
    printf("Selecione o atributo a comparar:\n");
    printf(" 1. Populacao\n 2. Area\n 3. PIB\n 4. Numero de Pontos Turisticos\n 5. Densidade Demografica\n 6. Super Poder\n\n");
    scanf("%d", &atributoAComparar);

    //Logica para comparar
    printf("\n### %s versus %s ###\n", c1Cidade, c2Cidade);

    switch (atributoAComparar){
    case 1:
        printf("**Voce escolheu Populacao**\n");
        printf("Populacao: %lu versus %lu\n", c1Populacao, c2Populacao);
        if (c1Populacao > c2Populacao){
            printf("%s venceu a comparacao!\n", c1Cidade);
        }else if (c1Populacao < c2Populacao){
            printf("%s venceu a comparacao!\n", c2Cidade);
        }else{
            printf("Empate!\n");
        }
        break;

    case 2:
        printf("**Voce escolheu Area**\n");
        printf("Area em km²: %.2f km² versus %.2 km²\n", c1Area, c2Area);
        if (c1Area > c2Area){
        printf("%s venceu a comparacao!\n", c1Cidade);
        }else if (c1Area < c2Area){
            printf("%s venceu a comparacao!\n", c2Cidade);
        }else{
            printf("Empate!\n");
        }
        break;

    case 3:
        printf("**Voce escolheu PIB**\n");
        printf("PIB: R$%.2f bilhoes versus R$%.2f bilhoes\n", c1PIB, c2PIB);
        if (c1PIB > c2PIB){
            printf("%s venceu a comparacao!\n", c1Cidade);
        }else if (c1PIB < c2PIB){
            printf("%s venceu a comparacao!\n", c2Cidade);
        }else{
            printf("Empate!\n");
        }
        break;
    case 4:
        printf("**Voce escolheu Numero de Pontos Turisticos**\n");
        printf("Numero de Pontos Turisticos: %u Pontos Turisticos versus %u Pontos Turisticos\n", c1PontosTuristicos, c2PontosTuristicos);
        if (c1PontosTuristicos > c2PontosTuristicos){
            printf("%s venceu a comparacao!\n", c1Cidade);
        }else if (c1PontosTuristicos < c2PontosTuristicos){
            printf("%s venceu a comparacao!\n", c2Cidade);
        }else{
            printf("Empate!\n");
        }
        break;
    case 5:
        printf("**Voce escolheu Densidade Demografica**\n");
        printf("Densidade: %.2f hab/km² versus %.2f hab/km²\n", c1Densidade, c2Densidade);
        if (c1Densidade > c2Densidade){
            printf("%s venceu a comparacao!\n", c2Cidade);
        }else if (c1Densidade < c2Densidade){
            printf("%s venceu a comparacao!\n", c1Cidade);
        }else{
            printf("Empate!\n");
        }
        break;

    case 6:
        printf("**Voce escolheu Super Poder**\n");
        printf("Super Poder: %.2f Pontos versus %.2f Pontos\n", c1SuperPoder, c2SuperPoder);
        if (c1SuperPoder > c2SuperPoder){
            printf("%s venceu a comparacao!\n", c1Cidade);
        }else if (c1SuperPoder < c2SuperPoder){
            printf("%s venceu a comparacao!\n", c2Cidade);
        }else{
            printf("Empate!\n");
        }
        break;       
    
    default:
        printf("Opcao Invalida!\n");
        break;
    }

    return 0;
}
