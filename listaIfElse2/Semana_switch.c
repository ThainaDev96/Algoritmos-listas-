/*3)Escrever um programa que solicita um número inteiro de 1 a 7 e devolva o dia da
semana correspondente*/

#include<stdio.h>
int main (void)
{
	int valor;
	printf("Digite um valor de 1 a 7");
	scanf("%d", &valor);
	
	switch (valor)
	{
		
		case 1:
			printf("segunda feira\n");
		break;
		
		case 2:
			printf("terca feira\n");
		break;
		
		case 3:
			printf("quarta feira\n");
		break;
		
		case 4:
			printf("quinta feira\n");
		break;
		
		case 5:
			printf("sexta feira\n");
		break;
			
		case 6:
			printf("sabado\n");
		break;
			
		case 7:
			printf("domingo\n");
		break;	
	}
	
}
