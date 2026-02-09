/*4) Escreva um programa para ler a quantidade de cavalos de uma fazenda e escreva
quantas ferraduras são necessárias para equipar todos os cavalos da fazenda*/


#include<stdio.h>
int main (void)
{
	int cavalos,ferraduras;
    printf ("quantos cavalos voce tem:");
	scanf("%d" ,cavalos);
	
	ferraduras=cavalos * 4;//são necessario 4 ferraduras para equipar um cavalo considerando que o animal possui 4 patas.
	printf("vai precisar de :%d" , ferraduras);
}
