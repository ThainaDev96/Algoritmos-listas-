/*5)Efetuar o cálculo da quantidade de litros de combustível gastas em uma viagem, utilizando-se um automóvel que faz 12 km 
por litro. Para obter o cálculo, o usuário deverá fornecer o tempo gasto na viagem e a velocidade média durante a mesma
Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA=TEMPO*VELOCIDADE. Tendo o valor da
distancia, basta calcular a quantidade de litros de combustível utilizada na viagem com a fórmula:LITROS=DISTANCIA/12
O programa deverá apresentar os valores de velocidade média, tempo gasto na viagem, à distancia percorrida e a quantidade
de litros utilizada na viagem .*/

#include<stdio.h>
int main (void)
{
	float velocidade,distancia,litros;
	int tempo;
	
	printf("informe a velocidade:");
	scanf("%f",&velocidade);
	
	printf("informe o tempo:");
	scanf("%f",&tempo);
	
	distancia=velocidade*tempo;
	
	printf("a distancia eh:%f",distancia);
	
	litros=distancia/12;
	
	printf("quantidade de litros eh:%f",litros);
	
}
