#include<stdio.h>
int main(void)
{
    int salarioBruto,descontoInss,descontoIr,salarioLiquido;
	
	printf("informe o salario bruto:");
	scanf("%d", &salarioBruto);
	
	printf("informe o desconto do inss");
	scanf("%d", &descontoInss);
	
	printf("informe o desconto do imposto de renda");
	scanf("%d", &descontoIr);
	
	salarioLiquido=salarioBruto-descontoInss-descontoIr;
	
	printf("o salario liquido eh:%d",salarioLiquido);
}
