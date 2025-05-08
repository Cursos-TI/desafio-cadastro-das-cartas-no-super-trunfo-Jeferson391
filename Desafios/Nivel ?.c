#include <stdio.h>

int main() {

int Menu;

    char nome[10];
    int populacao;
    int NpontosTuristicos;
    float pib;

    char nome2[10];
    int populacao2;
    int NpontosTuristicos2;
    float pib2;



            printf("Digite o nome da cidade");
            scanf("%s", &nome);

            printf("Digite o numero populacional");
            scanf("%d", &populacao);

            printf("quantidade de pontos turisticos");
            scanf("%d", &NpontosTuristicos);

            printf("digite o PIB");
            scanf("%f", &pib);
            
    printf("----carta 2----");
            
            printf("Digite o nome da cidade");
            scanf("%s", &nome2);

            printf("Digite o numero populacional");
            scanf("%d", &populacao2);

            printf("quantidade de pontos turisticos");
            scanf("%d", &NpontosTuristicos2);

            printf("digite o PIB");
            scanf("%f", &pib2);
    

    printf("Informacoes da carta1");

        printf("Nome da cidade: %s\n", nome);
        printf("Populacao: %d\n", populacao);
        printf("NpontosTuristicos: %d\n", NpontosTuristicos);
        printf("pib: %.2f\n", pib);

    printf("Informacoes da carta2");

        printf("Nome da cidade: %s\n", nome2);
        printf("Populacao: %d\n", populacao2);
        printf("NpontosTuristicos: %d\n", NpontosTuristicos2);
        printf("pib: %.2f\n", pib2);

printf("----------Escolha uma opção----------");
printf("\n 1. Calcular População \n");
printf("\n 2. Calcular NpontosTuristicos \n");
printf("\n 3. Calcular PIB \n");
scanf("%d", &Menu);

switch (Menu){
case 1:

if (populacao > populacao2) {
    printf("população1 é maior que população2");
        } else {
            printf("população2 é maior que população1");
        }

    break;

case 2:

if (NpontosTuristicos > NpontosTuristicos2) {
    printf("NpontosTuristicos1 é maior que NpontosTuristicos2");
        } else {
            printf("NpontosTuristicos2 é maior que NpontosTuristicos1");
        }

    break;

    case 3:

    if (pib > pib2) {
        printf("PIB1 é maior que PIB2");
            } else {
                printf("PIB2 é maior que PIB1");
            }
    
    break;

default:

printf("Null");

    break;
}

    return 0;
}