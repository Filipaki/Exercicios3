#include <stdio.h>
#include <string.h>

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
