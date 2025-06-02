#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[100], cidade2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    int opcao;

   
    printf("Informe os dados para a carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta: ");
    scanf("%3s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 * 1000000000 + pontos1 + (1.0f / densidade1) + pibPerCapita1;

   
    printf("\nInforme os dados para a carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta: ");
    scanf("%3s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 * 1000000000 + pontos2 + (1.0f / densidade2) + pibPerCapita2;

   
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Escolha uma opção (1 a 6): ");
    scanf("%d", &opcao);

    printf("\n--- Comparação de Cartas ---\n");

    switch(opcao) {
        case 1:
            printf("População:\n");
            printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
            printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("Área:\n");
            printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
            printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
            if (area1 > area2)
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            else if (area2 > area1)
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("PIB:\n");
            printf("Carta 1 - %s: R$ %.2f bilhões\n", cidade1, pib1);
            printf("Carta 2 - %s: R$ %.2f bilhões\n", cidade2, pib2);
            if (pib1 > pib2)
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            else if (pib2 > pib1)
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("Pontos Turísticos:\n");
            printf("Carta 1 - %s: %d\n", cidade1, pontos1);
            printf("Carta 2 - %s: %d\n", cidade2, pontos2);
            if (pontos1 > pontos2)
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            else if (pontos2 > pontos1)
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5:
            printf("Densidade Populacional:\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade1);
            printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade2);
          
            if (densidade1 < densidade2)
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 6:
            printf("PIB per Capita:\n");
            printf("Carta 1 - %s: R$ %.2f\n", cidade1, pibPerCapita1);
            printf("Carta 2 - %s: R$ %.2f\n", cidade2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2)
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            else if (pibPerCapita2 > pibPerCapita1)
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida. Encerrando comparação.\n");
            break;
    }

    return 0;
}
