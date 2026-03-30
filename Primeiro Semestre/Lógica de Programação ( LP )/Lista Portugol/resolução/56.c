// 56)
#include <stdio.h>

int main() {
    int a, b, op;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("Operacao (1=+ 2=- 3=/ 4=*): ");
    scanf("%d", &op);

    if (op == 1)
        printf("Resultado: %d\n", a + b);
    else if (op == 2)
        printf("Resultado: %d\n", a - b);
    else if (op == 3)
        printf("Resultado: %d\n", a / b);
    else if (op == 4)
        printf("Resultado: %d\n", a * b);

    return 0;
}