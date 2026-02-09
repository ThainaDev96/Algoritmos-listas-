/*13) Escrever um programa que leia o salário fixo e o valor das vendas efetuadas pelo
vendedor de uma empresa. Sabendo-se que ele recebe uma comissão de 3% sobre o
total das vendas até R$1500,00 mais 5% sobre o que ultrapassar este valor, calcular e
escrever o seu salário total. */

#include <stdio.h>
int main(void) {

	float Sfixo, comissao, comissao2, Tvendas,Stotal;
	
	printf("Informe o salario fixo ");
	scanf("%f", & Sfixo);
	printf("Quanto você vendeu este mes?");
	scanf("%f", &Tvendas);
	
	if(Tvendas<=1500)
	{
		comissao = 0.03;
		Stotal = Sfixo +(Tvendas*comissao);
		printf("o salario total eh %.2f", Stotal);
		
	} else if (Tvendas>1500)
	{
		comissao = 0.05;
		Stotal=Sfixo+(Tvendas*comissao);
		printf("o salario total eh %.2f", Stotal);
		
	}
	
	
}
