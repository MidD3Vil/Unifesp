// Ex 12
#include <stdio.h>

int menor(int v[], int n) {
    if (n == 1)
        return v[0];

    int m = menor(v, n - 1);

    if (v[n - 1] < m)
        return v[n - 1];

    return m;
}

int main() {
    int n, i;

    printf("Quantidade de elementos: ");
    scanf("%d", &n);

    int v[n];

    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);

    printf("Menor = %d\n", menor(v, n));

    return 0;
}
