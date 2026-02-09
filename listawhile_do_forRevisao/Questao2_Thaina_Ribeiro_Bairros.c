#include <stdio.h>
int main(void) {
    int A, B;
    int soma_impares = 0;  
    int cont= 0 ;
    float media_impares=0;

    printf("Informe o valor de A: ");
    scanf("%d", &A);

    printf("Informe o valor de B( B tem que ser maior que A): ");
    scanf("%d", &B);
    
    
    for (cont=A+1; cont<= B; cont++) {
        if (cont % 2 != 0) { 
            soma_impares += cont;
            cont ++;
        }
    }

    media_impares = soma_impares / cont;

    printf("A media dos numeros impares eh: %.2f\n", media_impares);


}


