/*
Problema: Implemente uma função, utilizando o conceito de recursão, que 
receba uma string e tamanho, e retorne verdadeiro se a string for palindroma ou falso 
caso contrário.  
Cabeçalho: int palindromo(char *string, int tamanho);  
Uma string é palindroma quando os elementos de índices opostos são iguais. Exemplo 
de  palindromos:  aba,  caac,  thiagoogaiht,  etc.  Utilizando  a  função  anterior,  faça  um 
programa para testar a função. O programa deverá ler palavras e imprimir SIM caso 
ela seja palindroma ou NÃO caso contrário. 
 
Definição dos formatos de entrada e saída: 
• Entrada: palavras. 
• Saída: “SIM” se a palavra for palindroma ou “NAO” caso contrário.
*/

#include <stdio.h>
#include <string.h>

int palindromo(char *string, int tamanho);

int main () {
    char string[50];
    int p;
    while (scanf("%s", string) == 1) {
        p = palindromo(string, strlen(string));
        if (p == 1) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
    }

    

    return 0;
}

    int palindromo(char *string, int tamanho) {
    if (tamanho <= 1) {
        return 1;
    } else if (*string == string[tamanho - 1]) {
        return palindromo(string + 1, tamanho - 2);
    } else {
        return 0;
    }
}
