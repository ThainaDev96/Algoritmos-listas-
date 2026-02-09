/*3. Ler dois valores inteiros e escrever os inteiros ímpares entre os dois valores lidos.
Considere que o segundo valor lido será sempre maior que o primeiro valor lido.*/  //senão ele nao lê caso contrário
#include <stdio.h>

int main(void) {
	
    int nro1,nro2;

	    printf("Informe o numero 1: ");
	    scanf("%d", &nro1);
	    
	    
	    printf("Informe o numero 2: ");
	    scanf("%d", &nro2);
	    
	    
	    int cont = nro1;//inicia no nro1
	     // Loop que percorre os números entre nro1 e nro2
	    for(cont; cont<nro2; cont++) //intervalo de 10(nro1) a 20(nro2) os numeros impares são 11,13,15,17,19
    	{
    		if (cont % 2 ==1){// Se o resto da divisão de cont por 2 for 1, cont é ímpar
    			printf("\nimpar: %d",cont);
			}
    	}
}
