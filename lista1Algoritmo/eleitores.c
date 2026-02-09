/*9)Escrever um programa para ler o número de eleitores de um município, o número de votos brancos, nulos e
válidos. Calcular e escrever o percentual que cada um representa em relação ao total de eleitores.*/

#include <stdio.h>

int main(void)
{
    double nEleitores, vBranco, vNulo, vValido, percentualBranco, percentualNulo, percentualValido;
    
    printf("Informe o número total de eleitores: ");
    scanf("%lf", &nEleitores);
    
    printf("Informe o número de votos em branco: ");
    scanf("%lf", &vBranco);
    
    printf("Informe o número de votos nulos: ");
    scanf("%lf", &vNulo);
    
    printf("Informe o número de votos válidos: ");
    scanf("%lf", &vValido);
    
    percentualBranco = (vBranco * 100)/nEleitores;//aqui multiplicamos por 100 para obter o resultado em porcentagem, se fosse para converter porcentagem em numero decimal seria dividido por 100.
    percentualNulo = (vNulo * 100) / nEleitores;
    percentualValido = (vValido * 100) / nEleitores;
    
    printf("Percentual de eleitores com votos em branco: %lf\n", percentualBranco);
    printf("Percentual de eleitores com voto nulo: %lf\n", percentualNulo);
    printf("Percentual de eleitores com votos válidos: %lf\n", percentualValido);

    
}

