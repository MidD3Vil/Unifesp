// Ex 4
#include <stdio.h>

long long potencia(int k, int n) {
    if (n == 0)
        return 1;

    return k * potencia(k, n - 1);
}

int main() {
    int k, n;

    printf("Base: ");
    scanf("%d", &k);

    printf("Expoente: ");
    scanf("%d", &n);

    printf("Resultado = %lld\n", potencia(k, n));

    return 0;
}
