/*7) Escrever um programa para ler o salário mensal e o percentual de reajuste.
Calcular e escrever o valor do novo salário. */

#include<stdio.h>
int main(void)
{
	float salario,reajuste=0.05,novoSalario;
	
	printf("informe o salario mensal : ");
	scanf("%f", &salario);
	
	novoSalario=salario + (salario * reajuste);

	
	printf("o valor do novo salario eh: %.2f\n", novoSalario);
	
}

