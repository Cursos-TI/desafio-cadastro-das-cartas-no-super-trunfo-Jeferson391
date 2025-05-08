#include <stdio.h>

int main(){

char Carta1[10];
char Estado1[10];
char Codigo1[10];
char NomedaCidade1[10];
int Populacao1;
float Area1;
float PIB1;
int NPontosTuristicos1;
float DensidadePopulacional1;
float PIBperCapita1;
    

char Carta2[10];
char Estado2[10];
char Codigo2[10];
char NomedaCidade2[10];
int Populacao2;
float Area2;
float PIB2;
int NPontosTuristicos2;
float DensidadePopulaciona2;
float PIBperCapita2;

//-----------------------------------------------------------//+

printf("\n ---Cart 1--- \n");

printf("Digite o Estado \n");
scanf("%10s", &Estado1[10]);

printf("Digite o codigo de 1 letra e 2 numeros \n");
scanf("%10s", &Codigo1[10]);

printf("Digite o nome da cidade  \n");
scanf("%10s", &NomedaCidade1[10]);

printf("digite o numero populacional \n");
scanf("%d", &Populacao1);

printf("Digite a Area da cidade \n");
scanf("%f", &Area1);

printf("Digite o PIB \n");
scanf("%f", &PIB1);

printf("Digite a quantidade de pontos turisticos \n");
scanf("%f", &NPontosTuristicos1);

//-----------------------------------------------------------//

printf("\n ---Cart 2--- \n");



printf("Digite o Estado \n");
scanf("%10s", &Estado2[10]);

printf("Digite o codigo de 1 letra e 2 numeros \n");
scanf("%10s", &Codigo2[10]);

printf("Digite o nome da cidade  \n");
scanf("%10s", &NomedaCidade2[10]);

printf("digite o numero populacional \n");
scanf("%d", &Populacao2);

printf("Digite a Area da cidade \n");
scanf("%f", &Area2);

printf("Digite o PIB \n");
scanf("%f", &PIB2);

printf("Digite a quantidade de pontos turisticos \n");
scanf("%f", &NPontosTuristicos2);


            printf("\n --------Carta 1--------- \n");


printf("\n Estado: %s - Codigo: %s \n", Estado1, Codigo1);

printf("\n Nome: %s - Populacao %d \n", NomedaCidade1, Populacao1);

printf("\n Area: %.2f - PIB: %.2f \n", Area1, PIB1);

printf("\n Numero de pontos turisticos: %d", NPontosTuristicos1);

PIBperCapita1 =  (PIB1 / Populacao1);
DensidadePopulacional1 = (Populacao1 / Area1);

printf("\n PIB per Capita: %.2f Densidade: %.2f \n", PIBperCapita1, DensidadePopulacional1);



            printf("\n --------Carta 2--------- \n");


printf("\n Estado: %s - Codigo: %s \n", Estado2, Codigo2);

printf("\n Nome: %s - Populacao %d \n", NomedaCidade2, Populacao2);

printf("\n Area: %.2f - PIB: %.2f \n", Area2, PIB2);

printf("\n Numero de pontos turisticos: %d", NPontosTuristicos2);

PIBperCapita2 =  (PIB2 / Populacao2);
DensidadePopulaciona2 = (Populacao2 / Area2);

printf("\n PIB per Capita: %.2f Densidade: %.2f \n", PIBperCapita2, DensidadePopulaciona2);

return 0;
}

//Use esse exemplo se preferir

// Carta 1:
// Estado: A
// Código: A01
// Nome da Cidade: São Paulo
// População: 12325000
// Área: 1521.11 km²
// PIB: 699.28 bilhões de reais
// Número de Pontos Turísticos: 50
// Densidade Populacional: 8102.47 hab/km²
// PIB per Capita: 56724.32 reais

// Carta 2:
// Estado: B
// Código: B02
// Nome da Cidade: Rio de Janeiro
// População: 6748000
// Área: 1200.25 km²
// PIB: 300.50 bilhões de reais
// Número de Pontos Turísticos: 30
// Densidade Populacional: 5622.24 hab/km²
// PIB per Capita: 44532.91 reais