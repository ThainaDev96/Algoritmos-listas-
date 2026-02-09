/*8)Escreva um programa para ler 3 valores e escrever a SOMA dos dois maiores.
Considere que o usuário não informará valores iguais*/

#include <stdio.h>
int main(void) {
    int nro1,nro2,nro3,soma;
  

    printf("Informe o numero: ");
    scanf("%d", &nro1);
    
 
    printf("Informe o numero: ");
    scanf("%d", &nro2);
    
  
    printf("Informe o numero: ");
    scanf("%d", &nro3);
    
    if(nro1 <nro2 && nro1 <nro3)    //Se o numero 1 for menor que o dois e o tres, descartamos a possibilidade dele ser o maior  		
    {							  //Faremos a soma do 2 e o 3 que serão os maiores 
    	soma = (nro2 + nro3);
    	printf("o resultado da soma eh:%d",&soma);
    	
	}
	else if (nro2 <nro1 &&nro2 <nro3){
		soma = (nro3 + nro1);
	    printf("o resultado da soma eh:%d",&soma);
		
	}
	else{
		soma = (nro1 + nro2);
	}
	
		
    
}
  






