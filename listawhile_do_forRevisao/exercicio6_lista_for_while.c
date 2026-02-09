/*6.Ler 2 números inteiros A e B. Calcular e imprimir a soma de todos os ímpares 
existentes entre A e B, excluindo A e B*/

#include <stdio.h>

int main(void) {
    int A, B;
    int soma_impares = 0;
    int cont = 0;

    printf("Informe o valor de A: ");
    scanf("%d", &A);

    printf("Informe o valor de B: ");
    scanf("%d", &B);

    for (cont = A + 1; cont < B; cont ++) {//A +1 é por que exclui A e inicia um numero depois dele, menor que B exclui ele tambem
    	 if (cont % 2 != 0) {
        soma_impares += cont;
    }

    printf("A soma dos ímpares entre A e B, excluindo A e B, :eh %d\n", soma_impares);

    return 0;
	}
}
