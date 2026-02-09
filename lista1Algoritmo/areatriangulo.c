/*1)Elaborar um programa que leia a altura um triangulo e apresente a área deste triangulo,
 lembre-se que a fórmula é AREA=(BASE*ALTURA)/2 */

#include<stdio.h>
int main (void)
{
	
    float altura;//float:trabalha com numeros com virgula 
    float base;
    float resultado;//resultado pode ser com virgula
    printf ("informe o valor da base:");
	scanf("%f" ,&base);
	
	printf("informe o valor da altura:");//entrada de dados 
	scanf("%f"  ,&altura);//possibilita que o usuario digite
	resultado= base*altura/2;//formula 
	printf("mostre o valor da area e:%f" , resultado);//imprime o resultado na tela(saida de dados)
}
