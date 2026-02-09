/*1. Ler dois valores inteiros X e Z, sendo que Z é maior do que X. Escrever os valores de Z 
até X, isto é, os valores do intervalo em ordem decrescente.*/

#include <stdio.h>

int main(void) {
    int X, Z;
    int cont; 
    
    printf("Informe o valor de X: ");
    scanf("%d", &X);

    printf("Informe o valor de Z (maior que X): ");
    scanf("%d", &Z);
    
    printf("Os valores em ordem decrescente de %d ate %d sao:\n", Z, X);
    
    for (cont = Z; cont >= X; cont--) { 
        printf("%d\n", cont);
    }
  

}



