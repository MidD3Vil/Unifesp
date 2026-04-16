// 68)
#include <stdio.h>

int main() {
    int i, total_mercadorias;
    float valor, soma = 0, media;

    printf("Digite o numero total de mercadorias: ");
    scanf("%d", &total_mercadorias);

    for (i = 1; i <= total_mercadorias; i++) {
        printf("Digite o valor da mercadoria %d: ", i);
        scanf("%f", &valor);

        soma += valor;
    }

    media = soma / total_mercadorias;

    printf("\nValor total em estoque: %.2f\n", soma);
    printf("Media de valor das mercadorias: %.2f\n", media);

    return 0;
}