/*5. Ler um número inteiro e apresentar os resultados da tabuada para o número lido. A
apresentação deverá estar com o formato abaixo. Exemplo para o número informado 2.
1x2=2,2x2=4,3x2=6,4x2=8,5x2=10,6x2=12,7x2=14,8x2=16,9x2=18,10x2=20*/

#include <stdio.h>
int main(void) {
    int nro, tabuada, cont;

    printf("Informe o numero: ");
    scanf("%d", &nro);

    for (cont = 1; cont <= 10; cont++) { //Aqui tem que ser menor ou igual a 10 pois inicia no 1 
        tabuada = (nro * cont);
        printf("%d x %d = %d\n", nro, cont, tabuada);// substituído pelos valores de nro x cont e tabuada(resultado).
    }

}


