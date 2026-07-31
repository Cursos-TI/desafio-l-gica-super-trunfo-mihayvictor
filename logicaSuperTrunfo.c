#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {

    // Área para definição das variáveis para armazenar as propriedades das cidades
    char atributo1, atributo2;
    int resultado1, resultado2;

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

    //Menu interativo (Atributo 1)
    printf("\n-------- COPARAÇÃO DE CARTAS (Atributo 1) --------\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos Turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super poder\n");
    printf("Escolha um dos atributos acima para comparação: ");
    scanf("%d", &atributo1);

    // Comparação do atributo 1:

    switch (atributo1){
 
        case 1:
            printf("Atributo: População\n");
            printf("Carta 1 - %s (%s): %lu habitantes\n", cidade_1, estado_1, populacao_1);
            printf("Carta 2 - %s (%s): %lu habitantes\n", cidade_2, estado_2, populacao_2);
            
            resultado1 = populacao_1 > populacao_2 ? 1 : 0; 
            if (populacao_1 == populacao_2){
                printf("Empate!\n");
            }else if (resultado1 == 1){
                printf("carta 1 venceu!\n");
            }else{
                printf("Carta 2 venceu!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("Carta 1 - %s (%s): %.2f Km²\n", cidade_1, estado_1, area_1);
            printf("Carta 2 - %s (%s): %.2f Km²\n", cidade_2, estado_2, area_2);
            
            resultado1 = area_1 > area_2 ? 1 : 0;
            if (area_1 == area_2){
                printf("Empate!\n");
            }else if (resultado1 == 1){
                printf("carta 1 venceu!\n");
            }else{
                printf("Carta 2 venceu!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", cidade_1, estado_1, pib_1);
            printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", cidade_2, estado_2, pib_2);
            
            resultado1 = pib_1 > pib_2 ? 1 : 0;
            if (pib_1 == pib_2){
                printf("Empate!\n");
            }else if (resultado1 == 1){
                printf("carta 1 venceu!\n");
            }else{
                printf("Carta 2 venceu!\n");
            } 
            break;

        case 4:
            printf("Atributo: Número de pontos turísticos\n");
            printf("Carta 1 - %s (%s): %d pontos turísticos\n", cidade_1, estado_1, n_pontos_turisticos_1);
            printf("Carta 2 - %s (%s): %d pontos turísticos\n", cidade_2, estado_2, n_pontos_turisticos_2);
            
            resultado1 = n_pontos_turisticos_1 > n_pontos_turisticos_2 ? 1 : 0;
            if (n_pontos_turisticos_1 == n_pontos_turisticos_2){
                printf("Empate!\n");
            }else if (resultado1 == 1){
                printf("carta 1 venceu!\n");
            }else{
                printf("Carta 2 venceu!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade populacional\n");
            printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade_1, estado_1, densidade_pop_1);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade_2, estado_2, densidade_pop_2);
            
            resultado1 = densidade_pop_1 < densidade_pop_2 ? 1 : 0;
            if (densidade_pop_1 == densidade_pop_2){
                printf("Empate!\n");
            }else if (resultado1 == 1){
                printf("carta 1 venceu!\n");
            }else{
                printf("Carta 2 venceu!\n");
            }
            break;

        case 6: 
            printf("Atributo: PIB per capita\n");
            printf("Carta 1 - %s (%s): %.2f R$ \n", cidade_1, estado_1, pib_per_capita_1);
            printf("Carta 2 - %s (%s): %.2f R$ \n", cidade_2, estado_2, pib_per_capita_2);

            resultado1 = pib_per_capita_1 > pib_per_capita_2 ? 1 : 0;
            if (pib_per_capita_1 == pib_per_capita_2){
                printf("Empate!\n");
            }else if (resultado1 == 1){
                printf("carta 1 venceu!\n");
            }else{
                printf("Carta 2 venceu!\n");
            }
            break;
        
        case 7: 
            printf("Atributo: Super Poder\n");
            
            resultado1 = super_poder_1 > super_poder_2 ? 1 : 0;
            if (super_poder_1 == super_poder_2){
                printf("Empate!\n");
            }else if (resultado1 == 1){
                printf("carta 1 venceu!\n");
            }else{
                printf("Carta 2 venceu!\n");
            }
            break;

        default:
        printf("Opção invalída!\n");
            break;
    }

    //Menu interativo (Atributo 2):
    printf("\n-------- COPARAÇÃO DE CARTAS (Atributo 2) --------\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos Turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super poder\n");
    printf("Escolha um dos atributos acima para comparação: ");
    scanf("%d", &atributo2);

    // Comparação do atributo 2:
    if (atributo1 == atributo2){
        printf("Você scolheu o mesmo atributo!\n");
    }else{
        switch (atributo2){
    
            case 1:
                printf("Atributo: População\n");
                printf("Carta 1 - %s (%s): %lu habitantes\n", cidade_1, estado_1, populacao_1);
                printf("Carta 2 - %s (%s): %lu habitantes\n", cidade_2, estado_2, populacao_2);
                
                resultado2 = populacao_1 > populacao_2 ? 1 : 0; 
                if (populacao_1 == populacao_2){
                    printf("Empate!\n");
                }else if (resultado2 == 1){
                    printf("carta 1 venceu!\n");
                }else{
                    printf("Carta 2 venceu!\n");
                }
                break;

            case 2:
                printf("Atributo: Área\n");
                printf("Carta 1 - %s (%s): %.2f Km²\n", cidade_1, estado_1, area_1);
                printf("Carta 2 - %s (%s): %.2f Km²\n", cidade_2, estado_2, area_2);
                
                resultado2 = area_1 > area_2 ? 1 : 0;
                if (area_1 == area_2){
                    printf("Empate!\n");
                }else if (resultado2 == 1){
                    printf("carta 1 venceu!\n");
                }else{
                    printf("Carta 2 venceu!\n");
                }
                break;

            case 3:
                printf("Atributo: PIB\n");
                printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", cidade_1, estado_1, pib_1);
                printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", cidade_2, estado_2, pib_2);
                
                resultado2 = pib_1 > pib_2 ? 1 : 0;
                if (pib_1 == pib_2){
                    printf("Empate!\n");
                }else if (resultado2 == 1){
                    printf("carta 1 venceu!\n");
                }else{
                    printf("Carta 2 venceu!\n");
                } 
                break;

            case 4:
                printf("Atributo: Número de pontos turísticos\n");
                printf("Carta 1 - %s (%s): %d pontos turísticos\n", cidade_1, estado_1, n_pontos_turisticos_1);
                printf("Carta 2 - %s (%s): %d pontos turísticos\n", cidade_2, estado_2, n_pontos_turisticos_2);
                
                resultado2 = n_pontos_turisticos_1 > n_pontos_turisticos_2 ? 1 : 0;
                if (n_pontos_turisticos_1 == n_pontos_turisticos_2){
                    printf("Empate!\n");
                }else if (resultado2 == 1){
                    printf("carta 1 venceu!\n");
                }else{
                    printf("Carta 2 venceu!\n");
                }
                break;

            case 5:
                printf("Atributo: Densidade populacional\n");
                printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade_1, estado_1, densidade_pop_1);
                printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade_2, estado_2, densidade_pop_2);
                
                resultado2 = densidade_pop_1 < densidade_pop_2 ? 1 : 0;
                if (densidade_pop_1 == densidade_pop_2){
                    printf("Empate!\n");
                }else if (resultado2 == 1){
                    printf("carta 1 venceu!\n");
                }else{
                    printf("Carta 2 venceu!\n");
                }
                break;

            case 6: 
                printf("Atributo: PIB per capita\n");
                printf("Carta 1 - %s (%s): %.2f R$ \n", cidade_1, estado_1, pib_per_capita_1);
                printf("Carta 2 - %s (%s): %.2f R$ \n", cidade_2, estado_2, pib_per_capita_2);

                resultado2 = pib_per_capita_1 > pib_per_capita_2 ? 1 : 0;
                if (pib_per_capita_1 == pib_per_capita_2){
                    printf("Empate!\n");
                }else if (resultado2 == 1){
                    printf("carta 1 venceu!\n");
                }else{
                    printf("Carta 2 venceu!\n");
                }
                break;
            
            case 7: 
                printf("Atributo: Super Poder\n");
                
                resultado2 = super_poder_1 > super_poder_2 ? 1 : 0;
                if (super_poder_1 == super_poder_2){
                    printf("Empate!\n");
                }else if (resultado2 == 1){
                    printf("carta 1 venceu!\n");
                }else{
                    printf("Carta 2 venceu!\n");
                }
                break;

            default:
            printf("Opção invalída!\n");
                break;
        
        }
    }

    //Exibição do resultado
    if (resultado1 != resultado2)
    {
        printf("Empate!\n");
    }else if (resultado1 + resultado2 == 0)
    {
        printf("Carta 2 (%s) venceu!\n", cidade_2);
    }else
    {
        printf("Carta 1 (%s) venceu\n", cidade_1);
    }
    
    

    return 0;
}
