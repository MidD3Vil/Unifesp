// Ex 16
#include <stdio.h>

long long fatorialDuplo(int n) {
    if (n <= 1)
        return 1;

    return n * fatorialDuplo(n - 2);
}

int main() {
    int n;

    printf("Digite um numero impar: ");
    scanf("%d", &n);

    printf("%d!! = %lld\n", n, fatorialDuplo(n));

    return 0;
}
