/*
Problema: Implemente uma função, utilizando o conceito de recursão, que 
receba um número inteiro N não negativo e retorne a soma de seus dígitos. 
Cabeçalho: int somaDigitos(int n); 
 
• Entrada: um número N positivo. 
• Saída: A soma dos dígitos
*/

#include <stdio.h>

int somaDigitos(int n);

int main () {
    int n, soma;

    scanf("%d", &n);

    soma = somaDigitos(n);

    printf("%d\n", soma);

    return 0;
}

int somaDigitos(int n) {
    if (n <= 9) {
        return n;
    } else {
        return somaDigitos(n / 10) + (n % 10);
    }
}