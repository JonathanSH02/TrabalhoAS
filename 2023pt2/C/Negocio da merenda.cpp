#include <stdio.h>

int main() {
    // Declare as variáveis para armazenar os valores
    float valorAntigo, valorNovo;

    // Solicite ao usuário para inserir os valores
    printf("Digite o valor antigo: ");
    scanf("%f", &valorAntigo);

    printf("Digite o valor novo: ");
    scanf("%f", &valorNovo);

    // Verifique se o valor novo é maior que o valor antigo para calcular a porcentagem de aumento
    if (valorNovo > valorAntigo) {
        // Calcule a porcentagem de aumento
        float aumentoPercentual = ((valorNovo - valorAntigo) / valorAntigo) * 100;

        // Exiba a porcentagem de aumento
        printf("O valor aumentou em %.2f%%\n", aumentoPercentual);
    } else if (valorNovo < valorAntigo) {
        // Se o valor diminuiu, calcule a porcentagem de diminuição
        float diminuicaoPercentual = ((valorAntigo - valorNovo) / valorAntigo) * 100;

        // Exiba a porcentagem de diminuição
        printf("O valor diminuiu em %.2f%%\n", diminuicaoPercentual);
    } else {
        // Se os valores forem iguais, informe que não houve alteração
        printf("Os valores são iguais, não houve alteração.\n");
    }

    return 0;
}
