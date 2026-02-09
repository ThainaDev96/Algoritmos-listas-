/*9) Um trabalhador comprou um fogão em 3 prestações. A taxa mensal de juros é de 2%.
Fazer um programa que leia o valor à vista e mostre na tela as 3 prestações no 
seguinte formato modelo: 
***************Preço à vista: R$ 9999,99 
************** Preço à prazo: R$ 9999,99 
************* Prestação 1: R$ 999,99
************** Prestação 2: R$ 999,99 
********** Prestação 3: R$ 999,99 
************* */

#include<stdio.h>
int main(void)
{
	float aVista,aPrazo,juros=0.02,prest1,prest2,prest3;
	
	printf("informe o valor à vista:");
	scanf("%f", &aVista);
	
	prest1=(aVista+(aVista*juros))/3;//aqui eu sei que primeiro é a multiplicação por que tem dois parenteses, sendo que um a mais que separa a divisao
	prest2=(aVista+(aVista*juros))/3;//nessa formula a gente multiplica o valor a vista pelo juros,depois soma esse resultado que é o acrescimo, no valor total a vista
	prest3=(aVista+(aVista*juros))/3;//não esquencendo de dividir pelo numero total de prestacoes 
	
	aPrazo=prest1+prest2+prest3;//somando tudo , esta o valor total acrescido do juros e dividido em prestacoes dá o valor toal ao longo prazo 
	
	printf("mostre o valor à vista: %.2f\n",aVista);
	printf("mostre o valor à prazo: %.2f\n",aPrazo);
	printf("mostre o valor da primeira parcela: %.2f\n",prest1);
	printf("mostre o valor da segunda parcela: %.2f\n",prest2);
	printf("mostre o valor da terceira parcela: %.2f\n",prest3);
	
}
	
	
	
