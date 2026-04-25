// 90)

#include <stdio.h>

int main() {
    int v[30];
    int i, num, cont = 0;

    for (i = 0; i < 30; i++) {
        printf("Digite o elemento %d: ", i);
        scanf("%d", &v[i]);
    }

    printf("\nDigite o numero a ser buscado: ");
    scanf("%d", &num);

    for (i = 0; i < 30; i++) {
        if (v[i] == num) {
            cont++;
        }
    }

    printf("\nO numero %d aparece %d vez(es) no vetor.\n", num, cont);

    return 0;
}