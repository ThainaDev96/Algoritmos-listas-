/*10) Uma loja que vende bicicletas paga para cada vendedor 2 salários mínimos mensais, mais
uma comissão de 15% sobre o preço de custo de cada bicicleta vendida, dividida igualmente 
entre eles. Escreva um programa que leia o número de empregados da loja, o valor do salário
mínimo, o preço de custo de cada bicicleta, o número de bicicletas vendidas. Calcule e 
escreva o salário total de cada empregado. */

#include<stdio.h>
int main(void)
{
	float salarioMinimo,comissao=0.15,nVendas,salarioTotal;
	
	printf("informe o valor do salario minimo :");
	scanf("%f", &salarioMinimo);
	
	printf("informe o numero de bicicletas vendidas: ");
	scanf("%f", &nVendas);
	

	salarioTotal=salarioMinimo + (comissao*nVendas);

	
	printf("o valor do novo salario total eh: %.2f\n", salarioTotal);
	
}

