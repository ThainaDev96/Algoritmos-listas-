/*6) O preço de um automóvel é calculado pela soma do preço de fábrica com o preço dos impostos
(45% do preço de fábrica) e a percentagem do revendedor (28% do preço de fábrica ) 
Faça um programa que leia o preço de fábrica e imprima o seu preço final.*/

#include<stdio.h>
int main(void)
{
    float fabrica, imposto, comissao, soma;
    
    printf("Informe o preco de fabrica: ");
    scanf("%f", &fabrica);
    
   imposto=(fabrica*45)/100;//o programa não lê porcentagem então deve-se dividir por 100 para obter em forma decimal. 45% = 0.45 fabrica * (45/100);
   
   comissao=(fabrica*28)/100;//28% = 0.28 . pode ser escrito tambem: fabrica * (28/100);
    
    soma = fabrica + imposto + comissao;//soma após multiplicação
    
    printf("O preco final é: %f\n", soma);
    
}

