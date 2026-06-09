// Ex 23
#include <stdio.h>

int somaVetor(int v[], int n) {
    if (n == 0)
        return 0;

    return v[n - 1] + somaVetor(v, n - 1);
}

int main() {
    int n, i;

    printf("Quantidade de elementos: ");
    scanf("%d", &n);

    int v[n];

    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);

    printf("Soma = %d\n", somaVetor(v, n));

    return 0;
}
