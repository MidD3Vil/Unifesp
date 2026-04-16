// 67)
#include <stdio.h>

int main() {
    int i, soma = 0, qtd = 0;
    float media;

    for (i = 15; i <= 100; i++) {
        soma += i;
        qtd++;
    }

    media = (float)soma / qtd;

    printf("Media aritmetica: %.2f\n", media);

    return 0;
}