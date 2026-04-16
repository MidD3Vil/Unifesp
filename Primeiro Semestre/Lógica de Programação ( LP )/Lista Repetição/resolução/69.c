// 69)
#include <stdio.h>

int main() {
    float valor, soma = 0, media;
    int qtd = 0;
    char r = 'S';

    while (r == 'S' || r == 's') {

        printf("Digite o valor da mercadoria: ");
        scanf("%f", &valor);

        soma += valor;
        qtd++;

        printf("MAIS MERCADORIAS (S/N)? ");
        scanf(" %c", &r); // espaço importante!
    }

    if (qtd > 0) {
        media = soma / qtd;

        printf("\nValor total em estoque: %.2f\n", soma);
        printf("Media das mercadorias: %.2f\n", media);
    } else {
        printf("\nNenhuma mercadoria foi informada.\n");
    }

    return 0;
}