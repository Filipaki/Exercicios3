#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float peso, alt, IMC;

    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%f", &alt);

    IMC = peso / (alt * alt);

    printf("Seu IMC e: %.2f\n", IMC);

    if (IMC
	 < 18.5) {
        printf("Abaixo do peso.\n");
    } else if (IMC < 25) {
        printf("Peso normal.\n");
    } else if (IMC < 30) {
        printf("Sobrepeso.\n");
    } else if (IMC < 35) {
        printf("Obesidade grau 1.\n");
    } else if (IMC < 40) {
        printf("Obesidade grau 2.\n");
    } else {
        printf("Obesidade grau 3.\n");
    }

    return 0; 	
}