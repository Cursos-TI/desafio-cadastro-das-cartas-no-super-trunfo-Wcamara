#include <stdio.h>

int main(){

    char estado[3], estado2[3], nomecidade[15], nomecidade2[15];
    int popu, popu2, pontostu, pontostu2, codcart, codcart2;
    float kmcidade, kmcidade2, pib, pib2;



    //Entrada de Dados.

    printf("----Sistema de Cadastro ----\n\n");

    printf("Registre o estado com letras de 'A' a 'H': \n");
    scanf("%s", estado);

    printf("Digite o Código da carta de '01' a '04': \n");
    scanf("%d", &codcart);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", nomecidade);

    printf("População da Cidade: \n");
    scanf("%d", &popu);

    printf("Área em KM² da cidade: \n");
    scanf("%f", &kmcidade);

    printf("PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontostu);


    
        printf("----Sistema de Cadastro 2 ----\n\n");

    printf("Registre o estado com letras de 'A' a 'H': \n");
    scanf("%s", estado2);

    printf("Digite o Código da carta de '01' a '04': \n");
    scanf("%d", &codcart2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", nomecidade2);

    printf("População da Cidade: \n");
    scanf("%d", &popu2);

    printf("Área em KM² da cidade: \n");
    scanf("%f", &kmcidade2);

    printf("PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontostu2);


    // Saída de dados.

    printf("Carta 1\n");
    printf("Estado: %s%s", estado, codcart);




    return 0;
}
