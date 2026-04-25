// 88)

#include <stdio.h>

int main() {
    int v[20], novo[20];
    int i, num, j = 0;
    int achou = 0;

    for (i = 0; i < 20; i++) {
        printf("Digite o elemento %d: ", i);
        scanf("%d", &v[i]);
    }

    printf("Digite o numero a ser removido: ");
    scanf("%d", &num);
    
    for (i = 0; i < 20; i++) {
        if (v[i] == num) {
            achou = 1;
        } else {
            novo[j] = v[i];
            j++;
        }
    }

    if (achou) {
        printf("\nNovo vetor sem o numero %d:\n", num);
        for (i = 0; i < j; i++) {
            printf("%d ", novo[i]);
        }
        printf("\n");
    } else {
        printf("\nO numero nao existe no vetor.\n");
    }

    return 0;
}