#include <stdio.h>
#include "function_validar_caractere.c"

int main() {
    if (!validar_caractere('O')) {
        printf("Erro no teste com O\n");
        return 1;
    }

    if (!validar_caractere('X')) {
        printf("Erro no teste com X\n");
        return 1;
    }

    if (validar_caractere('A')) {
        printf("Erro no teste com caractere invalido\n");
        return 1;
    }

    printf("Todos os testes passaram\n");
    printf("Criado por Richard Bortolozo");
    return 0;
}
