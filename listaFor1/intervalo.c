/*1. Ler 10 valores e escrever os valores que estão no intervalo [10, 20] .*/

#include <stdio.h>

int main(void) {
    int nro;   //variavel de entrada de dados 
    int cont; //variavel contadora, controla as repetições, garante que sejam executados dez vezes 

    for (cont = 0; cont < 10; cont++) { //for inicia em zero vai ate 10 e anda de um em um, vai fazer um loop de 10 vezes para o usuario digitar a idade
        printf("Informe o numero: ");
        scanf("%d", &nro);

        if (nro >= 10 && nro <= 20) {	//Dessa forma ele imprimi os numeros dentro desse intervalo
            printf("Esta no intervalo de 10 a 20: %d\n", nro);
        }
    }

   
}

