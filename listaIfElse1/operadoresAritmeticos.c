/* 5)Leia dois números e calcule a soma e o produto entre eles, e a subtração e a divisão
do primeiro valor com o segundo. Escreva o resultado na tela. Neste exercício, no segundo
número poderá ser digitado o valor zero. Além disto, somente deve ser calculado o resultado
da subtração quando ele não for negativo. */

#include <stdio.h>
int main(void)
{
    float nro1, nro2, soma, produto, subtracao, divisao;

    printf("Informe o numero 1: ");
    scanf("%f", &nro1);
    
    printf("Informe o numero 2: ");
    scanf("%f", &nro2);
    
    soma = (nro1 + nro2);
    printf("O resultado da soma eh: %f\n", soma);
    
    produto = (nro1 * nro2);
    printf("O resultado da multiplicacao eh: %f\n", produto);
    
    divisao = (nro1 / nro2);
    printf("O resultado da divisao eh: %f\n", divisao);
    
    subtracao=(nro1-nro2); //somente....ou seja nossa condição está aqui

    if (subtracao >0)   //a subtração for maior que zero , é feito o calculo 
    {
    
        printf("O resultado da subtracao eh: %f\n", subtracao);
    }
    else
    {
        printf("A subtracao nao pode ser calculada.\n");
    }

   
}

   
