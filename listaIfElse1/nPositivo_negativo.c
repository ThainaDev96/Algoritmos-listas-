/*3)Escreva um programa para ler um valor e escrever se é positivo ou negativo. Considere o zero 
como neutro, ou seja, se for digitado o valor zero, escrever a palavra zero. */

#include <stdio.h>
int main(void) {
    int valor;

    printf("Informe um valor inteiro: ");
    scanf("%d", &valor);

    if	(valor > 0)  //Se o valor for maior que zero então logicamente ele é um número positivo  
	{
    	printf("O valor eh POSITIVO: %d\n", valor);
    } 
	else if	(valor < 0)   // Se o valor for menor que zero então logicamente ele é negativo
	{
        printf("O valor eh NEGATIVO: %d\n", valor);
    }
	else
	{
        printf("O valor eh ZERO: %d\n", valor);
    }

}



