/*7)Uma empresa tem para um determinado funcionário uma ficha contendo o número de horas trabalhadas e o numero de dependentes
Considerando que: A)A empresa paga 12 reais por hora e 40 reais por dependentes, isto é o salário bruto. B)Sobre o salário
bruto são feitos descontos de 8,5% para o INSS e 5% para IR. Faça um programa para ler o número de horas trabalhadas e o
número de dependentes de um funcionário. Após a leitura, escreva qual o salário bruto, os valores descontados para cada 
tipo de imposto e finalmente qual o salário líquido do funcionário. */

#include<stdio.h>
int main(void)
{
	int horaTr,valorH,valorDependente,nDependentes;
	float salarioBruto,descontoInss,descontoIr,salarioLiquido;
	
	printf("informe as horas trabalhadas:");
	scanf("%d", &horaTr);
	
	printf("informe o valor a hora:");
	scanf("%d", &valorH);
	
	printf("informe o valor por dependente:");
	scanf("%d", &valorDependente);
	
	printf("informe o numero de dependentes:");
	scanf("%d", &nDependentes);
	
	salarioBruto=(horaTr*valorH) + (valorDependente*nDependentes);
	
	printf("o salario bruto eh:%f",salarioBruto);
	
	printf("informe o salario bruto:");
	scanf("%f", &salarioBruto);
	
	printf("informe o desconto do inss");
	scanf("%f", &descontoInss);
	
	printf("informe o desconto do imposto de renda");
	scanf("%f", &descontoIr);
	
	salarioLiquido = salarioBruto-descontoInss-descontoIr;
	
	printf("o salario liquido eh:%f",salarioLiquido);
}
	
	
