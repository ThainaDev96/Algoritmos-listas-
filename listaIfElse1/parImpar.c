/*2)Elaborar um programa que efetue a leitura de um número inteiro e 
apresente uma mensagem informando se o número é par ou ímpar.*/

#include <stdio.h>
int main(void) {
    int numero;

    printf("Informe o numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) //é uma maneira simples de verificar se o numero é par pois, na matematica, se o resto da divisao (por 2) for zero então, o numero é par
    {
    	printf("O numero eh par: %d\n", numero);
    } 
    
    else {

    	printf("O numero eh impar: %d\n", numero);
    }

    
}

