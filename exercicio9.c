#include <stdio.h>
#include <stdlib.h>

int main() {
   int num1, num2, num3;
   int maior, menor;

   printf("Digite três números:\n");
   scanf("%d %d %d", &num1, &num2, &num3);

   if (num1 > num2 && num1 > num3) {
      maior = num1;
   } else if (num2 > num1 && num2 > num3) {
      maior = num2;
   } else {
      maior = num3;
   }

   if (num1 < num2 && num1 < num3) {
      menor = num1;
   } else if (num2 < num1 && num2 < num3) {
      menor = num2;
   } else {
      menor = num3;
   }

   printf("O maior número é %d e o menor número é %d.\n", maior, menor);

   return 0;
}