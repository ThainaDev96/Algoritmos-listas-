/*1)Elabore um programa que recebe a idade de um nadador. O programa deve classificar o
nadador em uma das categorias abaixo:
Infantil A = de 5 a 7 anos,
Infantil B = de 8 a 10 anos,
Juvenil A = de 11 a 13 anos,
Juvenil B = de 14 a 17 anos,
Senior = maiores de 18 anos.*/

#include<stdio.h>
int main (void)
{
	int idade;
	
	printf("qual a sua idade? ");
	scanf("%d", &idade);

	if(idade>=5 && idade<=7 ){			//Aqui ele daz um intervalo de idade utilizando os operadores logicos maior menor igual
		printf("sua calssificacao eh infantil A");
	}
	else if(idade>=8 && idade<=10 ){
		printf("sua calssificacao eh infantil B");
	} 
	else if(idade>=11 && idade<=13 ){
		printf("sua calssificacao eh juvenil A");
	} 
	else if(idade>=14 && idade<=17 ){
		printf("sua calssificacao eh juvenil B");
	} 
	else if(idade>18){
		printf("sua calssificacao eh senior");
	}
}
