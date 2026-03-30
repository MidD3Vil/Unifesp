// 59)
#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os tres angulos: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 90 || b == 90 || c == 90)
        printf("Retangulo\n");
    else if (a > 90 || b > 90 || c > 90)
        printf("Obtusangulo\n");
    else
        printf("Acutangulo\n");

    return 0;
}