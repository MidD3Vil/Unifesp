// 20)
#include <stdio.h>

int main() {
    float km_inicio, km_fim, litros, valor, consumo, lucro;

    printf("Km inicial: ");
    scanf("%f", &km_inicio);

    printf("Km final: ");
    scanf("%f", &km_fim);

    printf("Litros gastos: ");
    scanf("%f", &litros);

    printf("Valor recebido: ");
    scanf("%f", &valor);

    consumo = (km_fim - km_inicio) / litros;
    lucro = valor - (litros * 2.90);

    printf("Consumo: %.2f km/l\n", consumo);
    printf("Lucro do dia: %.2f\n", lucro);

    return 0;
}