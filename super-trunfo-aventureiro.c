/*
 * JOGO SUPER TRUNFO - NÍVEL INTERMEDIÁRIO
 *
 * Objetivo: Adicionar um menu interativo (switch) e
 * lógica de comparação aninhada (if-else).
 */

#include <stdio.h> 

// Estrutura da Carta (Atualizada para Países)
struct CartaSuperTrunfo {
    char nomePais[50];
    char codigo[5];
    int populacao;
    float area;             // Em km²
    float pib;              // Em bilhões de USD
    int pontosTuristicos;

    // Campo calculado
    float densidadePop;     // populacao / area
};


int main() {
    printf("=========================================\n");
    printf("   JOGO SUPER TRUNFO - NÍVEL INTERMEDIÁRIO  \n");
    printf("=========================================\n\n");

    // --- CADASTRO DAS CARTAS (PRÉ-DEFINIDAS) ---

    struct CartaSuperTrunfo carta1; // Brasil
    struct CartaSuperTrunfo carta2; // Argentina
    int escolha; // Variável para o menu

    // Preenchendo a Carta 1 (Brasil)
    sprintf(carta1.nomePais, "Brasil");
    sprintf(carta1.codigo, "A1");
    carta1.populacao = 214000000;
    carta1.area = 8510000;
    carta1.pib = 1609; // Bilhões USD (aprox)
    carta1.pontosTuristicos = 10; // Valor hipotético

    // Preenchendo a Carta 2 (Argentina)
    sprintf(carta2.nomePais, "Argentina");
    sprintf(carta2.codigo, "B2");
    carta2.populacao = 45800000;
    carta2.area = 2780000;
    carta2.pib = 449; // Bilhões USD (aprox)
    carta2.pontosTuristicos = 8; // Valor hipotético


    // --- CÁLCULO DOS CAMPOS DERIVADOS ---

    carta1.densidadePop = (float)carta1.populacao / carta1.area;
    carta2.densidadePop = (float)carta2.populacao / carta2.area;


    // --- EXIBIÇÃO DAS CARTAS ---
    // (Opcional, mas bom para o jogador ver as cartas antes de escolher)
    
    printf("--- Carta 1: %s [%s] ---\n", carta1.nomePais, carta1.codigo);
    printf("  População: %d\n", carta1.populacao);
    printf("  Área: %.2f km²\n", carta1.area);
    printf("  PIB: %.2f Bi USD\n", carta1.pib);
    printf("  Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("  Densidade: %.2f hab/km²\n", carta1.densidadePop);
    printf("----------------------------------------\n");

    printf("--- Carta 2: %s [%s] ---\n", carta2.nomePais, carta2.codigo);
    printf("  População: %d\n", carta2.populacao);
    printf("  Área: %.2f km²\n", carta2.area);
    printf("  PIB: %.2f Bi USD\n", carta2.pib);
    printf("  Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("  Densidade: %.2f hab/km²\n", carta2.densidadePop);
    printf("----------------------------------------\n\n");


    /*
     * ======================================
     * MENU INTERATIVO (switch)
     * ======================================
     */

    printf("Escolha o atributo para comparar:\n");
    printf("  1. População\n");
    printf("  2. Área\n");
    printf("  3. PIB\n");
    printf("  4. Pontos Turísticos\n");
    printf("  5. Densidade Demográfica (MENOR vence!)\n");
    printf("Digite sua escolha (1-5): ");
    
    // Lê a escolha do usuário
    scanf("%d", &escolha);

    printf("\n--- Resultado da Comparacao ---\n");

    // Usa a estrutura 'switch' para decidir o que fazer
    switch (escolha) {
        
        case 1: // População
            printf("Atributo: População (Maior Vence)\n");
            printf("  %s: %d\n", carta1.nomePais, carta1.populacao);
            printf("  %s: %d\n", carta2.nomePais, carta2.populacao);
            
            // Lógica 'if-else' ANINHADA
            if (carta1.populacao == carta2.populacao) {
                printf("Resultado: Empate!\n");
            } else {
                if (carta1.populacao > carta2.populacao) {
                    printf("Resultado: %s venceu!\n", carta1.nomePais);
                } else {
                    printf("Resultado: %s venceu!\n", carta2.nomePais);
                }
            }
            break; // Termina o 'case 1'

        case 2: // Área
            printf("Atributo: Área (Maior Vence)\n");
            printf("  %s: %.2f km²\n", carta1.nomePais, carta1.area);
            printf("  %s: %.2f km²\n", carta2.nomePais, carta2.area);

            if (carta1.area == carta2.area) {
                printf("Resultado: Empate!\n");
            } else {
                if (carta1.area > carta2.area) {
                    printf("Resultado: %s venceu!\n", carta1.nomePais);
                } else {
                    printf("Resultado: %s venceu!\n", carta2.nomePais);
                }
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB (Maior Vence)\n");
            printf("  %s: %.2f Bi USD\n", carta1.nomePais, carta1.pib);
            printf("  %s: %.2f Bi USD\n", carta2.nomePais, carta2.pib);

            if (carta1.pib == carta2.pib) {
                printf("Resultado: Empate!\n");
            } else {
                if (carta1.pib > carta2.pib) {
                    printf("Resultado: %s venceu!\n", carta1.nomePais);
                } else {
                    printf("Resultado: %s venceu!\n", carta2.nomePais);
                }
            }
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turísticos (Maior Vence)\n");
            printf("  %s: %d\n", carta1.nomePais, carta1.pontosTuristicos);
            printf("  %s: %d\n", carta2.nomePais, carta2.pontosTuristicos);

            if (carta1.pontosTuristicos == carta2.pontosTuristicos) {
                printf("Resultado: Empate!\n");
            } else {
                if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                    printf("Resultado: %s venceu!\n", carta1.nomePais);
                } else {
                    printf("Resultado: %s venceu!\n", carta2.nomePais);
                }
            }
            break;

        case 5: // Densidade Demográfica
            printf("Atributo: Densidade Demográfica (MENOR Vence!)\n");
            printf("  %s: %.2f hab/km²\n", carta1.nomePais, carta1.densidadePop);
            printf("  %s: %.2f hab/km²\n", carta2.nomePais, carta2.densidadePop);

            // Lógica ANINHADA e INVERTIDA (menor vence)
            if (carta1.densidadePop == carta2.densidadePop) {
                printf("Resultado: Empate!\at");
            } else {
                if (carta1.densidadePop < carta2.densidadePop) {
                    printf("Resultado: %s venceu!\n", carta1.nomePais);
                } else {
                    printf("Resultado: %s venceu!\n", carta2.nomePais);
                }
            }
            break;

        // Trata entradas inválidas (Requisito Não Funcional: Segurança)
        default:
            printf("Opção Inválida!\n");
            printf("Você digitou '%d', que não é uma opção de 1 a 5.\n", escolha);
            printf("A rodada terminou sem comparação.\n");
            break;
    }
    
    printf("\nFim do programa.\n");

    return 0; 
} 
