#include <stdio.h>

int main() {

int nota1, nota2, nota3;
float media;

printf("\n --------Programa de Calculo de Média-------- \n");

printf("Digite a primeira nota \n");
scanf("%d", &nota1);

printf("Digite a primeira nota \n");
scanf("%d", &nota2);

printf("Digite a primeira nota \n");
scanf("%d", &nota3);

media = (float)(nota1 + nota2 + nota3) / 3;

printf("A media das notas e: %.1f \n", media);

return 0;
}