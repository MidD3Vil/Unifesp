// Ex 33
#include <stdio.h>

void inverterVetor(int v[], int inicio, int fim) {
    if (inicio >= fim)
        return;

    int aux = v[inicio];
    v[inicio] = v[fim];
    v[fim] = aux;

    inverterVetor(v, inicio + 1, fim - 1);
}

int main() {
    int v[100];
    int i;

    printf("Digite 100 numeros reais:\n");

    for (i = 0; i < 100; i++)
        scanf("%d", &v[i]);

    inverterVetor(v, 0, 99);

    printf("Vetor invertido:\n");

    for (i = 0; i < 100; i++)
        printf("%d ", v[i]);

    return 0;
}
