// Ex 10
#include <stdio.h>

void paresDecrescente(int n) {
    if (n < 0)
        return;

    printf("%d ", n);

    paresDecrescente(n - 2);
}

int main() {
    int n;

    printf("Digite um numero par: ");
    scanf("%d", &n);

    paresDecrescente(n);

    return 0;
}
