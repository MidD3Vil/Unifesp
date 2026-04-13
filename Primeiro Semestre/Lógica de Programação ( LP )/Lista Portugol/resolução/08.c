// 08)
#include <stdio.h>

int main() {
    float metros, centimetros;

    printf("Digite o valor em metros: ");
    scanf("%f", &metros);

    centimetros = metros * 100;

    printf("Valor em centimetros: %.2f cm\n", centimetros);
    
    return 0;
}
