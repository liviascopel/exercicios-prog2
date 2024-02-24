#include "string_utils.h"

int string_length(char *str){
    int cont = 0;

    while (str[cont] != '\0') {
        cont++;
    }

    return cont;
}

void string_copy(char *src, char *dest) {
    for (int i = 0; i <= string_length(src); i++) {
        dest[i] = src[i];
    }
}

void string_upper(char *str) {
    for (int i = 0; i < string_length(str); i++) {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] =  str[i] - 32;
    }
}

void string_lower(char *str) {
    for (int i = 0; i < string_length(str); i++) {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] =  str[i] + 32;
    }
}

void string_reverse(char *str) {
    char aux[string_length(str)];

    for (int i = 0; i < string_length(str); i++) {
        aux[i] = str[string_length(str) - 1 - i]; // Copiar los caracteres en orden inverso
    }
    aux[string_length(str)] = '\0';
    string_copy(aux, str);
}