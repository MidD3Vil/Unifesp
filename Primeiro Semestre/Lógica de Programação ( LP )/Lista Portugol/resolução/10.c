// 10)
#include <stdio.h>

int main() {
    float salario_hora, salario;
    int horas_mes;
    
    printf("Quanto você ganha por hora? ");
    scanf("%f", &salario_hora);
    
    printf("\nQuantas horas você trabalha por mês? ");
    scanf("%d", &horas_mes);
    
    salario = salario_hora * horas_mes;
    printf("Seu salário mensal é de R$%.2f", salario);
    
    return 0;
}
