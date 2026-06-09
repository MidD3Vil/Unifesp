// Ex 1
#include <stdio.h>

int soma(int n) {
    if (n == 1)
        return 1;

    return n + soma(n - 1);
}

int main() {
    int n;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    printf("Somatorio = %d\n", soma(n));

    return 0;
}
