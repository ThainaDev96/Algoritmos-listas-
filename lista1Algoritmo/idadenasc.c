/*3)Escrever um programa que leia o ano de nascimento de uma pessoa. Escrever a sua idade. 
Considere para o cálculo o ano atual*/


#include<stdio.h>
int main (void)
{
	int anonasc,idade,ano=2024;
    printf ("informe o ano de nascimento:");
	scanf("%d", &anonasc);
	
	idade=ano-anonasc;
	printf("mostre a idade:%d" , idade);
}
