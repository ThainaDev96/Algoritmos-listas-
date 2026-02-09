/*7) A partir de dois números fornecidos pelo usuário, escrever uma das seguintes 
mensagens: OS DOIS SÃO PARES; OS DOIS SÃO ÍMPARES; O PRIMEIRO É PAR 
E O SEGUNDO É ÍMPAR; O PRIMEIRO É ÍMPAR E O SEGUNDO É PAR.*/

#include <stdio.h>

int main(void) {
    int nro1, nro2;

    printf("Informe o nro1: ");
    scanf("%d", &nro1);
    
    printf("Informe o nro2: ");
    scanf("%d", &nro2);
    
    if (nro1 % 2 == 0 && nro2 % 2 == 0) {
        printf("Os dois sao pares: %d %d", nro1, nro2);
    } 
    else if (nro1 % 2 == 1 && nro2 % 2 == 1) { 
        printf("Os dois sao impares: %d %d", nro1, nro2);
    }
    else if (nro1 % 2 == 0 && nro2 % 2 == 1) {
        printf("O primeiro e par e o segundo e impar: %d %d\n", nro1, nro2);
    }
    else if (nro1 % 2 == 1 && nro2 % 2 == 0) {
        printf("O primeiro e impar e o segundo e par: %d %d\n", nro1, nro2);
    }
    
   
}


