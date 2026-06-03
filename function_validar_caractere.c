#include <stdio.h>

int validar_caractere(char caractere) {
    if (caractere == 'O' || caractere == 'X') {
        return 1;
    }
    return 0;
}
