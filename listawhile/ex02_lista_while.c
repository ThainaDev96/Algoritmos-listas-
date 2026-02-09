/*2. Escreva um programa para ler diversos números e informar se o número é par ou ímpar. Finalizar 
a leitura quando o usuário informar um flag de saída.*/

#include<stdio.h>
int main (void)
{
    int nro = 0;

    printf("Informe um numero ou 999 para encerrar: ");
    scanf("%d", &nro);

    while (nro != 999) {
        if (nro % 2 == 0) {
            printf("%d eh par.\n", nro);
        } else {
            printf("%d eh impar.\n", nro);
        }

        printf("Informe um numero ou 999 para encerrar: ");
        scanf("%d", &nro);
    }

    printf("Flag de saida informado. Encerrando o programa.\n");
    
}

