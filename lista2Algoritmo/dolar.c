/*4) Elaborar um programa que efetue a apresentação do valor da conversão em real de um
valor lido em dólar. O programa deve solicitar o valor de cotação do dólar e também a
quantidade de dólares disponível com o usuário, para que seja apresentado o valor em
reais. */

#include<stdio.h>
int main(void)
{
	float quantDolar,valorCotacao,real;
	
	printf("informe a quantidade de dolares que voce tem : ");
	scanf("%f", &quantDolar);
	
	printf("informe o valor da cotacao : ");
	scanf("%f", &valorCotacao);
		
	real= (quantDolar*valorCotacao);
	
	printf("o valor convertido para reais eh: %.2f\n", real);
	
}

