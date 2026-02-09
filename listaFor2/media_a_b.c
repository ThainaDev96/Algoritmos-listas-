/*3. Ler dois valores inteiros A e B, calcular e imprimir a média dos valores entre A e B. 
Supor A menor do que B.*/

#include <stdio.h>
int main(void) {
    int A, B, soma = 0, quantidade = 0, media = 0;
    int cont;

    printf("Informe o valor de A: ");
    scanf("%d", &A);

    printf("Informe o valor de B: ");
    scanf("%d", &B);

    for (cont = A; cont <= B; cont++) {
        printf("%d\n", cont);
        soma += cont;  
        quantidade++;
    }

    if (quantidade > 0) {
        media = soma / quantidade;
        printf("A media dos valores entre %d e %d eh: %d\n", A, B, media);
    } else {
        printf("Nao ha valores para calcular a media.\n");
    }

    
}

