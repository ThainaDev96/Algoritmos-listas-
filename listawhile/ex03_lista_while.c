/*3. Escrever um programa para ler dois valores (se o segundo valor informado for ZERO, deve ser 
lido um novo valor e mostrar a mensagem “VALOR INVALIDO”) e imprimir o resultado da divisão 
primeiro pelo segundo.*/

#include <stdio.h>
int main(void) {
    int nro1, nro2;
    float divisao;

    printf("Informe o primeiro numero ou 999 para encerrar: ");
    scanf("%d", &nro1);

    while (nro1 != 999) {
        printf("Informe o segundo numero: ");
        scanf("%d", &nro2);

        if (nro2 == 0) {
            printf("VALOR INVALIDO\n");
        } else {
            divisao = (float)nro1 / nro2;//calculo está dentro para permitir que seja calculado varias divisões
            printf("Resultado da divisao: %.2f\n", divisao);
        }

        printf("Informe o primeiro numero ou 999 para encerrar: ");
        scanf("%d", &nro1);
    }

  
}

