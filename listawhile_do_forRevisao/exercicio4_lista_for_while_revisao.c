/*4. Ler 2 números inteiros A e B. Calcular e imprimir a soma de todos os números múltiplos 
de 3 entre A e B, incluindo A e excluindo B. Suponha que eles sejam positivos e que B é 
maior que A. Não é necessário testar estas condições no programa.*/

#include <stdio.h>

int main(void) {
    int A, B;
    int soma_multiplos_3 = 0;//Um número é considerado múltiplo de outro quando a divisão entre eles resulta em um resto igual a zero.
    int cont=0;

    printf("Informe o valor de A: ");
    scanf("%d", &A);

    printf("Informe o valor de B: ");
    scanf("%d", &B);

    for (cont = A; cont < B; cont++) {  //intevalo de numeros
        if (cont % 3 == 0) {  //Se o resto da divisão de cont por 3 for igual a zero, isso significa que cont é um múltiplo de 3.
            soma_multiplos_3 += cont;  //A contagem de numero estara armazenada na variavel soma multiplos (variavel acumuladora)
        }
    }

    printf("A soma dos múltiplos de 3 entre %d e %d, incluindo %d e excluindo %d, é: %d\n", A, B, A, B, soma_multiplos_3);

    return 0;
}

