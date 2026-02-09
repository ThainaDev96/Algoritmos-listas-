/*6. A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que
trabalhar mais de 40 horas receberá hora extra, cujo cálculo é o valor da hora regular
com um acréscimo de 50%. Escreva um programa que lê o número de horas trabalhadas
em um mês, o salário por hora e escreva o salário total do funcionário, que deverá ser
acrescido das horas extras caso tenham sido trabalhadas (considere que o mês possua
quatro semanas exatas)*/


#include <stdio.h>

int main(void) {
    int trhoras, shoras, stotal, hextra;
    
    printf("Digite quantas horas trabalhou ");
    scanf("%d", &trhoras);
    printf("Digite quanto voce recebe em dinheiro por horas trabalhadas ");
    scanf("%d", &shoras);
    
    if (trhoras > 40) {
        hextra = 0.5 * (trhoras - 40) * shoras; // Calcula o valor das horas extras
        stotal = 40 * shoras + hextra; // Calcula o salário total com horas extras
        printf("Seu salário total com hora extra é: %d\n", stotal);
    } else {
        stotal = trhoras * shoras; // Calcula o salário total sem horas extras
        printf("Seu salário total é: %d\n", stotal);
    }
    
    
}

