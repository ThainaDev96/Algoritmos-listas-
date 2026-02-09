/*14) Dados três valores lado1, lado2, lado3, verificar se eles podem ser os comprimentos dos
lados de um triângulo e, se for verificar se é triângulo eqüilátero, isóscele ou escaleno.
Se não formarem triângulo, escrever uma mensagem.
Lembretes:
• Triângulo é uma forma geométrica composta por três lados, onde cada lado é menor
que a soma dos outros dois lados.
• Triângulo eqüilátero todos os lados são iguais.
• Triângulo isóscele dois lados iguais e um diferente.
• Triângulo escaleno todos os lados diferentes.*/

#include <stdio.h>
int main(void)
{
	float L1, L2, L3;
	
	printf("qual o valor do lado1?");
	scanf("%f", &L1);
	printf("qualo valor do lado2?");
	scanf("%f", &L2);
	printf("Qual o valor do L3?");
	scanf("%f", &L3);
	
	if(L1==L2 && L1==L3)
	{
		printf("o triangulo eh equilatero");
		
	} else if(L1==L2 &&  L2 !=L3 ) {
		printf("o triangulo eh isoceles");
		
	} else if(L1 !=L2 && L2 != L3) {
		printf("o triangulo eh escaleno");
		
	} else {
		printf("Input Invalido");
	}
	
}
