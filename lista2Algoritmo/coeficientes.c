/*8) Um sistema de equações lineares da forma: Ax + By = C     Dx + Ey = F
Pode ser resolvido utilizando-se as seguintes fórmulas: 
x= CE - BF         e          y= AF - CD
-----------                   -----------  
   AE - BD                       AE - BD

Escreva um programa para ler o conjunto de coeficientes (A, B, C, D, E, F)
e imprima a solução, ou seja, os valores de x e y. */

#include<stdio.h>
int main(void)
{
	float A,B,C,D,E,F,valorx,valory;
	
	printf("informe valor de A: ");
	scanf("%f", &A);
	
	printf("informe o valor de B: ");
	scanf("%f", &B);
	
	printf("informe valor de C: ");
	scanf("%f", &C);
	
	printf("informe o valor de D: ");
	scanf("%f", &D);
	
	printf("informe valor de E: ");
	scanf("%f", &E);
	
	printf("informe o valor de F: ");
	scanf("%f", &F);
	
	valorx= ((C*E)-(B*F))/((A*E)-(B*D));//diferencial dessa questão é o uso dos parententeses para dar prioridade aos calculos que são feitos por primeiro
	valory= ((A*F)-(C*D))/((A*E)-(B*D));//aqui nessas formulas são 4 operações ,fica dessa forma 
	
	printf("resultado de x eh: %.2f\n", valorx);
	printf("resultado de y eh: %.2f\n", valory);
	
}

