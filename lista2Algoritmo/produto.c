/*3) Faça um programa que leia 3 valores em variáveis distintas, armazene a soma das duas primeiras
em uma nova variável e o produto das duas últimas em outra, e mostre como resultado o produto das
duas novas variáveis. */

#include<stdio.h>
int main(void)
{
	int n1,n2,n3,soma,produto,resultado;
	
	printf("informe o valor numero 1: ");
	scanf("%d", &n1);
	
	printf("informe o valor numero 2: ");
	scanf("%d", &n2);
		
    printf("informe o valor numero 3: ");
	scanf("%d", &n3);
	
	soma=(n1+n2);
	
	printf("o valor da soma eh: %.2d\n", soma);
	
	produto=(n2*n3);
	
	printf("o valor do produto eh: %.2d\n",produto);
}

