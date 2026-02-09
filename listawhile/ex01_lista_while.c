/*1. Fazer um programa que leia um número indeterminado de idades. A última idade lida, que não 
entrará nos cálculos, contém o valor da idade igual a zero.//flag de saida// Calcule e escreva a idade média deste 
grupo de indivíduos.*/

#include<stdio.h>
int main (void)
{

    int idade = 0;
    float somaIdades = 0; 
    int contador = 0; 

    printf("Informe sua idade ou 0 para encerrar: ");
    scanf("%d", &idade);

    while (idade != 0) {
    	somaIdades += idade; 
        contador++; 

        printf("Informe sua idade ou 0 para encerrar: ");
        scanf("%d", &idade);
	}
	//calculo da media
    if (contador > 0) {
        float idadeMedia = somaIdades / contador; //essa formula condiz com o que é a media aritmética

        printf("A idade média do grupo é: %.2f\n", idadeMedia);
    } else {
        printf("Nenhuma idade foi inserida.\n");
    }

}
    
	
	/*float somaIdades = 0;// Variável para armazenar a soma das idades, toda vez que se faz media precisa dessa variavel
    int contador = 0; // Variável para contar o número de idades inseridas
    somaIdades += idade; // Adiciona a idade inserida pelo usuário a variavel soma das idades: +=
    contador++; // garante a contagem das idades
    float idadeMedia = somaIdades / contador;
	// Calcula a idade média, Quando você divide a soma das idades pelo contador, está calculando a média aritmética das idades. 
	//Isso é feito porque a média aritmética é definida como a soma de todos os valores dividida pelo número de valores.*/
