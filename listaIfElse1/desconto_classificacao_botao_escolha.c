/*10) Uma rede de lojas de departamento classifica seus clientes em 1, 2 e 3, de acordo com 
sua freqüência de compras e com isto recebe descontos. Ler o valor total da compra e 
classificação. Exibir o valor da compra, desconto e valor a ser pago. Sendo que clientes 
1 – 20% de desconto, clientes 2 – 15% de desconto e clientes 3 – 5%.*/

#include<stdio.h>
int main (void)
{
	float valor;
	char classificacao;
	
	printf("qual a sua classificacao ");
	scanf("%c", &classificacao);

	printf("informe o valor da compra ");
	scanf("%f", &valor);

	if(classificacao == '1'){ 				//Com o if pode se selecionar uma categoria ou classificação
		valor = valor - (valor * 0.2);
	}
	else if (classificacao == '2'){
		valor = valor - (valor * 0.15);
	} 
	else if (classificacao == '3'){
		valor = valor - (valor * 0.05);
	} 
	
	printf("valor final com desconto %f",valor);
	
}
	
