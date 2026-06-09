// Ex 13
#include <stdio.h>

int somaSerie(int i, int j, int k) {
    if (i > j)
        return 0;

    return i + somaSerie(i + k, j, k);
}

int main() {
    int i, j, k;

    printf("Inicio: ");
    scanf("%d", &i);

    printf("Fim: ");
    scanf("%d", &j);

    printf("Incremento: ");
    scanf("%d", &k);

    printf("Soma = %d\n", somaSerie(i, j, k));

    return 0;
}
