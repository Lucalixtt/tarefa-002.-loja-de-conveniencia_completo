#include <stdio.h>
#include <string.h>

int main() {
    char nomeProduto[50];
    int quantidade;
    float precoUnitario, valorTotal, valorTotalDia = 0;

    do {
        printf("Digite o nome do produto (ou 'fim' para encerrar): ");
        fgets(nomeProduto, 50, stdin);
        nomeProduto[strcspn(nomeProduto, "\n")] = 0; // Remove a nova linha

        if (strcmp(nomeProduto, "fim") == 0) {
            break;
        }

        printf("Digite a quantidade vendida: ");
        scanf("%d", &quantidade);

        printf("Digite o preço unitário: ");
        scanf("%f", &precoUnitario);

        valorTotal = quantidade * precoUnitario;
        valorTotalDia += valorTotal;

        printf("Valor total da venda: R$ %.2f\n", valorTotal);

    } while (1);

    printf("\nValor total arrecadado no dia: R$ %.2f\n", valorTotalDia);

    return 0;
}

