/*2)Escrever um programa para calcular o volume de uma lata de refrigerante, lembre-se que a fórmula
é:VOLUME= PI * R * R * ALTURA,  onde PI=3.14159 (numeros com virgula se substitui por ponto,programa reconhece a virgula como caracter) */

#include<stdio.h>
int main (void)
{
	
    double raio,altura,PI = 3.14159, volume;
    
    printf ("informe o valor do raio:");
	scanf("%lf" ,&raio);
	
	printf("informe o valor da altura:");
	scanf("%lf"  ,&altura);
	volume= PI*raio*raio*altura;
	printf("mostre o volume do regrigerante e:%lf" , volume);
}
