#include <stdio.h>

int main() {
    // Dados da Carta 1 - Brasil
    char nome1[] = "Brasil";
    int populacao1 = 213;    // em milhões
    int area1 = 8516;        // mil km²
    int densidade1 = 25;     // hab/km²
    int pib1 = 1800;         // bilhões USD

    // Dados da Carta 2 - Japão
    char nome2[] = "Japão";
    int populacao2 = 126;
    int area2 = 377;
    int densidade2 = 347;
    int pib2 = 4900;

    // Variáveis
    int atributo1, atributo2;
    int valor1_c1 = 0, valor2_c1 = 0;
    int valor1_c2 = 0, valor2_c2 = 0;
    int soma1 = 0, soma2 = 0;

    printf("=== SUPER TRUNFO - NÍVEL MESTRE ===\n\n");
    printf("Cartas:\n");
    printf("1. %s\n", nome1);
    printf("2. %s\n\n", nome2);

    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - Densidade Demográfica\n");
    printf("4 - PIB\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &atributo1);

    if (atributo1 < 1 || atributo1 > 4) {
        printf("Atributo inválido!\n");
        return 1;
    }

    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");

    if (atributo1 != 1) printf("1 - População\n");
    if (atributo1 != 2) printf("2 - Área\n");
    if (atributo1 != 3) printf("3 - Densidade Demográfica\n");
    if (atributo1 != 4) printf("4 - PIB\n");

    printf("Digite o número do atributo: ");
    scanf("%d", &atributo2);

    if (atributo2 < 1 || atributo2 > 4 || atributo2 == atributo1) {
        printf("Atributo inválido ou repetido!\n");
        return 1;
    }

    // Atributo 1 - valores da Carta 1
    if (atributo1 == 1) valor1_c1 = populacao1;
    else if (atributo1 == 2) valor1_c1 = area1;
    else if (atributo1 == 3) valor1_c1 = densidade1;
    else if (atributo1 == 4) valor1_c1 = pib1;

    // Atributo 1 - valores da Carta 2
    if (atributo1 == 1) valor1_c2 = populacao2;
    else if (atributo1 == 2) valor1_c2 = area2;
    else if (atributo1 == 3) valor1_c2 = densidade2;
    else if (atributo1 == 4) valor1_c2 = pib2;

    // Atributo 2 - valores da Carta 1
    if (atributo2 == 1) valor2_c1 = populacao1;
    else if (atributo2 == 2) valor2_c1 = area1;
    else if (atributo2 == 3) valor2_c1 = densidade1;
    else if (atributo2 == 4) valor2_c1 = pib1;

    // Atributo 2 - valores da Carta 2
    if (atributo2 == 1) valor2_c2 = populacao2;
    else if (atributo2 == 2) valor2_c2 = area2;
    else if (atributo2 == 3) valor2_c2 = densidade2;
    else if (atributo2 == 4) valor2_c2 = pib2;

    // Soma
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    // Exibir valores
    printf("\n===== RESULTADO DA RODADA =====\n\n");

    printf("%s:\n", nome1);
    printf("- Atributo %d: %d\n", atributo1, valor1_c1);
    printf("- Atributo %d: %d\n", atributo2, valor2_c1);
    printf("- Soma: %d\n\n", soma1);

    printf("%s:\n", nome2);
    printf("- Atributo %d: %d\n", atributo1, valor1_c2);
    printf("- Atributo %d: %d\n", atributo2, valor2_c2);
    printf("- Soma: %d\n\n", soma2);

    // Verifica quem venceu
    if (soma1 > soma2) {
        printf(">>> Vencedor: %s\n", nome1);
    } else if (soma2 > soma1) {
        printf(">>> Vencedor: %s\n", nome2);
    } else {
        printf(">>> Empate!\n");
    }

    return 0;
}
