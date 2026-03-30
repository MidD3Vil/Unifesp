// 18)
#include <stdio.h>

int main() {
    float potencia, largura, comprimento, area, total_watts, lampadas;

    printf("Potencia da lampada (W): ");
    scanf("%f", &potencia);

    printf("Largura do comodo (m): ");
    scanf("%f", &largura);

    printf("Comprimento do comodo (m): ");
    scanf("%f", &comprimento);

    area = largura * comprimento;
    total_watts = area * 18;
    lampadas = total_watts / potencia;

    printf("Quantidade de lampadas: %.0f\n", lampadas);

    return 0;
}