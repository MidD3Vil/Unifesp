// Ex 17
#include <stdio.h>

long long fat(int n) {
    if (n <= 1)
        return 1;

    return n * fat(n - 1);
}

long long fatorialQuadruplo(int n) {
    return fat(2 * n) / fat(n);
}

int main() {
    int n;

    printf("Digite n: ");
    scanf("%d", &n);

    printf("Resultado = %lld\n", fatorialQuadruplo(n));

    return 0;
}
