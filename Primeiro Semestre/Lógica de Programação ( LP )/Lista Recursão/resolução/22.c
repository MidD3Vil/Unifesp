// Ex 22
#include <stdio.h>

int fibg(int f0, int f1, int n) {
    if (n == 0)
        return f0;

    if (n == 1)
        return f1;

    return fibg(f0, f1, n - 1) + fibg(f0, f1, n - 2);
}

int main() {
    int f0, f1, n;

    printf("f0: ");
    scanf("%d", &f0);

    printf("f1: ");
    scanf("%d", &f1);

    printf("n: ");
    scanf("%d", &n);

    printf("Termo = %d\n", fibg(f0, f1, n));

    return 0;
}
