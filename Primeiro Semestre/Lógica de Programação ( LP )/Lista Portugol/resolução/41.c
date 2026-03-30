// 41)
#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    if (a == b)
        printf("Numeros iguais\n");
    else if (a > b)
        printf("Primeiro e maior\n");
    else
        printf("Segundo maior\n");

    return 0;
}