/*12)Escreva um programa que recebe um valor como entrada e exibe o seu quadrado
quando o número for par, e o seu cubo quando ele é ímpar.*/

#include <stdio.h>
int main(void) {
    int numero;

    printf("Informe o numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
    	numero = numero * numero;
    	printf("O quadrado do numero par eh: %d\n", numero);
    } 
    
    else {
		numero = numero * numero * numero;
    	printf("O cubo do numero impar eh: %d\n", numero);
	}
}

