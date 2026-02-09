/*6) Altere o exercício anterior para solicitar também o divisor. */

#include <stdio.h>
int main (void)
{

    int numero1,numero2,resultado,restoDivisao;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero1);
    
     printf("Digite o numero divisor: ");
    scanf("%d", &numero2);
    
    
    
    resultado = (numero1/numero2);
    printf("o resultado da sua divisao eh: %.1d\n", resultado);
    
    restoDivisao=(numero1%numero2);
    
    printf("o resto da divisao eh:%.2d\n ", restoDivisao);
}
