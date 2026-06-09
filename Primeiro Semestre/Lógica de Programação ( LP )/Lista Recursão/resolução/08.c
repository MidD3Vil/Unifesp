// Ex 8
#include <stdio.h>

void decrescente(int n) {
    if (n < 0)
        return;

    printf("%d ", n);

    decrescente(n - 1);
}

int main() {
    int n;

    printf("Digite N: ");
    scanf("%d", &n);

    decrescente(n);

    return 0;
}
