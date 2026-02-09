/*4. Alterar o exercício anterior, mas agora, considere que o segundo valor lido poderá ser
maior ou menor que o primeiro valor lido.*/ //colocado das duas formas:if(nro1<nro2) ou (nro2<nro1)

#include <stdio.h>
int main(void) {
	
    int nro1,nro2;
    
	    printf("Informe o numero 1: ");
	    scanf("%d", &nro1);
	    
	    
	    printf("Informe o numero 2: ");
	    scanf("%d", &nro2);
	    
	    
	    if(nro1<nro2){
	    int cont = nro1; 
	    for(cont; cont<nro2; cont++){
    		if (cont % 2 ==1)
			{
    			printf("\nimpar: %d",cont);
			}
    	}
		}else{// Se nro1 não for menor que nro2
		int cont = nro2;
	    for(cont; cont<nro1; cont++)//intervalo de 10(nro1) a 20(nro2) os numeros impares são 11,13,15,17,19
    	{
    		if (cont % 2 ==1){{// Se o resto da divisão de cont por 2 for 1, cont é ímpar
    			printf("\nimpar: %d",cont);
		    }
        }
        
		}
}

}
	
	    
	    

