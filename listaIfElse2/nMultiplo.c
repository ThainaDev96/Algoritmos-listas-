/*10. Ler dois números inteiros A e B e mostrar mensagem informando se A é múltiplo de B.*/

#include<stdio.h>
int main (void)
	{
    int A, B;
    
    printf("Informe o valor de A: ");
    scanf("%d", &A);
    
    printf("Informe o valor de B: ");
    scanf("%d", &B);
    
    if (A % B == 0) {		//Se o resto da divisao for zero significa que é multiplo, se fosse por um significaria que não é 
        printf("A e multiplo de B.\n");
    } else {
        printf("A nao e multiplo de B.\n");
    }

    if (B % A == 0) {
        printf("B e multiplo de A.\n");
    } else {
        printf("B nao e multiplo de A.\n");
    }

}

