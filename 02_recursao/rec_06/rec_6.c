/*
Problema: Implemente uma função, utilizando o conceito de recursão, que 
receba um número inteiro N não negativo e calcule o N-ésimo termo da sequência de 
Fibonacci. 
A sequência de Fibonacci é uma série matemática que começa com os números 0 e 1, 
e  cada  número  subsequente  é  a  soma  dos  dois  números  anteriores.  Portanto,  a 
sequência começa assim: 
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... 
Cabeçalho: int fibonacci(int n); 
 
• Entrada: um número N positivo. 
• Saída: N-ésimo termo da sequência de Finonacci. 
*/

#include <stdio.h>

int fibonacci(int n);

int main () {
    int num;

    scanf("%d", &num);

    printf("%d\n", fibonacci(num));

    return 0;
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else
        return fibonacci(n-1) + fibonacci(n - 2);
}