/*11) Faça um programa que tendo como dados de entrada a altura e o sexo de uma pessoa (1
– masculino e 2 - feminino). Calcule o peso ideal, utilizando as seguintes fórmulas:
• 1: para homens: (72,7*h) – 58
• 2: para mulheres: (62,1*h) – 44,7*/

#include<stdio.h>
int main (void)
{
	float altura,pesoIdeal;
	int sexo;

    printf("digite sua altura");
	scanf("%f", &altura);

	printf("digite o sexo ");
	scanf("%d", &sexo);
	
	if (sexo == 1){							//Com if podemos fazer um botão de escolha 
		printf("Sexo: Masculino/n");
		pesoIdeal =(72.7*altura)-58;		//Caso seja inserido essa escolha ele calcula e imprimi a mensagem com o resultado
		printf("Seu peso ideal eh: %.2f kg\n", pesoIdeal);
	}
	else if (sexo == 2){
		
		printf("Sexo: Feminino/n");
		pesoIdeal =(62.1*altura)-44.7;
		printf("Seu peso ideal eh: %.2f kg\n", pesoIdeal);

	} 
}
	
