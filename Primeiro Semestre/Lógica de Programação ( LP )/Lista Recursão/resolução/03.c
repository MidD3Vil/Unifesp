// Ex 3
#include <stdio.h>

long long somaCubos(int n) {
    if (n == 1)
        return 1;

    return n * n * n + somaCubos(n - 1);
}

int main() {
    int n;

    printf("Digite n: ");
    scanf("%d", &n);

    printf("Soma dos cubos = %lld\n", somaCubos(n));

    return 0;
}
