/*1)Leia dois valores númericos e escreva o menor valor.*/

#include <stdio.h>
int main(void) {
    int valor1, valor2;

    printf("Informe o valor 1: ");
    scanf("%d", &valor1);

    printf("Informe o valor 2: ");
    scanf("%d", &valor2);

    if (valor1 < valor2) {     //Se o numero 1 for menor que o numero 2 significa que o numero 1 então, é o menor
        printf("O menor valor eh: %d\n", valor1);
    } else if (valor2 < valor1) {   //Se o valor 2 for menor que o valor 1 significa então, que o numero 2 é o menor 
        printf("O menor valor eh: %d\n", valor2);
    }

    
}


