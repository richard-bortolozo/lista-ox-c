#include <stdio.h>
#include "function_validar_caractere.c"

int main(int argc, char *argv[]) {
    char lista[9] = {0};
    char caractere;

    for (int i = 0; i < 9; i++) {
        if (argc > 1) {
            caractere = argv[i + 1][0];
        } else {
            printf("Digite o caractere %d da lista: ", i + 1);
            scanf(" %c", &caractere);
        }

        while (!validar_caractere(caractere)) {
            printf("caractere invalido\n");
            printf("Digite o caractere %d da lista: ", i + 1);
            scanf(" %c", &caractere);
        }

        lista[i] = caractere;
    }

    for (int i = 0; i < 9; i++) {
        printf("Caractere %d: %c\n", i + 1, lista[i]);
    }

    printf("Criado por Richard Bortolozo");
    return 0;
}
