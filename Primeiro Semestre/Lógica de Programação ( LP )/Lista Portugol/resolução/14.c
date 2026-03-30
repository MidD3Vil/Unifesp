// 14)
#include <stdio.h>

int main() {
    int carros_vendidos;
    float valor_vendas, salario_fixo, comissao_por_carro, salario_final;

    printf("Numero de carros vendidos: ");
    scanf("%d", &carros_vendidos);

    printf("Valor total das vendas: ");
    scanf("%f", &valor_vendas);

    printf("Salario fixo: ");
    scanf("%f", &salario_fixo);

    printf("Comissao por carro vendido: ");
    scanf("%f", &comissao_por_carro);

    salario_final = salario_fixo + (carros_vendidos * comissao_por_carro) + (valor_vendas * 0.05);

    printf("Salario final: %.2f\n", salario_final);

    return 0;
}