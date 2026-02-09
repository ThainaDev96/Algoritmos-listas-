#include <stdio.h>

int main(void) {
    int idadeCliente = 0, menorIdade = 150;
    float percentualCliente = 0, somaIdade = 0, idadeMedia = 0;
    int varIdade = 0;
    int contador = 0;
    int quantClienteM = 0;
    char turno = ' ';   
    char categoria = ' ';
    int quant = 0;
    int cont=0;
    int quantCliente=0;

    printf("Informe a idade ou 0 para encerrar: ");
    scanf("%d", &idadeCliente);

    while (idadeCliente != 0) {
        printf("Informe o turno em que é mais acessado (1-manha 2-tarde 3-noite): ");
        scanf(" %c", &turno);

        printf("Informe a categoria do jogo (1-estrategia 2-primeira pessoa 3-educativo 4-RGP): ");
        scanf(" % c", &categoria);

        if (idadeCliente >= 14 && idadeCliente <= 18) {
            quant++;
        }

        if (categoria == '4') {
        	cont++;
            if (idadeCliente < menorIdade) {
                varIdade = idadeCliente;
            }
        }

        if (categoria == '2' && turno == '3') { 
            somaIdade += contador;    
            contador++;
        }
        
		if (turno == '1') {
            quantClienteM++;
        if (categoria == '1') {
        	 quantCliente++;
        }

        printf("Informe a idade ou 0 para encerrar: ");
        scanf("%d", &idadeCliente);
    }

    if (contador > 0) {
        idadeMedia = somaIdade / contador;
        printf("A idade media dos clientes que jogam em primeira pessoa no turno noite eh: %.2f\n", idadeMedia);
    } else {
        printf("Nenhum cliente joga jogos de primeira pessoa no turno noite registrado.\n");
    }

    if (quantCliente > 0) { 
        percentualCliente = (float)quantClienteM / quant * 100;
        printf("Percentual de clientes que joga jogos de estrategia no turno manha eh: %.2f%%\n", percentualCliente);
    } else {
        printf("Nenhum cliente joga jogos de estrategia no turno manha registrado.\n");
    }

    printf("Menor idade do cliente que utilizam jogo da categoria RPG: %d\n", varIdade);
    printf("A quantidade de clientes entre 14 e 18 anos eh: %d\n", quant);

    return 0;
}
}
