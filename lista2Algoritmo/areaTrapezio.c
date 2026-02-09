/*2)Faça um programa que calcule e mostre a área de um trapézio, Onde 
trapézio = ((baseMaior + baseMenor )*altura) /2 . */

#include<stdio.h>
int main(void)
{

    float baseMaior,baseMenor,altura,areaTrapezio;
	
	printf("informe o valor da base maior");
	scanf("%f", &baseMaior);
	
	printf("informe o valor da base menor");
	scanf("%f", &baseMenor);
	
	printf("informe o valor da altura");
	scanf("%f", &altura);
	
	areaTrapezio=((baseMaior+baseMenor)*altura)/2;//para efetuar o calculo na ordem que queremos acrescente parenteses 
	//não dá para por um parenteses só separando dos demais, como são 3 calculos diferentes fica dessa forma para fazer soma primeiro depois multiplica e divide
	//ao inves de ()..; por serem 3 fica ((...)....)...;
	printf("A area do trapezio eh:%.2f\n", areaTrapezio);
	
}
