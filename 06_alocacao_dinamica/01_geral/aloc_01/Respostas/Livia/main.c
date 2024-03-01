#include <stdio.h>
#include "utils.h"
#include <stdlib.h>

int main () {
    int qtd;
    scanf("%d", &qtd);
    int *v = CriaVetor(qtd);
    LeVetor(v, qtd);
    printf("%.2f", CalculaMedia(v, qtd));
    LiberaVetor(v);

    return 0;
}