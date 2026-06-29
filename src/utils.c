#include "../include/utils.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void remover_enter(char *str)
{
    *(str+strlen(str)-1) = '\0';
}


void formatar_maiuscula(char *str)
{
    for (int i = 0; i < strlen(str); i++) {
        *(str+i) = toupper(*(str+i));
    }
}

void limpar_tela()
{
    system("clear");
}
