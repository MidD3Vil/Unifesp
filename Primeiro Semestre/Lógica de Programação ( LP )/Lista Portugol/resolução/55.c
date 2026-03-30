// 55)
#include <stdio.h>

int main() {
    int lados;

    printf("Numero de lados: ");
    scanf("%d", &lados);

    if (lados < 3)
        printf("NAO E UM POLIGONO\n");
    else if (lados > 5)
        printf("POLIGONO NAO IDENTIFICADO\n");

    return 0;
}