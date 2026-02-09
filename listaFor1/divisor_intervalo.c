/*2. Escrever um programa que calcule todos os números divisores por certo valor indicado
pelo usuário (o resto da divisão por este número deve ser igual a zero), compreendidos em
um intervalo também especificado pelo usuário. O usuário deve entrar com um primeiro
valor correspondente ao divisor e após ele vai fornecer o valor inicial do intervalo, seguido
do valor final deste intervalo. Exemplo de tela de saída:
Entre com o valor do divisor: 3
Inicio do intervalo: 17
Fim do intervalo: 29
Números divisiveis por 3 no intervalo de 17 a 29 :
18 21 24 27*/
#include <stdio.h>

int main(void) {
	
    int inicio,fim,divisor,divisivel;
    int cont = inicio;   
    	
		printf("Informe o numero divisor: ");//(numero 3)
	    scanf("%d", &divisor);
	    
	    
	    printf("Informe o inicio do intervalo: ");
	    scanf("%d", &inicio);
	    
	    printf("Informe o final do intervalo: ");
	    scanf("%d", &fim);
	    
	    
	    for(cont=inicio; cont<=fim; cont++)//começa com o valor de inicio e continua até fim, incluindo ambos.
    	{
    		if(cont%divisor==0){  //verifica se cont(todos os numeros)são divisíveis por divisor(3)
    			printf("\nNúmeros divisiveis no intervalo: %d",cont);
			}
    	}
	    
	    

	    
}
