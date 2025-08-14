#include <stdio.h>

int main(){

    char estado1[10], estado2[10], codigo1[10], codigo2[10], cidade1[10], cidade2[10];
    int populacao1, populacao2, turistico1, turistico2;
    float area1, area2, pib1, pib2;

    printf("Desafio novato: Criando as Cartas do Super Trunfo \n \n \n");

    printf("Insira o Estado da Carta 1 e da Carta 2 (Uma letra de 'A' a 'H'): \n \n");
    scanf("%s", estado1);
    scanf("%s", estado2);

    printf("Digite o Codigo Carta 1 e da Carta 2: \n \n");
    scanf("%s", codigo1);
    scanf("%s", codigo2);

    printf("Digite o nome da cidadade da Carta 1 e da Carta 2: \n \n \n");
    scanf("%s", cidade1);
    scanf("%s", cidade2);

    printf("Digite a populacao da Cidade 1 e da Cidade 2: \n \n \n");
    scanf("%i", &populacao1);
    scanf("%i", &populacao2);

    printf("Digite a populacao da Carta 1 e da Carta 2: \n \n \n");
    scanf("%f", &area1);
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade 1 e da Cidade 2: \n \n");
    scanf("%f", &pib1);
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da Cidade 1 e Cidade 2: \n \n");
    scanf("%i", &turistico1);
    scanf("%i", &turistico2);

    printf("A Carta 1: \n Estado: %s \n Codigo: %s \n Nome da Cidade: %s \n Populacao: %i \n Area total: %.2f km2 \n O PIB: %.2f \n Numero de Pontos Turisticos %i \n \n \n", estado1, codigo1, cidade1, populacao1, area1, pib1, turistico1);
    printf("A Carta 2: \n Estado: %s \n Codigo: %s \n Nome da Cidade: %s \n Populacao: %i \n Area total: %.2f km2 \n O PIB: %.2f \n Numero de Pontos Turisticos %i \n \n \n", estado2, codigo2, cidade2, populacao2, area2, pib2, turistico2);


    return 0;
}


/* Carta
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50 */