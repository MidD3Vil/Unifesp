// Ex 6
#include <stdio.h>

int multipRec(int a, int b) {
    if (b == 0)
        return 0;

    return a + multipRec(a, b - 1);
}

int main() {
    int a, b;

    printf("Primeiro numero: ");
    scanf("%d", &a);

    printf("Segundo numero: ");
    scanf("%d", &b);

    printf("Resultado = %d\n", multipRec(a, b));

    return 0;
}
