// Ex 2
#include <stdio.h>

long long fatorial(int n) {
    if (n <= 1)
        return 1;

    return n * fatorial(n - 1);
}

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Fatorial = %lld\n", fatorial(n));

    return 0;
}
