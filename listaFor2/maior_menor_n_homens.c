/*2. Tem-se um conjunto de dados contendo a altura e o sexo (m, f) de 50 pessoas. Fazer um 
programa que calcule e escreva:
• a maior e a menor altura do grupo;
• o número de homens.*/

#include <stdio.h>

int main(void) {
    int sexo, nHomens = 0, nMulheres = 0;
    float altura, maior_altura = 0, menor_altura = 99999;
    int cont;

    for (cont = 0; cont <50; cont++) { 
        printf("Informe a altura (em centimetros): ");
        scanf("%f", &altura);

        printf("Informe o sexo (1 para masculino, 2 para feminino): ");
        scanf("%d", &sexo);

       
        if (altura > maior_altura) {
            maior_altura = altura;
        }

        if (altura < menor_altura) {
            menor_altura = altura;
        }

        if (sexo == 1) {
            nHomens++;
        } else if (sexo == 2) {
            nMulheres++;
        }
    }

    printf("Maior altura do grupo: %.2f cm\n", maior_altura);
    printf("Menor altura do grupo: %.2f cm\n", menor_altura);
    printf("Numero de homens: %d\n", nHomens);
    printf("Numero de mulheres: %d\n", nMulheres);

    
}

    
