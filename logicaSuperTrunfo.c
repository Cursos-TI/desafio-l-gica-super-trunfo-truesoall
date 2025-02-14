#include <stdio.h>

int main() {
    // Inicia a declaração de valores a serem informados pelo usuário
    int pop, ptstur, pop1, ptstur1;
    float pib, area, pib1, area1, denpop, denpop1, pibpc, pibpc1;
    char estado[50], cidade[50], codcarta[50];
    char estado1[50], cidade1[50], codcarta1[50];

    // Entrada dos dados para a primeira cidade
    printf("Digite o estado da cidade: \n");
    scanf(" %[^\n]", estado);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade);

    printf("Digite o código da cidade (ex: 01, 02...): \n");
    scanf(" %[^\n]", codcarta);

    printf("Digite a população total da cidade (em milhões): \n");
    scanf("%d", &pop);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &ptstur);

    denpop = pop / area; //calculo de densidade populacional
    pibpc = pib /pop; // calculo do PIB per capita


    // Entrada dos dados para a segunda cidade
    printf("\nDigite o estado da segunda cidade: \n");
    scanf(" %[^\n]", estado1);

    printf("Digite o nome da segunda cidade: \n");
    scanf(" %[^\n]", cidade1);

    printf("Digite o código da segunda cidade (ex: A01, A02 - se for estados diferentes use a letra seguinte): \n");
    scanf(" %[^\n]", codcarta1);

    printf("Digite a população total da segunda cidade (em milhões): \n");
    scanf("%d", &pop1);

    printf("Digite a área da segunda cidade (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da segunda cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da segunda cidade: \n");
    scanf("%d", &ptstur1);

    denpop1 = pop1/ area1; //calculo de densidade populacional
    pibpc1 = pib1 /pop1; // calculo do PIB per capita

    int valor;

    do { //casos de comparação de cartas mais um do-while para continuar a pediir entradas caso o valor seja inválido
        printf("Escolha um parametro para comparação das cartas: \n -- 1. População total  2. Área  3. PIB  4. Densidade populacional  5. PIB per capita 6. Número de pontos turísticos -- \n");
        scanf("%d", &valor);
    
        switch (valor) {
            
            case 1:
            printf("Carta 1 - Estado: %s, Cidade: %s, População: %d \n", estado, cidade, pop);
            printf("Carta 2 - Estado: %s, Cidade: %s, População: %d \n", estado1, cidade1, pop1);
                
                pop > pop1 ? printf("A carta %s tem a maior população! \n", codcarta) : printf("A carta %s tem a maior população! \n", codcarta1);
                break;    

            case 2:
            printf("Carta 1 - Estado: %s, Cidade: %s, Área: %f km²\n", estado, cidade, area);
            printf("Carta 2 - Estado: %s, Cidade: %s, Área: %f km²\n", estado1, cidade1, area1);
                
                area > area1 ? printf("A carta %s tem a maior área! \n", codcarta) : printf("A carta %s tem a maior área! \n", codcarta1);
                break;    

            case 3:
            printf("Carta 1 - Estado: %s, Cidade: %s, PIB: R$ %f milhões\n", estado, cidade, pib);
            printf("Carta 2 - Estado: %s, Cidade: %s, PIB: R$ %f milhões\n", estado1, cidade1, pib1);
                
                pib > pib1 ? printf("A carta %s tem o maior PIB! \n", codcarta) : printf("A carta %s tem o maior PIB! \n", codcarta1);
                break;    
                
            case 4:
            printf("Carta 1 - Estado: %s, Cidade: %s, Densidade: %.2f hab/km²\n", estado, cidade, denpop);
            printf("Carta 2 - Estado: %s, Cidade: %s, Densidade: %.2f hab/km²\n", estado1, cidade1, denpop1);
                
                denpop < denpop1 ? printf("A carta %s tem a menor densidade populacional! \n", codcarta) : printf("A carta %s tem a menor densidade populacionnal! \n", codcarta1);
                break;
    
            case 5:
            printf("Carta 1 - Estado: %s, Cidade: %s, PIB per capita: R$ %.2f por habitante\n", estado, cidade, pibpc);
            printf("Carta 2 - Estado: %s, Cidade: %s, PIB per capita: R$ %.2f por habitante \n", estado1, cidade1, pibpc1);
                
            pibpc > pibpc1 ? printf("A carta %s tem o maior PIB per capita! \n", codcarta) : printf("A carta %s tem o maior PIB per capita! \n", codcarta1);
                break;
    
            case 6:
            printf("Carta 1 - Estado: %s, Cidade: %s, Pontos turísticos:  %d pontos turísticos \n", estado, cidade, ptstur);
            printf("Carta 2 - Estado: %s, Cidade: %s, Pontos turísticos:  %d pontos turísticos \n", estado1, cidade1, ptstur1);
                
                ptstur > ptstur1 ? printf("A carta %s tem mais pontos turísticos!", codcarta) : printf("A carta %s tem mais pontos turísticos!", codcarta1);
                break;

            default:
                printf("Número inválido! Tente novamente.\n");
                break;
        }
    } while (valor < 1 || valor > 6);  // Repetir enquanto a entrada for diferente dos pedidos

 

    return 0;
}
