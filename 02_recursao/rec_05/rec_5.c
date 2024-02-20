/*
Problema: Implemente uma função, utilizando o conceito de recursão, que 
receba um número inteiro não negativo e calcule o seu fatorial.  
Cabeçalho: int fatorial(int n); 
 
• Entrada: um número n positivo. 
• Saída: fatorial de n.
*/

#include <stdio.h>

int fatorial(int n); 

int main () {
    int num, fat;

    scanf("%d", &num);

    fat = fatorial(num);

    printf("%d\n", fat);
}

int fatorial(int n) {
    if (n == 1)
        return 1;
    else
        return n * fatorial(n - 1);
}