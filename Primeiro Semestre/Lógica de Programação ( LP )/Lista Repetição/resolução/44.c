// 44)
#include <stdio.h>

int main() {
   float num, divi;
   float den = 0;
   
   printf("Digite o numerador: ");
   scanf("%f", &num);
   
   for(;;) {
      printf("\nDigite o denominador: ");
      scanf("%f", &den);
      if(den!=0) {
          break;
      }    
      else {
          printf("\nO denominador NÃO PODE ser igual a zero...");
      }
   }
   
   divi = num/den;
   printf("A divisão de %.2f por %.2f é igual a %.2f", num, den, divi);
   return 0;
}