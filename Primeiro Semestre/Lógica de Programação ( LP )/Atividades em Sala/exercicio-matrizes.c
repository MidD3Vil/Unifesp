#include <stdio.h>

int main() {
    int matriz[3][4];
    int vetor[3];
    int i, j, soma_total = 0;

    // Leitura da matriz
    for (i = 0; i < 3; i++) {
        printf("Linha %d:\n", i + 1);
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Soma das linhas (gera o vetor)
    for (i = 0; i < 3; i++) {
        vetor[i] = 0;
        for (j = 0; j < 4; j++) {
            vetor[i] += matriz[i][j];
        }
    }

    // Soma dos elementos do vetor
    for (i = 0; i < 3; i++) {
        soma_total += vetor[i];
    }

    // Saídas
    printf("\nVetor de soma das linhas:\n");
    for (i = 0; i < 3; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n\nSoma total: %d\n", soma_total);

    return 0;
}