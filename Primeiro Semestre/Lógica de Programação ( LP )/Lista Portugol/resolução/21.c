// 21)
#include <stdio.h>

int main() {
    float pista, consumo, litros;
    int voltas, reab;

    printf("Comprimento da pista (m): ");
    scanf("%f", &pista);

    printf("Numero de voltas: ");
    scanf("%d", &voltas);

    printf("Numero de reabastecimentos: ");
    scanf("%d", &reab);

    printf("Consumo (Km/L): ");
    scanf("%f", &consumo);

    float dist_total = (pista * voltas) / 1000;
    float dist_parte = dist_total / (reab + 1);

    litros = dist_parte / consumo;

    printf("Litros necessarios: %.2f\n", litros);

    return 0;
}