#include <stdio.h>

#define NUM_ESTADOS 8
#define NUM_CIDADES 4

int main() {
    char estado[NUM_ESTADOS][50]; 
    char cidade[NUM_ESTADOS][NUM_CIDADES][50]; 
    int populacao[NUM_ESTADOS][NUM_CIDADES]; 
    float pib[NUM_ESTADOS][NUM_CIDADES];
    float area[NUM_ESTADOS][NUM_CIDADES]; 
    int pontos_turisticos[NUM_ESTADOS][NUM_CIDADES]; 

    
    for (int i = 0; i < NUM_ESTADOS; i++) {
        printf("Informe o nome do %dº estado: ", i + 1);
        scanf(" %[^\n]", estado[i]);

        for (int j = 0; j < NUM_CIDADES; j++) {
            printf("\nInforme o nome da %dª cidade do estado %s: ", j + 1, estado[i]);
            scanf(" %[^\n]", cidade[i][j]); 

            printf("Qual o tamanho da população de %s? ", cidade[i][j]);
            scanf("%d", &populacao[i][j]);

            printf("Informe o tamanho da área de %s (em km²): ", cidade[i][j]);
            scanf("%f", &area[i][j]);

            printf("Informe o PIB de %s (em bilhões): ", cidade[i][j]);
            scanf("%f", &pib[i][j]);

            printf("Quantos pontos turísticos famosos existem em %s? ", cidade[i][j]);
            scanf(" %d", &pontos_turisticos[i][j]);  
        }
        printf("\n"); 
    }

    
    printf("\n===== Informações dos Estados e Cidades =====\n");
    for (int i = 0; i < NUM_ESTADOS; i++) {
        printf("\n Estado: %s\n", estado[i]);
        for (int j = 0; j < NUM_CIDADES; j++) {
            printf("   Cidade %d: %s\n", j + 1, cidade[i][j]);
            printf("    - População: %d habitantes\n", populacao[i][j]);
            printf("    - Área: %.2f km²\n", area[i][j]);
            printf("    - PIB: R$ %.2f bilhões\n", pib[i][j]);
            printf("    - Pontos turísticos: %d\n\n", pontos_turisticos[i][j]);
        }
    }

    return 0;