/*2)Fazer um programa que imprime na tela a situação do aluno após a sua nota ser
digitada. Baseie-se na tabela abaixo:
Nota Situação
de 1 a 2 Nota péssima
de 3 a 4 Nota ruim
de 5 a 6 Nota pouco ruim
7 Nota boa
8 a 9 Nota muito boa
10 Nota excelente
*/

#include<stdio.h>
int main (void)
{
	float nota;
	
	printf("Informe sua nota ");
	scanf("%f", &nota);

	if(nota>=1 && nota<=2 ){ 	//O if faz o intervalo de 1 a 2 utilizando os operadores logicos se for verdade ele imprime aquela mensagem senão ele pula
		printf("Nota pessima");
	}
	else if(nota>=3 && nota<=4 ){
		printf("Nota ruim");
	} 
	else if(nota>=5 && nota<=6 ){
		printf("Nota pouco ruim");
	} 
 	else if(nota==7){
		printf("Nota boa");
	} 
	else if(nota>=8 && nota<=9){
		printf("Nota muito boa");
	}
	else if(nota==10){
		printf("Nota exelente");
	}
}
