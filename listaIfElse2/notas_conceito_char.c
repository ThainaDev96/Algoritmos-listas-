/*11. Ler as três notas obtidas por um aluno nas três verificações e a média dos exercícios que 
fazem parte da avaliação. Calcular a média de aproveitamento, usando a fórmula:
(N1 + N2 * 2 + N3 * 3 + MédiaExercícios) / 7
Informar o conceito de acordo com a tabela:
Média de aproveitamento : Conceito
>=9.0 A
>= 7.5 e < 9.0 B
>= 6.0 e < 7.5 C
< 6.0 D*/

#include<stdio.h>
int main(void) {
	
    float nota1, nota2, nota3, media, mediaExercicios;
    char conceito;

    printf("Informe a nota 1: ");
    scanf("%f", &nota1);

    printf("Informe a nota 2: ");
    scanf("%f", &nota2);

    printf("Informe a nota 3: ");
    scanf("%f", &nota3);

    printf("Informe a media dos exercicios: ");
    scanf("%f", &mediaExercicios);

    media = (nota1 + nota2 * 2 + nota3 * 3 + mediaExercicios) / 7;//Calcula a média de aproveitamento, onde as notas 1, 2 e 3 têm pesos diferentes.

    if (media >= 9.0) {
        conceito = 'A';
    } else if (media >= 7.5 && media < 9.0) {
        conceito = 'B';
    } else if (media >= 6.0 && media < 7.5) {
        conceito = 'C';
    } else {
        conceito = 'D';
    }

    printf("A média de aproveitamento é: %.2f\n", media);
    printf("O conceito é: %c\n", conceito);

    
}

