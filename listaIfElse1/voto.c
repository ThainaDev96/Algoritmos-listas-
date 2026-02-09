/* 4)Escreva um programa para ler o ano de nascimento de uma pessoa e escrever uma mensagem
que diga se ela poderá ou não votar este ano(não é necessário considerar o mês em que ela nasceu).*/

#include <stdio.h>
int main(void)
{
    int anoNascimento, anoAtual = 2024, idade;

    printf("Informe o ano em que nasceu: ");
    scanf("%d", &anoNascimento);
    
    idade = (anoAtual - anoNascimento); //calcula a idade 

    if (idade > 18) //Se idade for maior que 18...
    {
        printf("Voce pode participar das eleicoes!! %d\n", idade);
    }
    else
    {
        printf("Voce ainda nao pode votar!! %d\n", idade);
    }

    
}

