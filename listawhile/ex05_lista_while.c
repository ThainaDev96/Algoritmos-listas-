/*5. Foi feita uma pesquisa de audiência de canal de TV em várias casas de certa cidade, num
determinado dia. Para cada casa visitada, é fornecido o número do canal (4, 5, 7 ou 12) e o número de 
pessoas que o estavam assistindo. Se a televisão estivesse desligada, nada era anotado, ou seja, esta 
casa não entrava na pesquisa. 
Fazer um programa que:
• Leia um número indeterminado de dados, sendo que o número do canal igual a zero, finaliza a 
leitura dos dados e escreva o número do canal e sua respectiva porcentagem*/


#include <stdio.h>

int main(void) {
    int canalTv, nPessoas_assistindo, totalAudiencia = 0, cont4 = 0, cont5 = 0, cont7 = 0, cont12 = 0;
    float canal4, canal5, canal7, canal12;

    printf("Informe o canal (4, 5, 7, 12) ou 0 para encerrar: ");
    scanf("%d", &canalTv);

    while (canalTv != 0) {
        printf("Informe a quantidade de pessoas que estão assistindo o canal %d: ", canalTv);
        scanf("%d", &nPessoas_assistindo);

        if (nPessoas_assistindo > 0) {
            totalAudiencia += nPessoas_assistindo;//essa linha está salvando o valor do número de pessoas assistindo em cada casa na variável totalAudiencia, para que posteriormente para calcular a porcentagem

            if (canalTv == 4) {
                cont4++;
            } else if (canalTv == 5) {
                cont5++;
            } else if (canalTv == 7) {
                cont7++;
            } else if (canalTv == 12) {
                cont12++;
            }
        }

        printf("Informe o canal (4, 5, 7, 12) ou 0 para encerrar: ");
        scanf("%d", &canalTv);
    }

    canal4 = (float)cont4 / totalAudiencia * 100;
    canal5 = (float)cont5 / totalAudiencia * 100;
    canal7 = (float)cont7 / totalAudiencia * 100;
    canal12 = (float)cont12 / totalAudiencia * 100;

    printf("Percentual de audiencia por canal:\n");
    printf("Percentual do canal  4: %.2f%%\n", canal4);
    printf("Percentual do canal  5: %.2f%%\n", canal5);
    printf("Percentual do canal  7: %.2f%%\n", canal7);
    printf("Percentual do canal  12: %.2f%%\n", canal12);
    

}


