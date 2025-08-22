#include <stdio.h>

int main() {
    // Carta 1 - Belém
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char cidade1[50] = "Belem";
    int população1 = 1.3034,04;
    float area1 = 1059458;
    float pib1 = 65.0;
    int pontosTuristicos1 = 25;

    // Carta 2 - Ananindeua
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char cidade2[50] = "Ananindeua";
    int população2 = 537.000;
    float area2 = 190.446;
    float pib2 = 15.30;
    int pontosTuristicos2 = 10;
    
    //carta 3 - marituba
    char estado3 = 'C';
    char codigo3[4] = "C03";
    char cidade3[50] = "Marituba";
    int população3 = 135.000;
    float area3 = 103.343;
    float pib3 =  3.8;
    int pontosTuristicos3 = 5;


    // Exibindo as cartas
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", população1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n\n", pontosTuristicos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", população2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    
    printf("Carta 3:\n");
    printf("Estado: %c\n", estado3);
    printf("Codigo: %s\n", codigo3);
    printf("Nome da cidade: %s\n", cidade3);
    printf("População: %d\n", população3);
    printf("Area:%2f km2\n", area3);
    printf("PIB:%2f bilhoes de reais\n", pib3);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos3);
    
    //Projeto pronto,  adicionei mas uma cidade.
    //Coloquei os dados tentando  ter a precisao correta, sobre cada cidade.
    // Escolhi meu amado Pará.
    return 0;
}

