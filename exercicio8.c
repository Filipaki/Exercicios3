#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
int num;

printf("insira sua idade:");
	scanf("%d", &num);	

if (num>18 || num==18 ){
	printf("voce e maior de idade");
}
else{
	printf("voce e menor de idade");
}
return 0;	
}

int main() {
    char nome[100];

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    if (strcmp(nome, "Joao") == 0 || strcmp (nome, "Maria") || strcmp(nome, "joao") == 0 || strcmp(nome, "maria") == 0) {
        printf("Bom dia, %s\n", nome);
    } else {
        printf("Voce nao e Joao e nem Maria!\n");
    }
return 0;
}