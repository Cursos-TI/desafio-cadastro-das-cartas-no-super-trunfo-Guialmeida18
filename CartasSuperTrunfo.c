#include <stdio.h>
#include <string.h>

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

int main() {
        // Criar variáveis para duas cartas de cidades
    Carta carta1, carta2;
     // Cadastro da Carta 1
    printf("Digite os dados para a Carta 1:\n");
    printf("Código da carta (ex: C1): ");
    scanf("%s", carta1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nome_cidade);  // Ler string com espaços
    printf("Estado (ex: SP): ");
    scanf("%s", carta1.estado);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cadastro da Carta 2
    printf("\nDigite os dados para a Carta 2:\n");
    printf("Código da carta (ex: C2): ");
    scanf("%s", carta2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nome_cidade);  // Ler string com espaços
    printf("Estado (ex: SP): ");
    scanf("%s", carta2.estado);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibição das Cartas Cadastradas
    printf("\nExibindo as Cartas Cadastradas:\n");

    // Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("Estado: %s\n", carta1.estado);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontos_turisticos);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("Estado: %s\n", carta2.estado);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontos_turisticos);

    return 0;
}
