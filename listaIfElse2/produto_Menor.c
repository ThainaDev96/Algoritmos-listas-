/*4)Escreva um programa para ler 3 valores e escrever o produto dos 2 menores. Considere
que o usuário não informará valores iguais. */

#include <stdio.h>
int main(void)
{
	int nro1,nro2,nro3,produto;
	
	printf("informe o numero 1");
	scanf("%d", &nro1);
	
	printf("informe o numero 2");
	scanf("%d", &nro2);
	
	printf("informe o numero 3");
	scanf("%d", &nro3);
	
	
	 if(nro1>nro2 && nro1>nro3)			//Novamente com o if consegue comprar os números para ver quem é o menor entre eles
    {									//Se o numero um for maior que o dois e o tres, entao os dois menores é o 2 e o 3,assim calcule o produto deles 
    	produto = (nro2 * nro3);
    	printf("o resultado da multiplicacao eh: %d",produto);
    	
	}
	else if (nro2>nro1 &&nro2>nro3){
		produto = (nro3 * nro1);
	    printf("o resultado da multiplicacao eh: %d",produto);
		
	}
	else{
		produto = (nro1 * nro2);
	}
}
