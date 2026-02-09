/*5. Ler 2 números inteiros e positivos A e B. Calcular e imprimir a média dos ímpares 
menores que B, excluindo B.
Supor que A e B são inteiros e positivos e que B é menor que A. Não é necessário testar 
estas condições no programa.*/ 

#include <stdio.h>

int main(void) {
    int A, B;
    int soma_impares = 0;  
    int cont= 0 ;
    float media_impares=0;

    printf("Informe o valor de A (A deve ser maior que B): ");
    scanf("%d", &A);

    printf("Informe o valor de B (B deve ser menor que A): ");
    scanf("%d", &B);

    // Verifica se A é menor que B, caso contrário, solicita novos valores
    while (A <= B) {
        printf("A deve ser maior que B. Por favor, informe novamente:\n");
        
        printf("Informe o valor de A (A deve ser maior que B): ");
        scanf("%d", &A);

        printf("Informe o valor de B (B deve ser menor que A): ");//repete a entrada de dados
        scanf("%d", &B);
    }

    // Loop para encontrar os números ímpares menores que B e somá-los
    for (cont= A; cont > B; cont++) {
        if (cont % 2 != 0) { // Verifica se o número é ímpar
            soma_impares += cont;
            cont ++;
        }
    }

    // Calcula a média dos números ímpares
    media_impares = soma_impares / cont++;

    printf("A média dos números ímpares menores que B, excluindo B, é: %.2f\n", media_impares);


}


