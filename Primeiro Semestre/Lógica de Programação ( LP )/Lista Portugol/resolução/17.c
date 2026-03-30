// 17)
#include <stdio.h>

int main() {
    float r, area;
    const float pi = 3.14159;

    printf("Digite o raio do circulo: ");
    scanf("%f", &r);

    area = pi * r * r;

    printf("Area do circulo: %.2f\n", area);

    return 0;
}