// Ex 9
#include <stdio.h>

void paresCrescente(int n) {
    if (n == 0) {
        printf("0 ");
        return;
    }

    paresCrescente(n - 2);
    printf("%d ", n);
}

int main() {
    int n;

    printf("Digite um numero par: ");
    scanf("%d", &n);

    paresCrescente(n);

    return 0;
}
