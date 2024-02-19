/*
Problema: Implemente uma função, utilizando o conceito de recursão, que 
receba uma string como parâmetro e a imprima de trás para frente.  
Cabeçalho: void ImprimeInvertido(char* string); 
Utilizando  a  função  anterior,  faça  um  programa  que  leia  palavras  de  um  texto 
(considere  palavras  como  uma  sequência  de  caracteres  diferentes  de  espaço)  e  as 
imprime de trás para frente. 
 
Definição dos formatos de entrada e saída: 
• Entrada: um texto contendo palavras com no máximo 1000 caracteres cada. 
• Saída: o texto com as palavras impressas de trás para frente.
*/

#include <stdio.h>

void ImprimeInvertido(char* string);

int main () {
    char string[1000];

    while (scanf("%s", string) == 1) {
        ImprimeInvertido(string);
        printf(" ");
    }

    return 0;
}

void ImprimeInvertido(char* string) {
    if (*string == '\0')
        return;
    
    ImprimeInvertido(string + 1);
    printf("%c", *string);
}