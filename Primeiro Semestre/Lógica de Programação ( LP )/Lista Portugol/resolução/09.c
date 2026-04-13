// 09)
#include <stdio.h>

int main() {
    float lado, area, dobro_area;
    
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado;
    dobro_area = area * 2;
    
    printf("A área do quadrado é %.2f e o dobro é %.2f", area, dobro_area);
    return 0;
}
