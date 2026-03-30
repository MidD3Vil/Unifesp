// 11)
#include <stdio.h>

int main() {
    int total_eleitores, brancos, nulos, validos;
    float p_brancos, p_nulos, p_validos;

    printf("Digite o total de eleitores: ");
    scanf("%d", &total_eleitores);

    printf("Digite o numero de votos brancos: ");
    scanf("%d", &brancos);

    printf("Digite o numero de votos nulos: ");
    scanf("%d", &nulos);

    printf("Digite o numero de votos validos: ");
    scanf("%d", &validos);

    p_brancos = (brancos * 100.0) / total_eleitores;
    p_nulos = (nulos * 100.0) / total_eleitores;
    p_validos = (validos * 100.0) / total_eleitores;

    printf("\nPercentual de votos brancos: %.2f%%", p_brancos);
    printf("\nPercentual de votos nulos: %.2f%%", p_nulos);
    printf("\nPercentual de votos validos: %.2f%%\n", p_validos);

    return 0;
}