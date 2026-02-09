/*9. Uma empresa concederá um aumento de salário aos seus funcionários, de acordo com o
cargo, conforme descrito abaixo. Escreva um programa que leia o salário e o código do
cargo do funcionário, e calcule o novo salário. Se o cargo do funcionário não estiver na
tabela, ele deverá receber 35.5% de aumento. Mostre o salário antigo, o novo salário e a
diferença.
Código Cargo Percentual
91 Gerente 10%
92 Analista 20%
93 Técnico 30%
*/


#include <stdio.h>
int main(void) {
    float sAntigo, sNovo, aumento;
    int codigo;

    printf("Digite seu salario: ");
    scanf("%f", &sAntigo);

    printf("Digite seu codigo: ");
    scanf("%d", &codigo);

    if (codigo == 91) {
    	
        aumento = 0.1 * sAntigo;
        
    } 
	else if (codigo == 92) {
        aumento = 0.2 * sAntigo;
    } 
	else if (codigo == 93) {
        aumento = 0.3 * sAntigo;
    } else
	 {
        printf("Codigo invalido\n");
        
    }

    sNovo = sAntigo + aumento;
    printf("Seu novo salario eh %.2f\n", sNovo);

    
}

