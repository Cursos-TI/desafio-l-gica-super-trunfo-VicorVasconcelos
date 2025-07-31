#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // Dados da carta 1
    char nomePais1[50] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515.767;
    float pib1 = 1800.5;
    int pontosTuristicos1 = 75;
    float densidade1 = populacao1 / area1;

    // Dados da carta 2
    char nomePais2[50] = "Japão";
    int populacao2 = 125800000;
    float area2 = 3779.0;
    float pib2 = 5100.7;
    int pontosTuristicos2 = 90;
    float densidade2 = populacao2 / area2;

    int opcao;

    printf("===== SUPER TRUNFO - Nível Aventureiro =====\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    printf("\nVocê escolheu comparar: ");
    
    switch(opcao) {
        case 1:
            printf("População\n");
            printf("%s: %d habitantes\n", nomePais1, populacao1);
            printf("%s: %d habitantes\n", nomePais2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nomePais1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", nomePais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Área\n");
            printf("%s: %.2f km²\n", nomePais1, area1);
            printf("%s: %.2f km²\n", nomePais2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", nomePais1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", nomePais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("PIB\n");
            printf("%s: %.2f bilhões de reais\n", nomePais1, pib1);
            printf("%s: %.2f bilhões de reais\n", nomePais2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nomePais1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", nomePais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Pontos Turísticos\n");
            printf("%s: %d pontos\n", nomePais1, pontosTuristicos1);
            printf("%s: %d pontos\n", nomePais2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s\n", nomePais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s\n", nomePais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", nomePais1, densidade1);
            printf("%s: %.2f hab/km²\n", nomePais2, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", nomePais1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s\n", nomePais2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente com um número de 1 a 5.\n");
    }

    return 0;
}
