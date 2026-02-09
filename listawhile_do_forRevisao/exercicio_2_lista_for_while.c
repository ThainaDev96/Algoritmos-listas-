/*2. A Faculdade Dom Bosco de Porto Alegre quer realizar um levantamento a respeito de
seus alunos. Para cada aluno será solicitado: a idade, o sexo, se já está trabalhando e a
quantidade de disciplinas que está cursando no atual semestre. Escrever um programa para
ler os dados dos alunos e, a seguir, calcular e imprimir as seguintes informações:
a) idade, sexo, se está trabalhando e a quantidade de disciplinas cursadas para o
aluno que tiver a menor idade entre todos os alunos da faculdade;
b) a quantidade de alunas do sexo feminino que estão trabalhando;
c) o percentual de alunos do sexo masculino que estão cursando mais do que 04
(quatro) disciplinas, com relação ao total de alunos do sexo masculino.
*/

#include <stdio.h>

int main(void) {
    int idade = 0, quantDisciplina = 0, menorIdade = 150, varQuantDisciplina = 0, quantAlunas = 0, quantAlunosMasculinos = 0, quantAlunosMasculinosMais4 = 0;
    int varIdade = 0;
    char varSexo = ' ';
    char varTrabalho = ' ';
    char sexo = ' ';
    float percentualM = 0;

    do {
        printf("Informe a sua idade ou zero para encerrar: ");
        scanf("%d", &idade);
        
        if (idade != 0) { // Verifica se a idade é diferente de zero para continuar a coleta dos dados
            printf("Informe o sexo (m/f): ");
            scanf(" %c", &sexo);

            printf("Informe se você está trabalhando. Digite 's' se sim ou 'n' se não: ");
            scanf(" %c", &varTrabalho);

            printf("Informe a quantidade de disciplinas que está cursando: ");
            scanf("%d", &quantDisciplina);

            // Para encontrar a pessoa mais nova em cada categoria 
            if (idade < menorIdade) {   //Para isso, a idade inserida pelo usuário deve ser menor que a menorIdade que vale 150,vai sempre ser verdadeiro
                varQuantDisciplina = quantDisciplina;//a variavel do lado direto da igualdade são as novas variaveis que irão armazenar a menor idade encontrada na categoria
                varIdade = idade;
                varSexo = sexo;
                varTrabalho = varTrabalho;
            }

            // Conta a quantidade de alunos masculinos e aqueles que cursam mais de 4 disciplinas
            if (sexo == 'm') {
                quantAlunosMasculinos++;
                if (quantDisciplina > 4) {
                    quantAlunosMasculinosMais4++;
                }
            }

            // Conta a quantidade de alunas do sexo feminino que estão trabalhando
            if (sexo == 'f' && varTrabalho == 's') {
                quantAlunas++;
            }
        }
    } while (idade != 0);

    // Calcula e imprime o percentual de alunos masculinos cursando mais de 4 disciplinas
    if (quantAlunosMasculinos > 0) {
        percentualM = (float)quantAlunosMasculinosMais4 / quantAlunosMasculinos * 100;
        printf("Percentual de alunos do sexo masculino cursando mais de 4 disciplinas: %.2f%%\n", percentualM);
    } else {
        printf("Nenhum aluno do sexo masculino foi registrado.\n");
    }

    // Imprime as informações do aluno com menor idade, e a quantidade de alunas (f) que estão trabalhando
    printf("Idade do aluno com a menor idade: %d\n", varIdade);
    printf("Sexo do aluno com a menor idade: %c\n", varSexo);
    printf("Se o aluno com a menor idade trabalha ou não: %c\n", varTrabalho);
    printf("Quantidade de disciplinas cursadas pelo aluno com a menor idade: %d\n", varQuantDisciplina);
	printf("Quantidade de alunas do sexo feminino que estao trabalhando: %d\n", quantAlunas);
}

	
	
