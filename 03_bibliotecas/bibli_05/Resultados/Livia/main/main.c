#include "string_utils.h"
#include <stdio.h>

int main () {
    char string[50];
    int opcao;
    scanf("%[^\n]", string);

    do {
        printf("1 - Tamanho da string\n");
        printf("2 - Copiar string\n");
        printf("3 - Converter string para letras maiusculas\n");
        printf("4 - Converter string para letras minusculas\n");
        printf("5 - Imprimir string ao contrario\n");
        printf("6 - Encerrar o programa\n");
        printf("Opcao escolhida: \n");
        scanf("%d",&opcao);
        if (opcao == 1) {
            printf("Tamanho da string: %d\n\n", string_length(string));
        } else if (opcao == 2) {
            char dest[string_length(string)];
            string_copy(string, dest);
            printf("String copiada: %s\n\n", dest);
        } else if (opcao == 3) {
            string_upper(string);
            printf("String convertida para maiusculas: %s\n\n", string);
        } else if (opcao == 4) {
            string_lower(string);
            printf("String convertida para minusculas: %s\n\n", string);
        } else if (opcao == 5) {
            string_reverse(string);
            printf("String invertida: %s\n\n", string);
        }
    } while (opcao != 6);

    return 0;
}