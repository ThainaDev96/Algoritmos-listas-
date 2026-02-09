/*1. Escrever um programa para ler 10 números. Todos os números lidos com valores
inferiores a 40 devem ser somados. Ao término da entrada de dados, escreva o valor final
da soma*/

#include<stdio.h>
int main (void)
{
	int nro,cont=0,soma=0; // variável usada para acumular a soma dos números que são menores que 40
	
	for (cont =0; cont <10; cont++) {     //Aqui foi escolhido comando de repetição for pois nos dá um numero exato para entrada de dados
        printf("Informe os numeros: ");
        scanf("%d",&nro);
        
		if (nro < 40) {
			soma = (soma + nro);	
			 // Se nro for menor que 40, atualiza a variável soma somando o valor de nro a ela
			//Se nro é 35. Como 35 é menor que 40, soma é atualizado para 35.Se nro é 25. Como 25 é menor que 40, soma é atualizado para 60 (35 + 25).	
		}
	}
	printf("o valor final da soma eh:%d",soma);	//imprime fora do for 
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

