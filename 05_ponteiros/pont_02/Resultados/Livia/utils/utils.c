#include "utils.h"
#include <stdio.h>

void LeIntervalo(int * m, int * n) {
    scanf("%d %d", m, n);
}

int EhPrimo(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void ObtemMaiorEMenorPrimo(int m, int n, int *menor, int *maior) {
    for (int i = m; i <= n; i++) {
        if (EhPrimo(i)) {
            *menor = i;
            *maior = i;
            break;
        }
    }

    for (int i = m; i <= n; i++) {
        if (EhPrimo(i)) {
            if (i > *maior)
                *maior = i;
            //if (i < *menor)
            //    *menor = i;
        }
    }
}