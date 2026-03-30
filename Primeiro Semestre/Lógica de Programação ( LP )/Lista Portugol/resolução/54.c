// 54)
#include <stdio.h>

int main() {
    int lados;
    float medida;

    printf("Numero de lados: ");
    scanf("%d", &lados);

    printf("Medida do lado: ");
    scanf("%f", &medida);

    if (lados == 3)
        printf("TRIANGULO - Perimetro: %.2f\n", lados * medida);
    else if (lados == 4)
        printf("QUADRADO - Area: %.2f\n", medida * medida);
    else if (lados == 5)
        printf("PENTAGONO\n");

    return 0;
}