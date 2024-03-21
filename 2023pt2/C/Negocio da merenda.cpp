#include <stdio.h>

int main() {
    // Declare as vari�veis para armazenar os valores
    float valorAntigo, valorNovo;

    // Solicite ao usu�rio para inserir os valores
    printf("Digite o valor antigo: ");
    scanf("%f", &valorAntigo);

    printf("Digite o valor novo: ");
    scanf("%f", &valorNovo);

    // Verifique se o valor novo � maior que o valor antigo para calcular a porcentagem de aumento
    if (valorNovo > valorAntigo) {
        // Calcule a porcentagem de aumento
        float aumentoPercentual = ((valorNovo - valorAntigo) / valorAntigo) * 100;

        // Exiba a porcentagem de aumento
        printf("O valor aumentou em %.2f%%\n", aumentoPercentual);
    } else if (valorNovo < valorAntigo) {
        // Se o valor diminuiu, calcule a porcentagem de diminui��o
        float diminuicaoPercentual = ((valorAntigo - valorNovo) / valorAntigo) * 100;

        // Exiba a porcentagem de diminui��o
        printf("O valor diminuiu em %.2f%%\n", diminuicaoPercentual);
    } else {
        // Se os valores forem iguais, informe que n�o houve altera��o
        printf("Os valores s�o iguais, n�o houve altera��o.\n");
    }

    return 0;
}
