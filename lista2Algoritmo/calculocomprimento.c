/*1) Faça um programa que receba o raio, calcule e mostre o comprimento de uma esfera, sabe-se
que C=2*PI*R. */


#include<stdio.h>
int main(void)
{
    double raio,comprimento,pi=3.14;
	
	printf("informe o valor do raio");
	scanf("%lf", &raio);
	
	comprimento=2*pi*raio;
	
	printf("o valor do comprimento eh:%.2lf\n" ,comprimento);	
}
