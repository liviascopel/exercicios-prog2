/*
Faça um programa que receba um valor inteiro N e imprima as 
N linhas do triângulo a seguir, conhecido como triangulo de Floyd. (no caso de N = 5): 
 
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
 
Definição dos formatos de entrada e saída: 
• Entrada: Um valor inteiro N. 
• Saída: As N linhas do triângulo de Floyd.
*/

#include <stdio.h>

int main() {
    int num;
    int contador = 1;

    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", contador);
            contador++;
        }
        printf("\n");
    }

    return 0;
}