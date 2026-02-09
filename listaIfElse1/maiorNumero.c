/* 7)leia três valores numéricos e escreva o maior valor.*/

#include <stdio.h>

int main(void) {
    int nro1, nro2, nro3, maior;

    printf("Informe o primeiro numero: ");
    scanf("%d", &nro1);

    printf("Informe o segundo numero: ");
    scanf("%d", &nro2);

    printf("Informe o terceiro numero: ");
    scanf("%d", &nro3);

    // Assumimos inicialmente que o primeiro número é o maior
    maior = nro1;

    // Comparamos o segundo número com o maior atual
    if (nro2 > maior) {
        maior = nro2;
    }

    // Comparamos o terceiro número com o maior atual
    if (nro3 > maior) {
        maior = nro3;
    }

    printf("O maior valor entre os numeros eh: %d\n", maior);

    
}

