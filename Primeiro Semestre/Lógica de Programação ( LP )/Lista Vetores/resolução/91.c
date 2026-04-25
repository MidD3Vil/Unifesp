// 91)

#include <stdio.h>

int main() {
    int vet[50];
    int i, j;
    int encontrou = 0;

    for (i = 0; i < 50; i++) {
        printf("Digite o elemento %d: ", i);
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < 50; i++) {
        for (j = i + 1; j < 50; j++) {
            if (vet[i] == vet[j]) {
                printf("\nNumero %d repetido nas posicoes %d e %d", vet[i], i, j);
                encontrou = 1;
            }
        }
    }

    if (!encontrou) {
        printf("\nNao existem numeros repetidos.\n");
    }

    return 0;
}