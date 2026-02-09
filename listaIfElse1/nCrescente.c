/*9)(Questão de Trabalho) Leia três valores numéricos inteiros e escreva-os em ordem 
crescente. */

#include <stdio.h>
int main(void) {
    int nro1,nro2,nro3,ordem;
  

    printf("Informe o numero: ");
    scanf("%d", &nro1);
    
 
    printf("Informe o numero: ");
    scanf("%d", &nro2);
    
  
    printf("Informe o numero: ");
    scanf("%d", &nro3);
    
    if (nro1 > nro2) { // Verifica se o nro1 é maior que nro2
        ordem = nro1;   // Se sim, armazena temporariamente o valor de nro1 em ordem
        nro1 = nro2;   // Atribui o valor de nro2 a nro1
        nro2 = ordem;   // Atribui o valor armazenado em ordem a nro2 (troca os valores)
    }
    if (nro1 > nro3) { // Verifica se o nro1 é maior que nro3 após a troca com nro2
        ordem = nro1;   // Se sim, armazena temporariamente o valor de nro1 em ordem
        nro1 = nro3;   // Atribui o valor de nro3 a nro1
        nro3 = ordem;   // Atribui o valor armazenado em ordem a nro3 (troca os valores)
    }
    if (nro2 > nro3) { // Verifica se o nro2 é maior que nro3 após as trocas anteriores
        ordem = nro2;   // Se sim, armazena temporariamente o valor de nro2 em ordem
        nro2 = nro3;   // Atribui o valor de nro3 a nro2
        nro3 = ordem;   // Atribui o valor armazenado em ordem a nro3 (troca os valores)
    }
    
    printf("Os numeros em ordem crescente sao: %d, %d, %d\n", nro1, nro2, nro3);
    

}
