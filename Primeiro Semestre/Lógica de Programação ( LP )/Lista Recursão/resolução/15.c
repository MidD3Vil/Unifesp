// Ex 15
#include <stdio.h>

double serie(int n) {
    if (n == 1)
        return 2.0;

    return ((n * n + 1.0) / n) + serie(n - 1);
}

int main() {
    int n;

    printf("Digite n: ");
    scanf("%d", &n);

    printf("S = %.2lf\n", serie(n));

    return 0;
}
