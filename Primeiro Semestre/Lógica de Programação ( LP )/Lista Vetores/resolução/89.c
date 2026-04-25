// 89)

#include <stdio.h>

int main() {
    int v1[15], v2[15];
    int i, iguais = 0;

    printf("Digite os valores do vetor V1:\n");
    for (i = 0; i < 15; i++) {
        printf("V1[%d]: ", i);
        scanf("%d", &v1[i]);
    }

    printf("\nDigite os valores do vetor V2:\n");
    for (i = 0; i < 15; i++) {
        printf("V2[%d]: ", i);
        scanf("%d", &v2[i]);
    }

    for (i = 0; i < 15; i++) {
        if (v1[i] == v2[i]) {
            iguais++;
        }
    }

    printf("\nQuantidade de elementos iguais na mesma posicao: %d\n", iguais);

    return 0;
}