/*5) Escrever um programa que solicite dois números e o tipo de operação a ser efetuada
entre eles. Sendo que as operações permitidas são: soma, subtração, divisão e
multiplicação. Apresentar o resultado das operações conforme a opção escolhida. */

#include <stdio.h>
int main(void)
{
	int nro1, nro2;
	int operacao;
	float resultado;
	
	printf("Digite o numero 1");
	scanf("%d", &nro1);
	printf("Digite o numero 2");
	scanf("%d", &nro2);
	printf("escolha a operacao: 1 = + 2 = - 3 = * 4 = /");
	scanf("%d", &operacao);
	
	if(operacao==1)
	{
		resultado = (nro1 + nro2);
		printf("seu resultado eh %.2f", resultado);
	}
	if(operacao==2)
	{
		resultado = (nro1 - nro2);
		printf("seu resultado eh %.2f", resultado);	
	}
	if(operacao==3)
	{
		resultado = (nro1 * nro2);
		printf("seu resultado eh %.2f", resultado);
	
	}
	if(operacao==4)
	{
		resultado = (nro1/nro2);
		printf("seu resultado eh %x2f", resultado);
	}
	
}
