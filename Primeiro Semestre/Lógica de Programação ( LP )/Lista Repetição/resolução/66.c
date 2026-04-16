// 66)
#include <stdio.h>

int main() {
    int a, b, i, soma = 0, inicio, fim;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    if (a < b) {
        inicio = a;
        fim = b;
    } else {
        inicio = b;
        fim = a;
    }

    for (i = inicio; i <= fim; i++) {
        soma += i;
    }

    printf("Soma dos valores entre %d e %d: %d\n", inicio, fim, soma);

    return 0;
}