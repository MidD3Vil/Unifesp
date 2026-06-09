// Ex 14
#include <stdio.h>

void imprimeSerie(int i, int j, int k) {
    if (i > j)
        return;

    printf("%d ", i);

    imprimeSerie(i + k, j, k);
}

int main() {
    int i, j, k;

    printf("Inicio: ");
    scanf("%d", &i);

    printf("Fim: ");
    scanf("%d", &j);

    printf("Incremento: ");
    scanf("%d", &k);

    imprimeSerie(i, j, k);

    return 0;
}
