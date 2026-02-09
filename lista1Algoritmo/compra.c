/*10) Ler o valor de uma compra e escrever o quanto deverá ser pago, supondo que esta compra será paga 
em trinta dias e terá um acréscimo de 0,39%. */

#include<stdio.h>

int main(void)
{
    double valorCompra, valorApagar, acrescimo;
    
    printf("Informe o valor da compra: ");
    scanf("%lf", &valorCompra);
    
    acrescimo = (valorCompra * 0.0039);//nessa formula multiplicaremos o valor da compra pela porcentagem de acrescimo ja em forma decimal.(valorCompra*(0.39/100);)
    valorApagar = valorCompra + acrescimo;
    
    printf("O valor a ser pago considerando o acréscimo em 30 dias é: %lf\n", valorApagar);

}

