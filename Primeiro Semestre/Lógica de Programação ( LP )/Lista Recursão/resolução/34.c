// Ex 34
#include <stdio.h>

int inverterNumero(int n, int inv) {
    if (n == 0)
        return inv;

    return inverterNumero(n / 10, inv * 10 + (n % 10));
}

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("Invertido = %d\n", inverterNumero(n, 0));

    return 0;
}
