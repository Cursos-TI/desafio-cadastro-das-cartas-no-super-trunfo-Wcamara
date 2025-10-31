/*
 * JOGO SUPER TRUNFO - DESAFIO NÍVEL NOVATO
 * Versão Simplificada (Estilo Novato)
 */

#include <stdio.h> 

// Estrutura da Carta
struct CartaSuperTrunfo {
    char estado[3];
    char codigo[5];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // Campos calculados
    float densidadePop;
    float pibPerCapita;
};


int main() {
    printf("=========================================\n");
    printf("     JOGO SUPER TRUNFO - NÍVEL NOVATO    \n");
    printf("=========================================\n\n");

    // --- CADASTRO DAS CARTAS (PRÉ-DEFINIDAS) ---

    struct CartaSuperTrunfo carta1;
    struct CartaSuperTrunfo carta2;

    // Preenchendo a Carta 1 (São Paulo)
    sprintf(carta1.estado, "SP");
    sprintf(carta1.codigo, "A1");
    sprintf(carta1.nomeCidade, "Sao Paulo");
    carta1.populacao = 12396372;
    carta1.area = 1521.11;
    carta1.pib = 714680.0;
    carta1.pontosTuristicos = 15;

    // Preenchendo a Carta 2 (Rio de Janeiro)
    sprintf(carta2.estado, "RJ");
    sprintf(carta2.codigo, "B2");
    sprintf(carta2.nomeCidade, "Rio de Janeiro");
    carta2.populacao = 6775561;
    carta2.area = 1200.32;
    carta2.pib = 358430.0;
    carta2.pontosTuristicos = 20;


    // --- CÁLCULO DOS CAMPOS DERIVADOS ---

    // Cálculo para Carta 1
    carta1.densidadePop = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    // Cálculo para Carta 2
    carta2.densidadePop = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;


    // --- EXIBIÇÃO DAS CARTAS ---

    printf("### Cartas da Rodada ###\n");
    
    printf("----------------------------------------\n");
    printf("  Carta 1: %s (%s) - [%s]\n", carta1.nomeCidade, carta1.estado, carta1.codigo);
    printf("  População: %d hab\n", carta1.populacao);
    printf("  Área: %.2f km²\n", carta1.area);
    printf("  PIB: R$ %.2f milhões\n", carta1.pib);
    printf("  Densidade: %.2f hab/km²\n", carta1.densidadePop);
    printf("  PIB per capita: R$ %.2f\n", carta1.pibPerCapita * 1000000.0);
    printf("----------------------------------------\n");

    printf("----------------------------------------\n");
    printf("  Carta 2: %s (%s) - [%s]\n", carta2.nomeCidade, carta2.estado, carta2.codigo);
    printf("  População: %d hab\n", carta2.populacao);
    printf("  Área: %.2f km²\n", carta2.area);
    printf("  PIB: R$ %.2f milhões\n", carta2.pib);
    printf("  Densidade: %.2f hab/km²\n", carta2.densidadePop);
    printf("  PIB per capita: R$ %.2f\n", carta2.pibPerCapita * 1000000.0);
    printf("----------------------------------------\n");

    /*
     * ======================================
     * LÓGICA DE COMPARAÇÃO (if-else)
     * ======================================
     */

    printf("\n### Início da Comparação ###\n\n");

    // --- Comparando PIB (Regra: Maior Valor Vence) ---
    
    printf("Comparacao de cartas (Atributo: PIB)\n\n");
    
    printf("  Carta 1 - %s (%s): R$ %.2f milhões\n", carta1.nomeCidade, carta1.estado, carta1.pib);
    printf("  Carta 2 - %s (%s): R$ %.2f milhões\n", carta2.nomeCidade, carta2.estado, carta2.pib);
    
    // Lógica de decisão com if, else if, else
    if (carta1.pib > carta2.pib) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } 
    else if (carta2.pib > carta1.pib) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } 
    else {
        printf("\nResultado: Empate!\n");
    }


    /*
    // --- Comparando DENSIDADE (Regra: Menor Valor Vence) ---

    printf("\n\nComparacao de cartas (Atributo: Densidade)\n\n");
    
    printf("  Carta 1 - %s (%s): %.2f hab/km²\n", carta1.nomeCidade, carta1.estado, carta1.densidadePop);
    printf("  Carta 2 - %s (%s): %.2f hab/km²\n", carta2.nomeCidade, carta2.estado, carta2.densidadePop);
    
    if (carta1.densidadePop < carta2.densidadePop) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } 
    else if (carta2.densidadePop < carta1.densidadePop) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } 
    else {
        printf("\nResultado: Empate!\n");
    }
    */ 
    // Usei alguns truques que aprendi po fora das aulas da materia, como por exemplo o "struct"
    
    printf("\nFim do programa.\n");

    return 0; 
}
