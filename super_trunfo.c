#include <stdio.h>

int main (){

    //variaveis de 2 cartas - cartas A e B

    char estadoA[3], estadoB[3], codigoA[4], codigoB[4], cidadeA[30], cidadeB[30];
    int populacaoA, populacaoB, pontosA, pontosB; // pontos = numero de pontos turisticos
    float areaA, areaB, pibA, pibB, denspopA, denspopB, PIBcapA, PIBcapB;

    // entrada de dados da primeira carta

    printf("Insira os dados da carta 1: \n");

    printf("Estado: \n");
    scanf(" %s", &estadoA);

    printf("Código da Carta: \n");
    scanf(" %s", &codigoA);

    printf("Nome da Cidade: \n");
    scanf(" %s", &cidadeA);

    printf("População: \n");
    scanf(" %d", &populacaoA);

    printf("Área (em km²): \n");
    scanf(" %f", &areaA);

    printf("PIB: \n");
    scanf(" %f", &pibA);

    printf("Número de pontos turísticos: \n");
    scanf(" %d", &pontosA);

    // entrada de dados da segunda carta

    printf("Insira os dados da carta 2: \n");

    printf("Estado: \n");
    scanf(" %s", &estadoB);

    printf("Código da Carta: \n");
    scanf(" %s", &codigoB);

    printf("Nome da Cidade: \n");
    scanf(" %s", &cidadeB);

    printf("População: \n");
    scanf(" %d", &populacaoB);

    printf("Área (em km²): \n");
    scanf(" %f", &areaB);

    printf("PIB: \n");
    scanf(" %f", &pibB);

    printf("Número de pontos turísticos: \n");
    scanf(" %d", &pontosB);

    // calcula densidade populacional e PIB per capita

    denspopA = (float) populacaoA / areaA;
    denspopB = (float) populacaoB / areaB;

    PIBcapA = (float) (pibA / populacaoA);
    PIBcapB = (float) (pibB / populacaoB);

    // saída dos dados das cartas
    
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estadoA);
    printf("Código: %s\n", codigoA);
    printf("Nome da Cidade: %s\n", cidadeA);
    printf("População: %d\n", populacaoA);
    printf("Área: %f km²\n", areaA);
    printf("PIB: %f bilhões de reais \n", pibA);
    printf("Número de pontos turísticos: %d \n", pontosA);
    printf("Densidade populacional: %.2f hab/km² \n", denspopA);
    printf("PIB per capita: %f reais \n", PIBcapA);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estadoB);
    printf("Código: %s\n", codigoB);
    printf("Nome da Cidade: %s\n", cidadeB);
    printf("População: %d\n", populacaoB);
    printf("Área: %f km² \n", areaB);
    printf("PIB: %f bilhões de reais \n", pibB);
    printf("Número de pontos turísticos: %d \n", pontosB);
    printf("Densidade populacional: %.2f hab/km² \n", denspopB);
    printf("PIB per capita: %f reais \n", PIBcapB);



    return 0;
}
