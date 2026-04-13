// 49)
#include <stdio.h>

int main() {
    float n1, n2;
    char r = 'S';
    
    while (r == 'S' || r == 's') {
        while(1) {
            printf("\nNota da primeira prova: ");
            scanf(" %f", &n1);
            if(0<=n1 && n1<=10) {
                break;
            }
            else {
                printf("A nota deve estar entre 0-10...");
            }
        }
        while(1) {
            printf ("\nNota da segunda prova: ");
            scanf(" %f", &n2);
            if(0<=n2 && n2<=10) {
                break;
            }
            else {
                printf("A nota deve estar entre 0-10...");
            }    
        }
        printf("\nA média simples entre as duas notas é %.2f", (n1+n2)/2);
        printf("\n\n");
        printf("NOVO CÁLCULO (S/N)?");
        scanf(" %c", &r);
    }
    return 0;
}