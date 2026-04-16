// 64)
#include <stdio.h>

int main() {
    int i;
    float num, soma = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%f", &num);

        if (num < 40) {
            soma += num;
        }
    }

    printf("Soma dos numeros menores que 40: %.2f\n", soma);

    return 0;
}