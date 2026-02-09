/* 6) As laranjas custam R$ 0.50 cada se forem compradas MENOS do que uma dúzia,
 e R$ 0.35 se forem compradas pelo menos 12. Escreva um programa que leia o número 
 de laranjas compradas, calcule e escreva o valor total da compra.*/

#include <stdio.h>
int main(void) {
    int quantLaranjas;
    float valorCompra, preco;

    printf("Informe a quantidade de laranjas que irao ser compradas: ");
    scanf("%d", &quantLaranjas);
    
   
    if (quantLaranjas < 12) {   //Se forem..... Se a quantidade de laranjas for menor que 12 o preço é 50 centavos
        preco = 0.50; 
    }
	
    else {
    
        preco = 0.35; 
    }
    
    valorCompra = (quantLaranjas * preco);

    printf("O preco por unidade eh: %.2f\n", preco);
    printf("O valor total da compra eh: %.2f\n", valorCompra);

}



