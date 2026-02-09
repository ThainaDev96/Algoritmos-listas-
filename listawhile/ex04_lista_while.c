/*4. (Questão de prova) Para cada aluno da disciplina de Algoritmos deste semestre, serão digitadas as 
seguintes informações: o número da turma (111, 112 ou 113), a nota final e o sexo. Ao final do 
processamento, deverão ser fornecidas as seguintes estatísticas:
• Número de aprovados em cada turma (supondo média >= 7.0 para aprovação);
• A média geral da disciplina;
• O percentual de alunas do sexo feminino que foram reprovadas.
Considere o flag de saída o número 999 no código da turma.
*/

#include<stdio.h>
int main(void) {
    int nTurma, nota, cont = 0;
    char sexo;
    float soma = 0, media = 0, percentualReprovadas = 0;
    int aprovados111 = 0, aprovados112 = 0, aprovados113 = 0;
    int totalAlunas = 0, alunasReprovadas = 0;

    printf("Informe a sua turma (111, 112, 113) ou 999 para encerrar: ");  
    scanf("%d", &nTurma);

    while (nTurma != 999) {  
        printf("Informe o sexo (1 para feminino ou 2 para masculino): ");
        scanf(" %c", &sexo);

        printf("Informe a nota final: ");		
        scanf("%d", &nota);

        if (nota >= 7) {  
            soma += nota;//todas as notas inseridas pelo usuario sera atribuidas a variavel soma para ser calculado posteriormente na media 	
            cont++;	//garante as contagens das notas dos alunos

            // Conta o número de aprovados em cada turma(contagens)
            if (nTurma == 111) {
                aprovados111++;
            } else if (nTurma == 112) {
                aprovados112++;
            } else if (nTurma == 113) {
                aprovados113++;
            }

            // Verifica se é aluna e se foi reprovada
            if (sexo == '1') {
                totalAlunas++;
                if (nota < 7) {
                    alunasReprovadas++;
                }
            }
        }

        printf("Informe a sua turma (111, 112, 113) ou 999 para encerrar: ");  
        scanf("%d", &nTurma);
    }

    // Cálculo da média geral da disciplina
    if (cont > 0) {
        media = soma / cont;
    } else {
        media = 0;
    }

    // Cálculo do percentual de alunas reprovadas
    if (totalAlunas > 0) {
        percentualReprovadas = (float) alunasReprovadas / totalAlunas * 100;   
        																	
    }

    printf("\nEstatísticas:\n");
    printf("Aprovados na turma 111: %d\n", aprovados111);
    printf("Aprovados na turma 112: %d\n", aprovados112);
    printf("Aprovados na turma 113: %d\n", aprovados113);
    printf("Média geral da disciplina: %.2f\n", media);
    printf("Percentual de alunas reprovadas: %.2f%%\n", percentualReprovadas);

}
}

/*explicação:
 printf("Informe a sua turma (111, 112, 113) ou 999 para encerrar: ");  //coloco uma entrada de dados antes do loop
    scanf("%d", &nTurma);

    while (nTurma != 999) {  //flag de saída enquanto o numero da turma for diferente de 999 ele continua
        printf("Informe o sexo (1 para feminino ou 2 para masculino): ");
        scanf(" %c", &sexo);

        printf("Informe a nota final: ");		//entrada de dados conforme o enunciado eh:numero da turma,sexo,nota final
        scanf("%d", &nota);

        if (nota >= 7) {  //aqui contabiliza os alunos que tiraram nota final maior que 7, ele contabiliza
            soma += nota;	//equivale a soma = soma + nota. A cada nota que passa maior que 7 o valor é guardado na variavel soma
            cont++;		//variavel contadora
             percentualReprovadas = (float) alunasReprovadas / totalAlunas * 100;   
			 //calculo é reprovadas dividido pelo total vai da o percentual ,para ser em porcentagem se multiplica por 100
			//calculo da media geral:Se houver pelo menos um aluno aprovado (ou seja, se cont > 0), a média geral da disciplina é calculada 
			  dividindo a soma das notas de todos os alunos aprovados pela quantidade de alunos aprovados.
 */

