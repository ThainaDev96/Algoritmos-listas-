/*8. Faça um algoritmo para ler a cor de um sinal de trânsito (“V” é verde, “A” é amarelo e
“E” é vermelho), e exibir respectivamente as mensagens “Siga”, “Atenção” ou “Pare”.
Caso o usuário informe uma letra inválida, informar o usuário.*/

#include<stdio.h>
int main (void)
{	


    char cor;

    printf("Digite a cor V para verde, A para amarelo, E para vermelho):");
    scanf(" %c", &cor); 

    if(cor == 'V'||cor == 'v' ) {
    	
        printf("Siga!!!");
        
    } 
	else if(cor == 'A'|| cor == 'a' ) {
		
        printf("Atenção!!!");
        
    } 
	else if(cor == 'E' || cor == 'e' ) {
		
        printf("Pare!!");
        
    } 
	else {
        printf("Cor inválida!");
    }


}
