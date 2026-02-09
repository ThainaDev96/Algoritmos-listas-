/*8) Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo vendida respectivamente
por 10,15,18 reais. Construa um programa em que o usuário forneça a quantidade de camisetas pequenas, médias e 
grandes vendidas. Informe o valor a ser cobrado.*/

#include<stdio.h>

int main(void)
{
    int valorP, valorM, valorG, vendaP, vendaM, vendaG, valorCobrado;
    
    printf("Informe o valor da camiseta tamanho P: ");
    scanf("%d", &valorP);
    
    printf("Informe o valor da camiseta tamanho M: ");
    scanf("%d", &valorM);
    
    printf("Informe o valor da camiseta tamanho G: ");
    scanf("%d", &valorG);
    
    printf("Informe a quantidade de camisetas vendidas tamanho P: ");
    scanf("%d", &vendaP);
    
    printf("Informe a quantidade de camisetas vendidas tamanho M: ");
    scanf("%d", &vendaM);
    
    printf("Informe a quantidade de camisetas vendidas tamanho G: ");
    scanf("%d", &vendaG);
    
    valorCobrado = (valorP * vendaP) + (valorM * vendaM ) + (valorG * vendaG);
    
    printf("O valor que será cobrado é: %d\n", valorCobrado);
    
}


