/*4. (Questão de P1) Ler 2 números inteiros A e B. Calcular e imprimir:
• a soma de todos os números pares menores que A
• a soma de todos os ímpares existentes entre A e B, incluindo A e B.
Suponha que eles sejam positivos e que B é maior que A.*/

#include<stdio.h>
int main(void) {
    int A, B;
    int soma_pares = 0;
    int soma_impares = 0;
    int cont;

    printf("Informe o valor de A: ");
    scanf("%d", &A);

    printf("Informe o valor de B (maior que A): ");
    scanf("%d", &B);

    if (B <= A) {
        printf("B deve ser maior que A.\n");
    
    }

    
    for (int cont = 1; cont < A ; cont++) {
        if (cont % 2 == 0) { 
            soma_pares ++;
        }
    }


    for (int cont = A; cont <= B; cont++) {
        if (cont % 2 != 0) { 
            soma_impares ++;
        }
    }

    printf("A soma de todos os numeros pares menores que A eh: %d\n", soma_pares);
    printf("A soma de todos os numeros impares entre A e B eh: %d\n", soma_impares);


}

	
	
	
	
	
	
}
