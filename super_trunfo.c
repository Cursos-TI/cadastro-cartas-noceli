#include <stdio.h>

int main (){

    //variaveis de 2 cartas - cartas A e B

    char estadoA[2], estadoB[2], codigoA[4], codigoB[4], cidadeA[30], cidadeB[30];
    int populacaoA, populacaoB, pontosA, pontosB; // pontos = numero de pontos turisticos
    float areaA, areaB, pibA, pibB;

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

    // saída dos dados das cartas
    
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estadoA);
    printf("Código: %s\n", codigoA);
    printf("Nome da Cidade: %s\n", cidadeA);
    printf("População: %d\n", populacaoA);
    printf("Área: %f\n", areaA);
    printf("PIB: %f\n", pibA);
    printf("Número de pontos turísticos: %d \n", pontosA);


    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estadoB);
    printf("Código: %s\n", codigoB);
    printf("Nome da Cidade: %s\n", cidadeB);
    printf("População: %d\n", populacaoB);
    printf("Área: %f\n", areaB);
    printf("PIB: %f\n", pibB);
    printf("Número de pontos turísticos: %d \n", pontosB);


    return 0;
}
