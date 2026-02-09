/*5. Um posto de pedágio possui tarifas diferenciadas de acordo com o tipo do veículo, a 
saber:
a) veículos oficiais: isentos
b) motos: R$2,20
c) carros: R$4,40
d) carros com reboque: R$6,60
e) ônibus e caminhões: R$8,15
Simular um posto de pedágio por onde passam, obrigatoriamente e somente, 50 carros. Para 
cada veículo que passa, ler o tipo do veículo (a, b, c, d, e), determinar o valor a ser pago 
pelo veículo, receber um valor em pagamento e calcular o troco. 
Ao final da passagem dos 50 carros, informar as seguintes estatísticas: 
1. Quantos veículos que passaram são isentos?
2. Quantas motos passaram pelo posto de pedágio?
3. Qual o valor total arrecado pelo posto de pedágio?*/

#include <stdio.h>

int main(void) {
    int veiculos_insentos = 0, quantMotos = 0, quantCarros = 0, quantCReboque = 0, quantOnibusCaminhoes = 0;
    int cont;
    float valorTotal = 0;
    char categoria;

    for (cont = 0; cont < 50; cont++) {
        printf("Informe o tipo de veiculo (a, b, c, d, e): ");
        scanf(" %c", &categoria);

        if (categoria == 'a') {
            veiculos_insentos++;
        } else if (categoria == 'b') {
            valorTotal += 2.20;
            quantMotos++;
        } else if (categoria == 'c') {
            valorTotal += 4.40;
            quantCarros++;
        } else if (categoria == 'd') {
            valorTotal += 6.60;
            quantCReboque++;
        } else if (categoria == 'e') {
            valorTotal += 8.15;
            quantOnibusCaminhoes++;
        }
    }

    printf("Quantidade de veiculos isentos: %d\n", veiculos_insentos);
    printf("Quantidade de motos: %d\n", quantMotos);
    printf("Quantidade de carros: %d\n", quantCarros);
    printf("Quantidade de carros com reboque: %d\n", quantCReboque);
    printf("Quantidade de ônibus/caminhões: %d\n", quantOnibusCaminhoes);
    printf("Valor total arrecadado pelo posto de pedágio: R$ %.2f\n", valorTotal);

    return 0;
}

