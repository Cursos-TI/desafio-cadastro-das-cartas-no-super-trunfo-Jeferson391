#include <stdio.h>

int main(){

char produtoA[30] = "ProdutoA";
char produtoB[30] = "ProdutoB";

unsigned int estoqueA = 1000;
unsigned int estoqueB = 2000;

float valorA = 10.50;
float valorB = 20.40;

unsigned int estoqueMinimoA = 500;
unsigned int estoqueMinimoB = 2500;

double valorTotalA;
double valorTotalB;

// Exibição das informações do produto

printf("Produto %s tem estoque %u e o valor unitario é R$%.2f \n", produtoA, estoqueA, valorA);
printf("Produto %s tem estoque %u e o valor unitario é R$%.2f \n", produtoB, estoqueB, valorB);

// Comparação com valor minimo de estoque

int resultadoA;
int resultadoB;

resultadoA = estoqueA > estoqueMinimoA;
resultadoB = estoqueB > estoqueMinimoB;

printf("O produto %s tem estoque minimo %d \n", produtoA, resultadoA);
printf("O produto %s tem estoque minimo %d \n", produtoB, resultadoB);

// Comparação total dos produtos

printf("Valor total de A (R$ %.2f) é maior que valor total de B (R$%.2f)? %d \n", 
    estoqueA * valorA, 
    estoqueB * valorB, 
    (estoqueA * valorA ) > (estoqueB * valorB));

return 0;
}