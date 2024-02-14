/*
• Entrada: Um número na base decimal. 
• Saída: O número convertido para base octal. 
*/

#include <stdio.h>
#include <math.h>

int main() {
    int num_decimal, cont = 0, resto;
    int num_octal[50];

    scanf("%d", &num_decimal);

    while (num_decimal > 7) {
        resto = num_decimal % 8;
        num_decimal = num_decimal / 8;
        num_octal[cont] = resto;
        cont++;
    }
    num_octal[cont] = num_decimal;

    for (int i = cont; i >= 0; i--) {
        printf("%d", num_octal[i]);
    }

    return 0;
}