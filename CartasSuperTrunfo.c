#include <stdio.h>

int main(){
    //Variáveis da Carta 1
    char estado1;
    char codigoCartas1[3];
    char nomeCidade1[15];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //Variáveis da Carta 2
    char estado2;
    char codigoCartas2[3];
    char nomeCidade2[15];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //Dados da Carta 1
    printf("Digite os dados da Carta 1 \n");
    printf("Estado (A-H): ");
    scanf("%c", &estado1);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigoCartas1);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade1);
    printf("População: ");
    scanf("%i", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n------------------------------------------------\n");
    printf("            Carta cadastrada com sucesso!         \n");
    printf("                      Carta 1                       ");
    printf("\n================================================\n");


        //Dados da Carta 2
    printf("\nDigite os dados da Carta 2 \n");
    printf("Estado (A-H): \n");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigoCartas2);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade2);
    printf("População: ");
    scanf("%i", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n------------------------------------------------\n");
    printf("            Carta cadastrada com sucesso!         \n");
    printf("                      Carta 2                       ");
    printf("\n================================================\n");

        // Exibição dos dados da Carta 1
    printf("\nInformações da Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCartas1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

        // Exibição dos dados da Carta 2
    printf("\nInformações da Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCartas2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}