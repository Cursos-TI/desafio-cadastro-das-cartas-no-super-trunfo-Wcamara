/*
 * JOGO SUPER TRUNFO - NÍVEL AVANÇADO (Desafio Final)
 *
 * Objetivo: Integrar menus dinâmicos (switch), loops (while),
 * seleção de dois atributos e o operador ternário
 */

#include <stdio.h> 

// Estrutura da Carta (Países)
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
    printf("     JOGO SUPER TRUNFO - NÍVEL AVANÇADO    \n");
    printf("=========================================\n\n");

    // --- CADASTRO DAS CARTAS (PRÉ-DEFINIDAS) ---

    struct CartaSuperTrunfo carta1; // Brasil
    struct CartaSuperTrunfo carta2; // Argentina

    // Preenchendo a Carta 1 (Brasil)
    sprintf(carta1.nomePais, "Brasil");
    sprintf(carta1.codigo, "A1");
    carta1.populacao = 214000000;
    carta1.area = 8510000;
    carta1.pib = 1609; 
    carta1.pontosTuristicos = 10;

    // Preenchendo a Carta 2 (Argentina)
    sprintf(carta2.nomePais, "Argentina");
    sprintf(carta2.codigo, "B2");
    carta2.populacao = 45800000;
    carta2.area = 2780000;
    carta2.pib = 449; 
    carta2.pontosTuristicos = 8; 

    // --- CÁLCULO DOS CAMPOS DERIVADOS ---
    carta1.densidadePop = (float)carta1.populacao / carta1.area;
    carta2.densidadePop = (float)carta2.populacao / carta2.area;

    // --- VARIÁVEIS PARA A LÓGICA DO JOGO ---
    int escolha1 = 0;
    int escolha2 = 0;
    
    // Armazena os valores dos atributos escolhidos
    float val1_c1 = 0, val1_c2 = 0; // Atributo 1
    float val2_c1 = 0, val2_c2 = 0; // Atributo 2
    
    // Armazena os nomes dos atributos
    char nomeAttr1[30];
    char nomeAttr2[30];
    
    int escolhaValida = 0; // Flag para controlar os loops

    /*
     * ======================================
     * MENU 1: ESCOLHA DO PRIMEIRO ATRIBUTO
     * ======================================
     */
    while (escolhaValida == 0) {
        printf("--- Escolha o PRIMEIRO atributo (1-5) ---\n");
        printf("  1. População\n");
        printf("  2. Área\n");
        printf("  3. PIB\n");
        printf("  4. Pontos Turísticos\n");
        printf("  5. Densidade Demográfica\n");
        printf("Digite sua escolha: ");
        
        scanf("%d", &escolha1);

        // 'switch' para pegar os valores e nomes
        switch (escolha1) {
            case 1: 
                sprintf(nomeAttr1, "População");
                val1_c1 = (float)carta1.populacao; 
                val1_c2 = (float)carta2.populacao;
                escolhaValida = 1; // Marca a escolha como válida
                break;
            case 2:
                sprintf(nomeAttr1, "Área");
                val1_c1 = carta1.area; 
                val1_c2 = carta2.area;
                escolhaValida = 1;
                break;
            case 3:
                sprintf(nomeAttr1, "PIB");
                val1_c1 = carta1.pib; 
                val1_c2 = carta2.pib;
                escolhaValida = 1;
                break;
            case 4:
                sprintf(nomeAttr1, "Pontos Turísticos");
                val1_c1 = (float)carta1.pontosTuristicos; 
                val1_c2 = (float)carta2.pontosTuristicos;
                escolhaValida = 1;
                break;
            case 5:
                sprintf(nomeAttr1, "Densidade");
                val1_c1 = carta1.densidadePop; 
                val1_c2 = carta2.densidadePop;
                escolhaValida = 1;
                break;
            default:
                // 'default' trata entradas inválidas
                printf("Opção Inválida! Tente novamente.\n\n");
        }
    }

    /*
     * ======================================
     * MENU 2: ESCOLHA DO SEGUNDO ATRIBUTO
     * ======================================
     */
    escolhaValida = 0; // Reseta a flag para o segundo loop
    while (escolhaValida == 0) {
        
        printf("\n--- Escolha o SEGUNDO atributo (não pode ser %d) ---\n", escolha1);
        
        // Menu Dinâmico: não exibe a opção já escolhida
        if (escolha1 != 1) { printf("  1. População\n"); }
        if (escolha1 != 2) { printf("  2. Área\n"); }
        if (escolha1 != 3) { printf("  3. PIB\n"); }
        if (escolha1 != 4) { printf("  4. Pontos Turísticos\n"); }
        if (escolha1 != 5) { printf("  5. Densidade Demográfica\n"); }
        
        printf("Digite sua escolha: ");
        scanf("%d", &escolha2);

        // Validação 1: Não pode ser igual ao primeiro
        if (escolha2 == escolha1) {
            printf("Opção Inválida! Atributo ja escolhido. Tente novamente.\n");
            continue; // Pula para a próxima iteração do loop
        }

        // Validação 2: 'switch' para pegar os valores
        switch (escolha2) {
            case 1: 
                sprintf(nomeAttr2, "População");
                val2_c1 = (float)carta1.populacao; 
                val2_c2 = (float)carta2.populacao;
                escolhaValida = 1;
                break;
            case 2:
                sprintf(nomeAttr2, "Área");
                val2_c1 = carta1.area; 
                val2_c2 = carta2.area;
                escolhaValida = 1;
                break;
            case 3:
                sprintf(nomeAttr2, "PIB");
                val2_c1 = carta1.pib; 
                val2_c2 = carta2.pib;
                escolhaValida = 1;
                break;
            case 4:
                sprintf(nomeAttr2, "Pontos Turísticos");
                val2_c1 = (float)carta1.pontosTuristicos; 
                val2_c2 = (float)carta2.pontosTuristicos;
                escolhaValida = 1;
                break;
            case 5:
                sprintf(nomeAttr2, "Densidade");
                val2_c1 = carta1.densidadePop; 
                val2_c2 = carta2.densidadePop;
                escolhaValida = 1;
                break;
            default:
                printf("Opção Inválida! Tente novamente.\n\n");
        }
    }

    /*
     * ======================================
     * CÁLCULO DA SOMA E RESULTADO FINAL
     * ======================================
     */
     
    printf("\n--- Comparação da Rodada ---\n");
    printf("Atributos escolhidos: %s e %s\n\n", nomeAttr1, nomeAttr2);

    // Exibe valores individuais
    printf("País: %s\n", carta1.nomePais);
    printf("  %s: %.2f\n", nomeAttr1, val1_c1);
    printf("  %s: %.2f\n", nomeAttr2, val2_c1);
    
    printf("\nPaís: %s\n", carta2.nomePais);
    printf("  %s: %.2f\n", nomeAttr1, val1_c2);
    printf("  %s: %.2f\n", nomeAttr2, val2_c2);

    // Soma dos atributos para cada carta
    float soma_c1 = val1_c1 + val2_c1;
    float soma_c2 = val1_c2 + val2_c2;

    printf("\n--- SOMA DOS VALORES ---\n");
    printf("  Soma %s: %.2f\n", carta1.nomePais, soma_c1);
    printf("  Soma %s: %.2f\n", carta2.nomePais, soma_c2);

    // Resultado Final com if-else e Operador Ternário
    printf("\n--- RESULTADO FINAL ---\n");
    
    // Lógica com if, else if, else
    if (soma_c1 == soma_c2) {
        printf("Resultado: EMPATE!\n");
    } 
    else {
        // Uso do Operador Ternário (?:) para definir o vencedor
        // (condicao) ? (valor_se_verdadeiro) : (valor_se_falso)
        const char* nomeVencedor = (soma_c1 > soma_c2) ? carta1.nomePais : carta2.nomePais;
        
        printf("Resultado: O vencedor é %s!\n", nomeVencedor);
    }
    
    printf("\nFim do programa.\n");
    return 0; 
}
