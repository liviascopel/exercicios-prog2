#include <stdio.h>
#include <stdlib.h>
#include "tadgen.h"

int main () {
    int tipo, qtd;
    printf("tad_gen_01\n");
    printf("Digite o tipo e numero de elementos: ");
    scanf("%d %d", &tipo, &qtd);

    tGeneric * gen = CriaGenerico(tipo, qtd);

    LeGenerico(gen);
    ImprimeGenerico(gen);
    DestroiGenerico(gen);

    return 0;
}