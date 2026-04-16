// 65)
#include <stdio.h>

int main() {
    int a, b, i, soma = 0;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    for (i = a; i <= b; i++) {
        soma += i;
    }

    printf("Soma dos valores entre %d e %d: %d\n", a, b, soma);

    return 0;
}