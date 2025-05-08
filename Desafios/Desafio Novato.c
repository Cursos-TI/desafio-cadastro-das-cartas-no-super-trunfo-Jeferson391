#include <stdio.h>


int main(){

char Carta1;
char Estado1;
int Codigo1;
char NomedaCidade1;
int Populacao1;
float Area1;
float PIB1;
int NPontosTuristicos1;
    

char Carta2;
char Estado2;
int Codigo2;
char NomedaCidade2;
int Populacao2;
float Area2;
float PIB2;
int NPontosTuristicos2;

//-----------------------------------------------------------//+

printf("\n ---Cart 1--- \n");



printf("Digite o Estado \n");
scanf("%", &Estado1);

printf("Digite o codigo \n");
scanf("%d", &Codigo1);

printf("Digite o nome da cidade  \n");
scanf("%s", &NomedaCidade1);

printf("digite o numero populacional \n");
scanf("%d", &Populacao1);

printf("Digite a Area da cidade \n");
scanf("%c", &NomedaCidade1);

printf("Digite o PIB \n");
scanf("%f", &PIB1);

printf("Digite a quantidade de pontos turisticos \n");
scanf("%f", &NPontosTuristicos1);

//-----------------------------------------------------------//

printf("\n ---Cart 2--- \n");



printf("Digite o Estado \n");
scanf("%", &Estado2);

printf("Digite o codigo \n");
scanf("%d", &Codigo2);

printf("Digite o nome da cidade  \n");
scanf("%s", &NomedaCidade2);

printf("digite o numero populacional \n");
scanf("%d", &Populacao2);

printf("Digite a Area da cidade \n");
scanf("%c", &NomedaCidade2);

printf("Digite o PIB \n");
scanf("%f", &PIB2);

printf("Digite a quantidade de pontos turisticos \n");
scanf("%f", &NPontosTuristicos2);

return 0;
};