#include <stdio.h>

// Definir a estrutura da carta
typedef struct {
    char codigo[10];            // Código da carta (ex: C1, C2)
    char nome_cidade[50];      // Nome da cidade
    char estado[3];            // Sigla do estado (ex: SP, RJ)
    int populacao;             // População
    float area;                // Área (em km²)
    float pib;                 // PIB (em bilhões)
    int pontos_turisticos;     // Número de pontos turísticos
} Carta;

// Função para calcular a densidade populacional
float calcular_densidade(Carta carta) {
    return carta.populacao / carta.area;
}

// Função para calcular o PIB per capita
float calcular_pib_per_capita(Carta carta) {
    return carta.pib / carta.populacao;
}

// Função de comparação
void comparar_cartas(Carta carta1, Carta carta2, int opcao) {
    switch (opcao) {
        case 1: // Comparar População
            printf("\nComparação de Cartas (Atributo: População):\n");
            printf("Carta 1 - %s: %d\n", carta1.nome_cidade, carta1.populacao);
            printf("Carta 2 - %s: %d\n", carta2.nome_cidade, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome_cidade);
            } else if (carta1.populacao < carta2.populacao) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome_cidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        
        case 2: // Comparar Área
            printf("\nComparação de Cartas (Atributo: Área):\n");
            printf("Carta 1 - %s: %.2f km²\n", carta1.nome_cidade, carta1.area);
            printf("Carta 2 - %s: %.2f km²\n", carta2.nome_cidade, carta2.area);
            if (carta1.area > carta2.area) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome_cidade);
            } else if (carta1.area < carta2.area) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome_cidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        
        case 3: // Comparar PIB
            printf("\nComparação de Cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s: %.2f bilhões\n", carta1.nome_cidade, carta1.pib);
            printf("Carta 2 - %s: %.2f bilhões\n", carta2.nome_cidade, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome_cidade);
            } else if (carta1.pib < carta2.pib) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome_cidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Comparar Densidade Populacional
            printf("\nComparação de Cartas (Atributo: Densidade Populacional):\n");
            float densidade1 = calcular_densidade(carta1);
            float densidade2 = calcular_densidade(carta2);
            printf("Carta 1 - %s: %.2f habitantes/km²\n", carta1.nome_cidade, densidade1);
            printf("Carta 2 - %s: %.2f habitantes/km²\n", carta2.nome_cidade, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome_cidade); // Menor densidade vence
            } else if (densidade1 > densidade2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome_cidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Comparar PIB per capita
            printf("\nComparação de Cartas (Atributo: PIB per capita):\n");
            float pib_per_capita1 = calcular_pib_per_capita(carta1);
            float pib_per_capita2 = calcular_pib_per_capita(carta2);
            printf("Carta 1 - %s: %.2f bilhões por habitante\n", carta1.nome_cidade, pib_per_capita1);
            printf("Carta 2 - %s: %.2f bilhões por habitante\n", carta2.nome_cidade, pib_per_capita2);
            if (pib_per_capita1 > pib_per_capita2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome_cidade);
            } else if (pib_per_capita1 < pib_per_capita2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome_cidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }
}

int main() {
    // Definir as cartas já cadastradas
    Carta carta1 = {"C1", "São Paulo", "SP", 12300000, 1500.5, 600.5, 50};
    Carta carta2 = {"C2", "Rio de Janeiro", "RJ", 6000000, 1200.5, 300.5, 40};

    int opcao;

    while (1) {
        // Exibir o menu interativo
        printf("\n--- Menu do Super Trunfo ---\n");
        printf("Escolha o atributo para comparar:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Densidade Populacional\n");
        printf("5. PIB per capita\n");
        printf("6. Sair\n");
        printf("Digite sua escolha (1-6): ");
        scanf("%d", &opcao);

        if (opcao == 6) {
            printf("Saindo do jogo...\n");
            break;
        }

        // Chamar a função de comparação
        comparar_cartas(carta1, carta2, opcao);
    }

    return 0;
}
