#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {

    // Área para definição das variáveis para armazenar as propriedades das cidades
    int opcao;

    char estado_1[20], codigo_carta_1[4], cidade_1[20];
    unsigned long int populacao_1;
    int n_pontos_turisticos_1;
    float area_1, pib_1, densidade_pop_1, pib_per_capita_1, super_poder_1;

    char estado_2[20], codigo_carta_2[4], cidade_2[20];
    unsigned long int populacao_2;
    int n_pontos_turisticos_2;
    float area_2, pib_2, densidade_pop_2, pib_per_capita_2, super_poder_2;

    // Cadastro das Cartas:
    printf("------------ PRIMEIRA CARTA ------------\n");
    printf("Digite o nome do estado: ");
    scanf("%s", estado_1);
    printf("Digite o código da carta: ");
    scanf("%s", codigo_carta_1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade_1);
    printf("Qual o número de habitante da cidade? ");
    scanf("%lu", &populacao_1);
    printf("Qual a área da cidade em Km²? ");
    scanf("%f", &area_1);
    densidade_pop_1 = populacao_1 / (area_1);
    printf("Qual o PIB da cidade? (em bilhões de reais) ");
    scanf("%f", &pib_1);
    pib_per_capita_1 = (pib_1 * 1000000000) / populacao_1;
    printf("Quantos pontos turísticos a cidade tem? ");
    scanf("%i", &n_pontos_turisticos_1);
    super_poder_1 = (float) populacao_1 + area_1 + pib_1 + n_pontos_turisticos_1 + pib_per_capita_1 + (1/densidade_pop_1);

    printf("------------ SEGUNDA CARTA ------------\n");
    printf("Digite o nome do estado: ");
    scanf("%s", estado_2);
    printf("Digite o código da carta: ");
    scanf("%s", codigo_carta_2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade_2);
    printf("Qual o número de habitante da cidade? ");
    scanf("%lu", &populacao_2);
    printf("Qual a área da cidade em Km²? ");
    scanf("%f", &area_2);
    densidade_pop_2 = populacao_2 / (area_2);
    printf("Qual o PIB da cidade? (em bilhões de reais) ");
    scanf("%f", &pib_2);
    pib_per_capita_2 = (pib_2 * 1000000000) / populacao_2;
    printf("Quantos pontos turísticos a cidade tem? ");
    scanf("%i", &n_pontos_turisticos_2);
    super_poder_2 = (float) populacao_2 + area_2 + pib_2 + n_pontos_turisticos_2 + pib_per_capita_2 + (1/densidade_pop_2);

    //Menu interativo:
    printf("\n-------- COPARAÇÃO DE CARTAS --------\n");
    printf("1. Nome do estado - apenas exibir as informações\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos Turisticos\n");
    printf("6. Densidade populacional\n");
    printf("Escolha um dos atributos acima para comparação: ");
    scanf("%d", &opcao);

    // Comparação de Cartas:

    switch (opcao)
    {
    case 1:
        printf("Carta 1: %s - %s\n", cidade_1, estado_1);
        printf("Carta 2: %s - %s\n", cidade_2, estado_2);
        break;

    case 2:
        printf("Atributo: População\n");
        printf("Carta 1 - %s (%s): %lu habitantes\n", cidade_1, estado_1, populacao_1);
        printf("Carta 2 - %s (%s): %lu habitantes\n", cidade_2, estado_2, populacao_2);
        
        if (populacao_1 > populacao_2){
            printf("Carta 1 - %s (%s) tem maior população.\n", cidade_1, estado_1);
            printf("Carta 1 venceu!\n");
            
        }else if (populacao_1 == populacao_2){
            printf("Empate!\n");

        }else{
            printf("Carta 2 - %s (%s) tem maior população.\n", cidade_2, estado_2);
            printf("Carta 2 venceu!\n");
        }
        break;

    case 3:
        printf("Atributo: Área\n");
        printf("Carta 1 - %s (%s): %.2f Km²\n", cidade_1, estado_1, area_1);
        printf("Carta 2 - %s (%s): %.2f Km²\n", cidade_2, estado_2, area_2);
        
        if (area_1 > area_2){
            printf("Carta 1 - %s (%s) tem maior área.\n", cidade_1, estado_1);
            printf("Carta 1 venceu!\n");
        
        }else if (area_1 == area_2){
            printf("Empate!\n");

        }else{
            printf("Carta 2 - %s (%s) tem maior área.\n", cidade_2, estado_2);
            printf("Carta 2 venceu!\n");
        }
        break;

    case 4:
        printf("Atributo: PIB\n");
        printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", cidade_1, estado_1, pib_1);
        printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", cidade_2, estado_2, pib_2);
        
        if (pib_1 > pib_2){
            printf("Carta 1 - %s (%s) tem maior PIB.\n", cidade_1, estado_1);
            printf("Carta 1 venceu!\n");
        
        }else if (pib_1 == pib_2){
            printf("Empate!\n");

        }else{
            printf("Carta 2 - %s (%s) tem maior PIB.\n", cidade_2, estado_2);
            printf("Carta 2 venceu!\n");
        }
        break;

    case 5:
        printf("Atributo: Número de pontos turísticos\n");
        printf("Carta 1 - %s (%s): %d pontos turísticos\n", cidade_1, estado_1, n_pontos_turisticos_1);
        printf("Carta 2 - %s (%s): %d pontos turísticos\n", cidade_2, estado_2, n_pontos_turisticos_2);
        
        if (n_pontos_turisticos_1 > n_pontos_turisticos_2){
            printf("Carta 1 - %s (%s) tem mais pontos turísticos.\n", cidade_1, estado_1);
            printf("Carta 1 venceu!\n");

        }else if (n_pontos_turisticos_1 == n_pontos_turisticos_2){
            printf("Empate!\n");

        }else{
            printf("Carta 2 - %s (%s) tem mais pontos turísticos.\n", cidade_2, estado_2);
            printf("Carta 2 venceu!\n");
        }
        break;

    case 6:
        printf("Atributo: Densidade populacional\n");
        printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade_1, estado_1, densidade_pop_1);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade_2, estado_2, densidade_pop_2);
        
        if (densidade_pop_1 < densidade_pop_2){
            printf("Carta 1 - %s (%s) tem menor densidade populacional.\n", cidade_1, estado_1);
            printf("Carta 1 venceu!\n");

        }else if (densidade_pop_1 == densidade_pop_2){
            printf("Empate!\n");

        }else{
            printf("Carta 2 - %s (%s) tem menor densidade populacional.\n", cidade_2, estado_2);
            printf("Carta 2 venceu!\n");
        }
        break;
               
    default:
    printf("Opção invalída!\n");
        break;

    }
    
    return 0;
}
