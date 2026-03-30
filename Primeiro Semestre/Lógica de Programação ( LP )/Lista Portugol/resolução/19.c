// 19)
#include <stdio.h>

int main() {
    float comp, larg, alt, area, caixas;

    printf("Comprimento da cozinha: ");
    scanf("%f", &comp);

    printf("Largura da cozinha: ");
    scanf("%f", &larg);

    printf("Altura da cozinha: ");
    scanf("%f", &alt);

    area = 2 * alt * (comp + larg);
    caixas = area / 1.5;

    printf("Quantidade de caixas: %.0f\n", caixas);

    return 0;
}