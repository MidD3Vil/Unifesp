// Ex 32
#include <stdio.h>

void binario(int n) {
    if (n == 0)
        return;

    binario(n / 2);
    printf("%d", n % 2);
}

int main() {
    int n;

    printf("Digite um numero decimal: ");
    scanf("%d", &n);

    if (n == 0)
        printf("0");
    else
        binario(n);

    printf("\n");

    return 0;
}
